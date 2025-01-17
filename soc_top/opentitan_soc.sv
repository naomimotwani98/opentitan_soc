
module opentitan_soc #(
    parameter bit                 PMPEnable        = 1'b0,
    parameter int unsigned        PMPGranularity   = 0,
    parameter int unsigned        PMPNumRegions    = 0,
    parameter int unsigned        MHPMCounterNum   = 0,
    parameter int unsigned        MHPMCounterWidth = 40,
    parameter bit                 RV32E            = 1'b0,
    parameter bit                 BranchTargetALU  = 1'b0,
    parameter bit                 WritebackStage   = 1'b1,
    parameter bit                 ICache           = 1'b0,
    parameter bit                 ICacheECC        = 1'b0,
    parameter bit                 BranchPredictor  = 1'b0,
    parameter bit                 DbgTriggerEn     = 1'b0,
    parameter int unsigned        DbgHwBreakNum    = 1,
    parameter bit                 SecureIbex       = 1'b0,
    parameter int unsigned        DmHaltAddr       = 0,
    parameter int unsigned        DmExceptionAddr  = 0
)
(
  input clk_i,
  input rst_ni,

  input  logic              test_en_i,     // enable all clock gates for testing
  input  logic [31:0]       hart_id_i,
  input  logic [31:0]       boot_addr_i,
  
  // Interrupt inputs
  input  logic        irq_software_i,
  input  logic        irq_timer_i,
  input  logic        irq_external_i,
  input  logic [14:0] irq_fast_i,
  input  logic        irq_nm_i,       // non-maskeable interrupt

  // CPU Control Signals
  input  logic        fetch_enable_i,
  output logic        alert_minor_o,
  output logic        alert_major_o,
  output logic        core_sleep_o
);
  // import ibex_pkg::*;

  // logic  rst_ni;
  // assign rst_ni = reset;
  // Instruction interface (internal)
  logic        instr_req;
  logic        instr_gnt;
  logic        instr_rvalid;
  logic [31:0] instr_addr;
  logic [31:0] instr_rdata;
  logic        instr_err;

  // Data interface (internal)
  logic        data_req;
  logic        data_gnt;
  logic        data_rvalid;
  logic        data_we;
  logic [3:0]  data_be;
  logic [31:0] data_addr;
  logic [31:0] data_wdata;
  logic [31:0] data_rdata;
  logic        data_err;
  
  // instruction memory interface 
  tlul_pkg::tl_d2h_t tl_i_i;
  tlul_pkg::tl_h2d_t tl_i_o;

  // data memory interface 
  tlul_pkg::tl_d2h_t tl_d_i;
  tlul_pkg::tl_h2d_t tl_d_o;

  tlul_pkg::tl_h2d_t xbar_to_iccm;
  tlul_pkg::tl_d2h_t iccm_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_dccm;
  tlul_pkg::tl_d2h_t dccm_to_xbar;

  tlul_pkg::tl_h2d_t xbar_to_gpio;
  tlul_pkg::tl_d2h_t gpio_to_xbar;

  tlul_pkg::tl_h2d_t plic_req;
  tlul_pkg::tl_d2h_t plic_resp;

