// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceChgSub1(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 4233);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                       ? ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                            >> 1U) 
                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                       : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                          | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                             & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+1,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                       ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                           >> 1U) & 
                                          (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                       : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgBit(oldp+2,((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                       >> 1U) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->chgIData(oldp+3,((0x7fffffffU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                 + 
                                                 ((2U 
                                                   & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                      << 1U)) 
                                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+4,((0x7fffffffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                                  ? 
                                                 (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                                    ? 
                                                   (0xfffffffeU 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                                    : 0U) 
                                                  >> 1U)
                                                  : 
                                                 (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  + 
                                                  ((2U 
                                                    & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->chgIData(oldp+5,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->chgBit(oldp+6,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
        tracep->chgBit(oldp+7,(0U));
        tracep->chgBit(oldp+8,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->chgIData(oldp+9,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                   ? 0U : (0x1fU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0xfU)))),32);
        tracep->chgBit(oldp+10,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgBit(oldp+11,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                 & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec)))));
        tracep->chgBit(oldp+12,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                 & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec)))));
        tracep->chgBit(oldp+13,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+14,(((3U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgBit(oldp+15,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)))));
        tracep->chgBit(oldp+16,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush))));
        tracep->chgBit(oldp+17,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->chgIData(oldp+18,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                    ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                        << 0x1eU) | 
                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                        >> 2U)) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->chgQData(oldp+19,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        tracep->chgBit(oldp+21,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->chgQData(oldp+22,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                    ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                    : (1ULL | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                               << 1U)))),33);
        tracep->chgQData(oldp+24,((0x1ffffffffULL & 
                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                     ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                     : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                         ? (~ ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U))
                                         : ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            << 1U))))),33);
        tracep->chgBit(oldp+26,((1U & ((0x80000000U 
                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                           ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                        ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x1fU) 
                                           ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                        : (~ (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 0x20U)))))));
        tracep->chgQData(oldp+27,((0x7ffffffffULL & 
                                   (VL_MULS_QQQ(35,35,35, 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, 
                                                                 (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                   << 0x10U) 
                                                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                (0x7ffffffffULL 
                                                 & VL_EXTENDS_QI(35,17, 
                                                                 (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                   << 0x10U) 
                                                                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                    + VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        tracep->chgQData(oldp+29,((0x3ffffffffULL & 
                                   ((0x7ffffffffULL 
                                     & VL_MULS_QQQ(35,35,35, 
                                                   (0x7ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                   (0x7ffffffffULL 
                                                    & VL_EXTENDS_QI(35,17, 
                                                                    (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                    + (0x7ffffffffULL 
                                       & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        tracep->chgBit(oldp+31,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                  ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->chgBit(oldp+32,((1U & (IData)((1ULL 
                                               & ((VL_MULS_QQQ(35,35,35, 
                                                               (0x7ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                               (0x7ffffffffULL 
                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                   + 
                                                   VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                  >> 0x22U))))));
        tracep->chgIData(oldp+33,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((0xffffff00U 
                                            & ((IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 2U)) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 0x10U)))
                                        : ((0xffff0000U 
                                            & ((IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 2U)) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 8U))))
                                    : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((0xff000000U 
                                            & ((IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                        >> 2U)) 
                                               << 0x18U)) 
                                           | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                        : (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                   >> 2U))))),32);
        tracep->chgIData(oldp+34,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? ((0xffff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                          >> 9U))))) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & ((IData)(
                                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                               >> 2U)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                        >> 0x10U))))
                                            : ((0xff00U 
                                                & ((IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                            >> 2U)) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                     >> 0x10U))))
                                        : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? ((0xffff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                          >> 0x21U))))) 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 0x12U))))
                                            : (0xffffU 
                                               & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 0x12U)))))
                                    : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? ((0xffff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                          >> 0x19U))))) 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 0xaU))))
                                            : (0xffffU 
                                               & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 0xaU))))
                                        : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? ((0xffff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                          >> 0x11U))))) 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 2U))))
                                            : (0xffffU 
                                               & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 2U))))))),32);
        tracep->chgIData(oldp+35,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? ((0xffffff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                          >> 0x21U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 0x1aU))))
                                            : (0xffU 
                                               & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 0x1aU))))
                                        : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? ((0xffffff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                          >> 0x19U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 0x12U))))
                                            : (0xffU 
                                               & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 0x12U)))))
                                    : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? ((0xffffff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                          >> 0x11U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 0xaU))))
                                            : (0xffU 
                                               & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 0xaU))))
                                        : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? ((0xffffff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                                          >> 9U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                             >> 2U))))
                                            : (0xffU 
                                               & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                                          >> 2U))))))),32);
        tracep->chgBit(oldp+36,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        tracep->chgIData(oldp+37,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+38,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgCData(oldp+39,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->chgBit(oldp+40,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)) 
                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
        tracep->chgIData(oldp+41,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                    ? 0x20000001U : 
                                   (1U | (0xffffff00U 
                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->chgIData(oldp+42,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip),18);
        tracep->chgCData(oldp+43,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                    ? (5U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                    : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->chgBit(oldp+44,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        tracep->chgBit(oldp+45,(((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                        >> 8U)) > (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+46,(((3U == (3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                               >> 0xaU))) 
                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        tracep->chgBit(oldp+47,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->chgBit(oldp+48,((1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                        >> 2U) & (~ 
                                                  ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 2U))))));
        tracep->chgCData(oldp+49,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->chgCData(oldp+50,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                    ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                    : 0xfU)),4);
        tracep->chgBit(oldp+51,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->chgIData(oldp+52,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding),17);
        tracep->chgBit(oldp+53,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending));
        tracep->chgIData(oldp+54,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+55,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q),32);
        tracep->chgIData(oldp+56,((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                    & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                   & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+57,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                    & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                   & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+58,(((((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                       & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                     | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                         & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                    | ((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                       & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+59,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                >> 0x33U)) 
                                       & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [1U][0U]))));
        tracep->chgIData(oldp+60,((((0x200000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U])
                                     ? ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                         << 0xaU) | 
                                        (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                         >> 0x16U))
                                     : vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
                                       ? (~ ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [1U][0U] 
                                                >> 1U)))
                                       : 0xffffffffU))),32);
        tracep->chgBit(oldp+61,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+62,((1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                        : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+63,((1U & (vlTOPp->gpio_i 
                                       >> 1U))));
        tracep->chgBit(oldp+64,((1U & ((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 1U)))));
        tracep->chgBit(oldp+65,((1U & (vlTOPp->gpio_i 
                                       >> 2U))));
        tracep->chgBit(oldp+66,((1U & ((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 2U)))));
        tracep->chgBit(oldp+67,((1U & (vlTOPp->gpio_i 
                                       >> 3U))));
        tracep->chgBit(oldp+68,((1U & ((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 3U)))));
        tracep->chgBit(oldp+69,((1U & (vlTOPp->gpio_i 
                                       >> 4U))));
        tracep->chgBit(oldp+70,((1U & ((0x10U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 4U)))));
        tracep->chgBit(oldp+71,((1U & (vlTOPp->gpio_i 
                                       >> 5U))));
        tracep->chgBit(oldp+72,((1U & ((0x20U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 5U)))));
        tracep->chgBit(oldp+73,((1U & (vlTOPp->gpio_i 
                                       >> 6U))));
        tracep->chgBit(oldp+74,((1U & ((0x40U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 6U)))));
        tracep->chgBit(oldp+75,((1U & (vlTOPp->gpio_i 
                                       >> 7U))));
        tracep->chgBit(oldp+76,((1U & ((0x80U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 7U)))));
        tracep->chgBit(oldp+77,((1U & (vlTOPp->gpio_i 
                                       >> 8U))));
        tracep->chgBit(oldp+78,((1U & ((0x100U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 8U)))));
        tracep->chgBit(oldp+79,((1U & (vlTOPp->gpio_i 
                                       >> 9U))));
        tracep->chgBit(oldp+80,((1U & ((0x200U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 9U)))));
        tracep->chgBit(oldp+81,((1U & (vlTOPp->gpio_i 
                                       >> 0xaU))));
        tracep->chgBit(oldp+82,((1U & ((0x400U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xaU)))));
        tracep->chgBit(oldp+83,((1U & (vlTOPp->gpio_i 
                                       >> 0xbU))));
        tracep->chgBit(oldp+84,((1U & ((0x800U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xbU)))));
        tracep->chgBit(oldp+85,((1U & (vlTOPp->gpio_i 
                                       >> 0xcU))));
        tracep->chgBit(oldp+86,((1U & ((0x1000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xcU)))));
        tracep->chgBit(oldp+87,((1U & (vlTOPp->gpio_i 
                                       >> 0xdU))));
        tracep->chgBit(oldp+88,((1U & ((0x2000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xdU)))));
        tracep->chgBit(oldp+89,((1U & (vlTOPp->gpio_i 
                                       >> 0xeU))));
        tracep->chgBit(oldp+90,((1U & ((0x4000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xeU)))));
        tracep->chgBit(oldp+91,((1U & (vlTOPp->gpio_i 
                                       >> 0xfU))));
        tracep->chgBit(oldp+92,((1U & ((0x8000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0xfU)))));
        tracep->chgBit(oldp+93,((1U & (vlTOPp->gpio_i 
                                       >> 0x10U))));
        tracep->chgBit(oldp+94,((1U & ((0x10000U & 
                                        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x10U)))));
        tracep->chgBit(oldp+95,((1U & (vlTOPp->gpio_i 
                                       >> 0x11U))));
        tracep->chgBit(oldp+96,((1U & ((0x20000U & 
                                        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x11U)))));
        tracep->chgBit(oldp+97,((1U & (vlTOPp->gpio_i 
                                       >> 0x12U))));
        tracep->chgBit(oldp+98,((1U & ((0x40000U & 
                                        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                        ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                        : (vlTOPp->gpio_i 
                                           >> 0x12U)))));
        tracep->chgBit(oldp+99,((1U & (vlTOPp->gpio_i 
                                       >> 0x13U))));
        tracep->chgBit(oldp+100,((1U & ((0x80000U & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x13U)))));
        tracep->chgBit(oldp+101,((1U & (vlTOPp->gpio_i 
                                        >> 0x14U))));
        tracep->chgBit(oldp+102,((1U & ((0x100000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x14U)))));
        tracep->chgBit(oldp+103,((1U & (vlTOPp->gpio_i 
                                        >> 0x15U))));
        tracep->chgBit(oldp+104,((1U & ((0x200000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x15U)))));
        tracep->chgBit(oldp+105,((1U & (vlTOPp->gpio_i 
                                        >> 0x16U))));
        tracep->chgBit(oldp+106,((1U & ((0x400000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x16U)))));
        tracep->chgBit(oldp+107,((1U & (vlTOPp->gpio_i 
                                        >> 0x17U))));
        tracep->chgBit(oldp+108,((1U & ((0x800000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x17U)))));
        tracep->chgBit(oldp+109,((1U & (vlTOPp->gpio_i 
                                        >> 0x18U))));
        tracep->chgBit(oldp+110,((1U & ((0x1000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x18U)))));
        tracep->chgBit(oldp+111,((1U & (vlTOPp->gpio_i 
                                        >> 0x19U))));
        tracep->chgBit(oldp+112,((1U & ((0x2000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+113,((1U & (vlTOPp->gpio_i 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+114,((1U & ((0x4000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1aU)))));
        tracep->chgBit(oldp+115,((1U & (vlTOPp->gpio_i 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+116,((1U & ((0x8000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1bU)))));
        tracep->chgBit(oldp+117,((1U & (vlTOPp->gpio_i 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+118,((1U & ((0x10000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1cU)))));
        tracep->chgBit(oldp+119,((1U & (vlTOPp->gpio_i 
                                        >> 0x1dU))));
        tracep->chgBit(oldp+120,((1U & ((0x20000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1dU)))));
        tracep->chgBit(oldp+121,((1U & (vlTOPp->gpio_i 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+122,((1U & ((0x40000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1eU)))));
        tracep->chgBit(oldp+123,((1U & (vlTOPp->gpio_i 
                                        >> 0x1fU))));
        tracep->chgBit(oldp+124,((1U & ((0x80000000U 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                         : (vlTOPp->gpio_i 
                                            >> 0x1fU)))));
        tracep->chgIData(oldp+125,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata),32);
        tracep->chgIData(oldp+126,(((IData)(vlTOPp->rst_ni)
                                     ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                     : 0U)),32);
        tracep->chgBit(oldp+127,((1U & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar)))));
        tracep->chgBit(oldp+128,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
        tracep->chgBit(oldp+129,(((IData)((0x800U == 
                                           (0x1c00U 
                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgBit(oldp+130,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                        & ((1U == (3U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                      >> 0xbU)))
                                            ? ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xaU))
                                            : ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xaU))))));
        tracep->chgIData(oldp+131,((((IData)(vlTOPp->rst_ni)
                                      ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                      : 0U) & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+132,((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                  & (((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U))) 
                                      | (1U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U)))) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgSData(oldp+133,(((((4U != (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))
                                       ? 0U : 1U) << 0xbU) 
                                    | (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                        << 0xaU) | 
                                       (0x3ffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))))),13);
        tracep->chgCData(oldp+134,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 2U : (3U & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+135,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+136,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgSData(oldp+137,(((0x19U >= (0x1fU 
                                               & ((IData)(0xdU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1fffU & (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0xdU) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                     : 0U)),13);
        tracep->chgCData(oldp+138,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 2U : (3U & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+139,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+140,(((9U >= (0xfU & 
                                            ((IData)(5U) 
                                             * (1U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                     : 0U)),5);
        tracep->chgCData(oldp+141,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 2U : (3U & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(2U) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+142,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                  & ((IData)((0x800U 
                                              == (0x1c00U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+143,(((0x41U >= (0x7fU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1ffffffffULL 
                                        & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x21U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                ((IData)(2U) 
                                                                 + 
                                                                 (3U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (1U 
                                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U)))])) 
                                                << 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                           | (((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                               ((IData)(1U) 
                                                                + 
                                                                (3U 
                                                                 & (((IData)(0x21U) 
                                                                     * 
                                                                     (1U 
                                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                    >> 5U)))])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (3U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (1U 
                                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U))])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                     : 0ULL)),33);
        tracep->chgQData(oldp+145,((0x1ffffffffULL 
                                    & (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                        ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                           << 1U) : 
                                       ((0x41U >= (0x7fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                            | (((QData)((IData)(
                                                                vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (3U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (1U 
                                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U)))])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                         : 0ULL)))),33);
        tracep->chgIData(oldp+147,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata),32);
        tracep->chgBit(oldp+148,((1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][2U] >> 0x15U) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
        tracep->chgBit(oldp+149,(((IData)((0x800U == 
                                           (0x1c00U 
                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgBit(oldp+150,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                        & ((1U == (3U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                      >> 0xbU)))
                                            ? ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xaU))
                                            : ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xaU))))));
        tracep->chgIData(oldp+151,((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
                                    & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+152,((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                  & (((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))) 
                                      | (1U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][2U] 
                                                   >> 0x12U)))) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgSData(oldp+153,(((((4U != (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U)))
                                       ? 0U : 1U) << 0xbU) 
                                    | (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                        << 0xaU) | 
                                       (0x3ffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))))),13);
        tracep->chgCData(oldp+154,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 4U : (7U & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+155,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgSData(oldp+156,(((0x33U >= (0x3fU 
                                               & ((IData)(0xdU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(0xdU) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                     : 0U)),13);
        tracep->chgCData(oldp+157,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 4U : (7U & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+158,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+159,(((0x13U >= (0x1fU 
                                               & ((IData)(5U) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                     : 0U)),5);
        tracep->chgCData(oldp+160,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                     ? 4U : (7U & (
                                                   ((1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))
                                                    ? 
                                                   ((3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                    : 
                                                   (((IData)(4U) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+161,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                  & ((IData)((0x800U 
                                              == (0x1c00U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+162,(((0x83U >= (0xffU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                     ? (0x1ffffffffULL 
                                        & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x21U) 
                                                 * 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                ((IData)(2U) 
                                                                 + 
                                                                 (7U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U)))])) 
                                                << 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                           | (((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                               ((IData)(1U) 
                                                                + 
                                                                (7U 
                                                                 & (((IData)(0x21U) 
                                                                     * 
                                                                     (3U 
                                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                    >> 5U)))])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (7U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U))])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                     : 0ULL)),33);
        tracep->chgQData(oldp+164,((0x1ffffffffULL 
                                    & (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                        ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                           << 1U) : 
                                       ((0x83U >= (0xffU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x21U) 
                                                  * 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                            | (((QData)((IData)(
                                                                vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (7U 
                                                                  & (((IData)(0x21U) 
                                                                      * 
                                                                      (3U 
                                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                     >> 5U)))])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                         : 0ULL)))),33);
        tracep->chgIData(oldp+166,((IData)(vlTOPp->opentitan_soc_top__DOT__intr_vector)),32);
        tracep->chgIData(oldp+167,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->chgCData(oldp+168,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
        tracep->chgQData(oldp+169,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
        tracep->chgBit(oldp+171,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x33U)) 
                                        & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [9U][0U]))));
        tracep->chgBit(oldp+172,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                  & (0U != (3U & ((
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   << 0x1bU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][1U] 
                                                     >> 5U)))))));
        tracep->chgBit(oldp+173,((1U & (~ ((((0U == 
                                              (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                >> 0x12U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    >> 0x12U)))) 
                                            | (4U == 
                                               (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   >> 0x12U)))) 
                                           & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                              & (((4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [9U][2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][2U] 
                                                         >> 0x12U)))) 
                                                 | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->chgBit(oldp+174,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                  & (((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))) 
                                      | (1U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   >> 0x12U)))) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgIData(oldp+175,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                   [0U]),32);
        tracep->chgQData(oldp+176,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->chgBit(oldp+178,((((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                   > vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                   [0U]) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->chgCData(oldp+179,(((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                     ? (0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                     : 0U)),6);
        tracep->chgBit(oldp+180,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                 >> 0x33U)) 
                                        & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [6U][0U]))));
        tracep->chgIData(oldp+181,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rdata),32);
        tracep->chgBit(oldp+182,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__error));
        tracep->chgBit(oldp+183,((1U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                          & (0U != 
                                             (3U & 
                                              ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [6U][2U] 
                                                << 0x1bU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][1U] 
                                                  >> 5U))))) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                        | (~ ((((0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [6U][2U] 
                                                     >> 0x12U))) 
                                                | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U)))) 
                                               | (4U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U)))) 
                                              & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                 & (((4U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                          [6U][2U] 
                                                          >> 0x12U))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                            [6U][2U] 
                                                            >> 0x12U)))) 
                                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))))))));
        tracep->chgBit(oldp+184,((1U & (~ ((((0U == 
                                              (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [6U][2U] 
                                                >> 0x12U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][2U] 
                                                    >> 0x12U)))) 
                                            | (4U == 
                                               (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U)))) 
                                           & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                              & (((4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [6U][2U] 
                                                         >> 0x12U)))) 
                                                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->chgIData(oldp+185,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DOUT_REG),24);
        tracep->chgBit(oldp+186,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DONE_REG));
        tracep->chgBit(oldp+187,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                  & (((4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))) 
                                      | (1U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U)))) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgBit(oldp+188,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x33U)) 
                                        & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [0xaU][0U]))));
        tracep->chgBit(oldp+189,((1U & (((0x80000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[2U]
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                                           | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 1U)))))));
        tracep->chgBit(oldp+190,((1U & (((0x20000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x1eU)
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                                           | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 2U)))))));
        tracep->chgBit(oldp+191,((1U & (((0x8000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x1cU)
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                                           | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 3U)))))));
        tracep->chgBit(oldp+192,((1U & (((0x2000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x1aU)
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                                           | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 4U)))))));
        tracep->chgBit(oldp+193,((1U & (((0x800000U 
                                          & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x18U)
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                                           | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 5U)))))));
        tracep->chgBit(oldp+194,((1U & (((0x200000U 
                                          & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x16U)
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                                           | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 6U)))))));
        tracep->chgBit(oldp+195,((1U & (((0x80000U 
                                          & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x14U)
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                                           | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 7U)))))));
        tracep->chgBit(oldp+196,((1U & (((0x20000U 
                                          & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                          ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                             >> 0x12U)
                                          : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                                        & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                                           | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 8U)))))));
        tracep->chgBit(oldp+197,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we) 
                                        | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U] 
                                           >> 0x1fU)))));
        tracep->chgCData(oldp+198,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we)
                                           ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0xaU][1U] 
                                               << 0x1dU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 3U))
                                           : vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U]))),3);
        tracep->chgBit(oldp+199,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we) 
                                        | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U] 
                                           >> 0x1cU)))));
        tracep->chgCData(oldp+200,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we)
                                           ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [0xaU][1U] 
                                               << 0x1aU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][0U] 
                                                 >> 6U))
                                           : ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               << 3U) 
                                              | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U] 
                                                 >> 0x1dU))))),2);
        tracep->chgCData(oldp+201,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                     ? 0U : (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                                | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (7U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))))),8);
        tracep->chgIData(oldp+202,(((1U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U])
                                     ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)
                                         ? 0U : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                                  != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                                  ? 0U
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth))
                                                   ? 0U
                                                   : 
                                                  (0xffffffU 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)
                                                       : vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)))))
                                     : 0U)),24);
        tracep->chgBit(oldp+203,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                  != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        tracep->chgBit(oldp+204,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                  & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)) 
                                     | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data))))));
        tracep->chgBit(oldp+205,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q)))));
        tracep->chgBit(oldp+206,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d) 
                                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q)))));
        tracep->chgBit(oldp+207,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle))));
        tracep->chgBit(oldp+208,(((0x4000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                                   ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                       & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                      | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))
                                   : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync))));
        tracep->chgBit(oldp+209,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))));
        tracep->chgCData(oldp+210,((0xffU & (((0U == 
                                               (0x18U 
                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   << 3U)))
                                               ? 0U
                                               : (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                             | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                (7U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U))] 
                                                >> 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))))),8);
        tracep->chgCData(oldp+211,((0xffU & (((0U == 
                                               (0x18U 
                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   << 3U)))
                                               ? 0U
                                               : (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 2U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                             | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                (7U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U))] 
                                                >> 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))))),8);
    }
}

void Vopentitan_soc_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vilp = 0U;
        while ((__Vilp <= 0x73U)) {
            vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}