ibex_core #(
    .PMPEnable        (PMPEnable),
    .PMPGranularity   (PMPGranularity), 
    .PMPNumRegions    (PMPNumRegions), 
    .MHPMCounterNum   (MHPMCounterNum), 
    .MHPMCounterWidth (MHPMCounterWidth), 
    .RV32E            (RV32E), 
    // .RV32M            (RV32M), 
    // .RV32B            (RV32B), 
    .BranchTargetALU  (BranchTargetALU), 
    .WritebackStage   (WritebackStage), 
    .ICache           (ICache), 
    .ICacheECC        (ICacheECC), 
    .BranchPredictor  (BranchPredictor), 
    .DbgTriggerEn     (DbgTriggerEn), 
    .DbgHwBreakNum    (DbgHwBreakNum), 
    .SecureIbex       (SecureIbex),
    .DmHaltAddr       (DmHaltAddr), 
    .DmExceptionAddr  (DmExceptionAddr) 
) u_core (
    // Clock and Reset
    .clk_i (clk_i),
    .rst_ni(rst_ni),

    // .test_en_i (test_en_i),     // enable all clock gates for testing

    .hart_id_i  (hart_id_i),
    .boot_addr_i(boot_addr_i),

    // Instruction memory interface
    .instr_req_o    (instr_req),
    .instr_gnt_i    (instr_gnt),
    .instr_rvalid_i (instr_rvalid),
    .instr_addr_o   (instr_addr),
    .instr_rdata_i  (instr_rdata),
    .instr_err_i    (instr_err),

    // Data memory interface
    .data_req_o     (data_req),
    .data_gnt_i     (data_gnt),
    .data_rvalid_i  (data_rvalid),
    .data_we_o      (data_we),
    .data_be_o      (data_be),
    .data_addr_o    (data_addr),
    .data_wdata_o   (data_wdata),
    .data_rdata_i   (data_rdata),
    .data_err_i     (data_err),

    // Interrupt inputs
    .irq_software_i (irq_software_i),
    .irq_timer_i    (irq_timer_i),
    .irq_external_i (irq_external_i),
    .irq_fast_i     (irq_fast_i),
    .irq_nm_i       (irq_nm_i),       // non-maskeable interrupt

    // Debug Interface
    .debug_req_i    (1'b0),

    // RISC-V Formal Interface
    // Does not comply with the coding standards of _i/_o suffixes, but follows
    // the convention of RISC-V Formal Interface Specification.
`ifdef RVFI
    .rvfi_valid (),
    .rvfi_order (),
    .rvfi_insn (),
    .rvfi_trap (),
    .rvfi_halt (),
    .rvfi_intr (),
    .rvfi_mode (),
    .rvfi_ixl  (),
    .rvfi_rs1_addr (),
    .rvfi_rs2_addr (),
    .rvfi_rs3_addr (),
    .rvfi_rs1_rdata (),
    .rvfi_rs2_rdata (),
    .rvfi_rs3_rdata (),
    .rvfi_rd_addr  (),
    .rvfi_rd_wdata (),
    .rvfi_pc_rdata (),
    .rvfi_pc_wdata (),
    .rvfi_mem_addr (),
    .rvfi_mem_rmask (),
    .rvfi_mem_wmask (),
    .rvfi_mem_rdata (),
    .rvfi_mem_wdata (),
`endif

    // CPU Control Signals
    // .fetch_enable_i (fetch_enable_i),
    .alert_minor_o  (alert_minor_o),
    .alert_major_o  (alert_major_o),
    .core_busy_o    (~core_sleep_o)
);

tlul_adapter_host #(
    .MAX_REQS(2)
) intr_interface (
    .clk_i      (clk_i),
    .rst_ni     (rst_ni),
    .req_i      (instr_req),
    .gnt_o      (instr_gnt),
    .addr_i     (instr_addr),
    .we_i       (1'b0),
    .wdata_i    (32'b0),
    .be_i       (4'hF),
    .type_i     (tlul_pkg::InstrType),
    .valid_o    (instr_rvalid),
    .rdata_o    (instr_rdata),
    .err_o      (instr_err),
    .intg_err_o (),
    .tl_o   (tl_i_o),
    .tl_i   (tl_i_i)
);

tlul_adapter_host #(
    .MAX_REQS (2)
) data_interface (
    .clk_i      (clk_i),
    .rst_ni     (rst_ni),
    .req_i      (data_req),
    .gnt_o      (data_gnt),
    .addr_i     (data_addr),
    .we_i       (data_we),
    .wdata_i    (data_wdata),
    .be_i       (data_be),
    .type_i     (tlul_pkg::DataType),
    .valid_o    (data_rvalid),
    .rdata_o    (data_rdata),
    .err_o      (data_err),
    .intg_err_o (),
    .tl_o   (tl_d_o),
    .tl_i   (tl_d_i)
);

//peripheral xbar
xbar_periph periph_switch (
  .clk_i     (clk_i),
  .rst_ni    (rst_ni),

  /* Host interfaces */
  .tl_if_i   (tl_i_o), 
  .tl_if_o   (tl_i_i), 
  .tl_lsu_i  (tl_d_o),
  .tl_lsu_o  (tl_d_i),

  /* Device interfaces */
  .tl_iccm_o(xbar_to_iccm),
  .tl_iccm_i(iccm_to_xbar),
  
  .tl_dccm_o(xbar_to_dccm),
  .tl_dccm_i(dccm_to_xbar),

  // GPIOs
  .tl_gpio_o  (xbar_to_gpio),
  .tl_gpio_i  (gpio_to_xbar),

  // LDO 1
  .tl_ldo1_o  (),
  .tl_ldo1_i  (),

  // LDO 2
  .tl_ldo2_o  (),
  .tl_ldo2_i  (),

  // DCDC
  .tl_dcdc_o  (),
  .tl_dcdc_i  (),

  // PLL 1
  .tl_pll1_o  (),
  .tl_pll1_i  (),

  // Temp. Sensor 1
  .tl_tsen1_o  (),
  .tl_tsen1_i  (),

  // Temp. Sensor 2
  .tl_tsen2_o  (),
  .tl_tsen2_i  (),

  // DAP
  .tl_dap_o         (),
  .tl_dap_i         (),

  // PLIC
  .tl_plic_o  (plic_req),
  .tl_plic_i  (plic_resp)
);

// instr_mem_tlul iccm (
//   .clk_i    (clk_i),
//   .rst_ni   (rst_ni),
// 
//   // tl-ul insterface
//   .xbar_to_iccm   (xbar_to_iccm),
//   .iccm_to_xbar   (iccm_to_xbar)
// );
// 
// data_mem_tlul dccm(
//   .clk_i    (clk_i),
//   .rst_ni   (rst_ni),
// 
//   // tl-ul insterface
//   .xbar_to_dccm   (xbar_to_dccm),
//   .dccm_to_xbar   (dccm_to_xbar)
// );

endmodule
