// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopentitan_soc_top.h for the primary calling header

#include "Vopentitan_soc_top.h"
#include "Vopentitan_soc_top__Syms.h"

void Vopentitan_soc_top::_settle__TOP__3(Vopentitan_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopentitan_soc_top::_settle__TOP__3\n"); );
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp429[5];
    WData/*95:0*/ __Vtemp437[3];
    WData/*127:0*/ __Vtemp443[4];
    WData/*479:0*/ __Vtemp453[15];
    WData/*127:0*/ __Vtemp462[4];
    CData/*31:0*/ __Vtemp481;
    CData/*31:0*/ __Vtemp496;
    CData/*31:0*/ __Vtemp497;
    CData/*31:0*/ __Vtemp529;
    CData/*31:0*/ __Vtemp530;
    CData/*31:0*/ __Vtemp544;
    // Body
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
                  | (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                             >> 1U))) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            } else {
                if ((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                   >> 0x33U)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                }
            } else {
                if ((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                                    >> 0x33U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                        = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))
                            ? 0U : 3U);
                } else {
                    if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h) 
                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
                }
            } else {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                        = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h))
                            ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                                ? 2U : 0U) : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                                               ? 1U
                                               : 3U));
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                     >> 0x33U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                   [9U][2U] << 0x1bU) 
                                  | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [9U][1U] >> 5U))))) 
                 | (~ ((((0U == (7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                       [9U][2U] >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][2U] >> 0x12U)))) 
                        | (4U == (7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [9U][2U] >> 0x12U)))) 
                       & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                           & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                          & (((4U == (7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            >> 0x12U))) 
                              | (1U == (7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [9U][2U] 
                                              >> 0x12U)))) 
                             | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__req) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__we))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)) 
           | (((((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                 & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h 
                            >> 0x33U))) & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
              << 1U));
    if ((0x20000000U == (0xffff0000U & ((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U] 
            = vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U];
        vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
            = vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U];
        vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
            = vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U];
    }
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    if ((0x20000000U == (0xffff0000U & ((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
            = vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar;
    }
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)) 
           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done 
        = ((2U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
            | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
           & (0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__outstanding_load_wb) 
            | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
               & (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__addr 
        = ((0x200000U & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U])
            ? (0xfffU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                          << 0x19U) | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                       >> 7U))) : 0U);
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int = 0U;
    if ((0x200000U & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U])) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int 
            = ((0xffffff00U & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int) 
               | (0xffU & (- (IData)((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                            >> 1U))))));
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int 
            = ((0xffff00ffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int) 
               | (0xff00U & ((- (IData)((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                               >> 2U)))) 
                             << 8U)));
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int 
            = ((0xff00ffffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int) 
               | (0xff0000U & ((- (IData)((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                 >> 3U)))) 
                               << 0x10U)));
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int 
            = ((0xffffffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int) 
               | (0xff000000U & ((- (IData)((1U & (
                                                   vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                   >> 4U)))) 
                                 << 0x18U)));
    }
    if ((0x200000U & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U])) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb 
        = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
           [0U] : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
           [1U]);
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack 
        = (1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                          >> 0x33U)) & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U]));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q;
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__instr_req) 
         & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu))) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d 
            = (1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q)) 
                     & ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q))));
    }
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                   >> 0x15U) & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar)) 
                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U] 
        = (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                   >> 2U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffeU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((2U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffdU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((3U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffffbU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((4U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffff7U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((5U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffefU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((6U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffdfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((7U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffbfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 6U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((8U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffff7fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 7U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((9U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffeffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 8U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xaU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffdffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 9U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xbU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffffbffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xaU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xcU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffff7ffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xbU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xdU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffefffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xcU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xeU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffdfffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xdU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffbfffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xeU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x10U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fff7fffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0xfU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x11U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffeffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x10U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x12U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffdffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x11U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x13U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ffbffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x12U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x14U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7ff7ffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x13U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x15U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fefffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x14U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x16U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fdfffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x15U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x17U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fbfffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x16U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x18U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7f7fffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x17U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x19U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7effffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x18U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1aU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7dffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x19U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1bU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7bffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1aU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1cU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x77ffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1bU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1dU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x6fffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1cU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1eU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x5fffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1dU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1 
        = ((0x1fU == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x3fffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1) 
              << 0x1eU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U] 
        = ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                       >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U] 
        = ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                       >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o 
        = ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
            >> 0x15U) & ((0U == (7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                         >> 0x12U)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err 
        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu) 
                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err)));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
            >> 0x15U) & ((0U == (3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                       >> 0xdU))) ? 
                         (0U != (0xfU & (((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                           << 0x1fU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                             >> 1U)) 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                      >> 5U)))))))
                          : ((1U == (3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                           >> 0xdU)))
                              ? ((0x40U & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U])
                                  ? (3U == (3U & ((
                                                   vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                     >> 3U))))
                                  : (3U == (3U & ((
                                                   vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                     >> 1U)))))
                              : ((2U == (3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))) 
                                 & (0xfU == (0xfU & 
                                             ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                 >> 1U))))))));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                  >> 0x15U) & ((0U == (3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU))) 
                               | ((1U == (3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                >> 0xdU)))
                                   ? (~ (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                         >> 5U)) : 
                                  ((2U == (3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                 >> 0xdU))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                        >> 5U)))))))))));
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                  >> 0x15U) & ((0U == (3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU)))
                                ? (~ (IData)((0U != 
                                              (0xfU 
                                               & (((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                      >> 1U)) 
                                                  & (~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                           << 0x1bU) 
                                                          | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                             >> 5U))))))))))
                                : ((1U == (3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                 >> 0xdU)))
                                    ? ((0x40U & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U])
                                        ? (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                             >> 1U))))))
                                        : (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0xcU 
                                                       & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                                             >> 1U)))))))
                                    : (2U == (3U & 
                                              (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU)))))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
             & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done)) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q)) 
           & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid) 
                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err) 
                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : (IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                       >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err 
        = (1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                          >> 1U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err 
        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                 & ((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                             >> 0x33U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 0U;
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
          & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xaU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xbU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xcU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xdU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
           >> 0xeU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [1U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((0xfffffU < ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                      [1U][1U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U)))) {
        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err = 1U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 0U;
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [0xaU][2U] << 0x1fU) 
                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [0xaU][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (7U != (7U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 0xaU) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (3U != (3U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    if (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
           >> 0xbU) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [0xaU][2U] << 0x1fU) 
                             | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                [0xaU][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err = 1U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
            | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb 
        = (1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q)) 
                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
              | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 0U;
    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit) 
          & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 2U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 3U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 4U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 5U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 6U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 7U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 8U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 9U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xaU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xbU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xcU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xdU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xeU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0xfU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x10U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x11U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x12U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x13U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x14U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x15U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x16U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x17U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x18U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x19U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1aU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1bU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1cU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1dU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1eU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x1fU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x20U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x21U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (0xfU != (0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][2U] << 0x1fU) | 
                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                              [9U][1U] >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x23U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x24U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    if ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                   >> 0x25U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
         & (1U != (1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [9U][2U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][1U] 
                                                >> 1U)))))) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err = 1U;
    }
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int = 0U;
    if ((0x200000U & vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U])) {
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int 
            = ((0xffffff00U & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int) 
               | (((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                    >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))
                   ? (0xffU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U] 
                                             >> 1U)))
                   : 0U));
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int 
            = ((0xffff00ffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                     >> 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                 << 0x17U) | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U] 
                                              >> 9U)))
                    : 0U) << 8U));
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int 
            = ((0xff00ffffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                     >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                 << 0xfU) | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U] 
                                             >> 0x11U)))
                    : 0U) << 0x10U));
        vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int 
            = ((0xffffffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                     >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[1U] 
                                 << 7U) | (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[0U] 
                                           >> 0x19U)))
                    : 0U) << 0x18U));
    }
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xaU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xcU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xdU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
             >> 0xeU) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 2U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 3U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 4U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 5U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 6U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 7U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 8U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xaU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xbU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xcU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xdU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xeU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0xfU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x10U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x11U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x12U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x13U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x14U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x15U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x16U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x17U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x18U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x19U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1aU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1bU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1cU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1dU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1eU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x1fU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x20U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x21U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x22U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x23U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we 
        = (((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                     >> 0x25U)) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_watermark_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_watermark_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_empty_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_overflow_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_frame_err_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_break_err_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_timeout_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_parity_err_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_tx_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rx_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nf_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_slpbk_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_llpbk_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_en_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_odd_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rxblvl_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nco_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 3U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wdata_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txrst_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txen_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txval_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_val_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_en_we 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
             >> 0xbU) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)) 
           | (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)) 
                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)) 
           | (2U & (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)) 
                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
              << 2U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((6U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | (1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                     ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                        >> 1U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((5U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | (2U & (((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                      ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                         >> 2U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err)) 
                    << 1U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)) 
           | (1U & (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)) 
                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d)) 
                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                        & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))) 
                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)) 
           | (2U & (((((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)) 
                        & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d)) 
                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                      << 1U) | (0xfffffffeU & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                                << 1U) 
                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))) 
                    | (0xfffffffeU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((0xffff0000U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U)))
                : ((0xffff0000U & ((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                            >> 2U)) 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U))))
            : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error 
        = (1U & (~ ((((0U == (7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                    >> 0x12U))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                       >> 0x12U)))) 
                     | (4U == (7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                     >> 0x12U)))) & 
                    (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                     & (((4U == (7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                         >> 0x12U)))) 
                        | (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk))))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold 
                = (1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)));
        } else {
            if ((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold 
                    = (1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)));
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold 
                    = (1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)));
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending 
        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                 | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = (1U & ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                  ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)
                  : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)));
    __Vtemp429[0U] = (IData)((((QData)((IData)(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                  >> 2U) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                               << 0x32U) | (((QData)((IData)(
                                                             ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                               [1U][1U] 
                                                               << 0x1fU) 
                                                              | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                 [1U][0U] 
                                                                 >> 1U)))) 
                                             << 0x12U) 
                                            | (QData)((IData)(
                                                              ((0xfffe0000U 
                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                     << 0xdU) 
                                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                       << 0x11U)) 
                                                                   & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                      << 0x11U))) 
                                                               | ((0x7feU 
                                                                   & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [1U][0U]) 
                                                                  | ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                       >> 5U) 
                                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))))))));
    __Vtemp429[1U] = ((0xfff80000U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U] << 0x12U)) 
                      | (IData)(((((QData)((IData)(
                                                   ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                      >> 2U) 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                   [1U][1U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                     [1U][0U] 
                                                                     >> 1U)))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  ((0xfffe0000U 
                                                                    & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                         << 0xdU) 
                                                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                           << 0x11U)) 
                                                                       & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                          << 0x11U))) 
                                                                   | ((0x7feU 
                                                                       & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                       [1U][0U]) 
                                                                      | ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                           >> 5U) 
                                                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))))))) 
                                 >> 0x20U)));
    __Vtemp437[0U] = (IData)((((QData)((IData)(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                  >> 7U) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                               << 0x32U) | (((QData)((IData)(
                                                             (0xffffU 
                                                              & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                  [1U][1U] 
                                                                  << 0x1fU) 
                                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                    [1U][0U] 
                                                                    >> 1U))))) 
                                             << 0x22U) 
                                            | (((QData)((IData)(
                                                                ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                   >> 8U) 
                                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                        [1U][1U] 
                                                                        << 0xfU) 
                                                                       | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                          [1U][0U] 
                                                                          >> 0x11U))))) 
                                                   << 0x11U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                           << 8U) 
                                                                          & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                             << 0x10U)) 
                                                                         & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                            << 0x10U))) 
                                                                     | (0xffffU 
                                                                        & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                            [1U][1U] 
                                                                            << 0x1fU) 
                                                                           | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                              [1U][0U] 
                                                                              >> 1U)))))))))));
    __Vtemp437[1U] = ((0xfff80000U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U] << 0x12U)) 
                      | (IData)(((((QData)((IData)(
                                                   ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                      >> 7U) 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                      [1U][1U] 
                                                                      << 0x1fU) 
                                                                     | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                        [1U][0U] 
                                                                        >> 1U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                       >> 8U) 
                                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))) 
                                                    << 0x21U) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                            [1U][1U] 
                                                                            << 0xfU) 
                                                                           | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                              [1U][0U] 
                                                                              >> 0x11U))))) 
                                                       << 0x11U) 
                                                      | (QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                                               << 8U) 
                                                                              & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                                                << 0x10U)) 
                                                                             & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0x10U))) 
                                                                         | (0xffffU 
                                                                            & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [1U][1U] 
                                                                                << 0x1fU) 
                                                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [1U][0U] 
                                                                                >> 1U)))))))))) 
                                 >> 0x20U)));
    __Vtemp443[3U] = ((0xffc00000U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U] << 0xbU)) 
                      | ((0xffe00000U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                           << 0x10U) 
                                          & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                             << 0x15U)) 
                                         & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                            << 0x15U))) 
                         | ((0x1fffe0U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][0U] 
                                          << 4U)) | 
                            ((0x3ffffff0U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                                 << 4U)) 
                                             & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                                << 4U))) 
                             | (0xfU & ((0xffff8U & 
                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [1U][1U] 
                                          << 3U)) | 
                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][0U] >> 0x1dU)))))));
    __Vtemp453[0xcU] = ((0xffffffU & ((0x7ffU & ((0x400U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][1U] 
                                                     << 0xaU)) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [1U][0U] 
                                                    >> 0x16U))) 
                                      | (0xfff800U 
                                         & ((IData)(
                                                    (((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                            << 0xbU)))) 
                        | (0xff000000U & ((IData)((
                                                   ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                          << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
        = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U] 
        = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U] 
        = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U] 
        = (IData)((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U] 
        = (IData)(((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q))) 
                   >> 0x20U));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
        = ((0xfffc0000U & (__Vtemp437[0U] << 0x12U)) 
           | ((0xfffe0000U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                << 8U) & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                          << 0x11U)) 
                              & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                 << 0x11U))) | ((0x1fffeU 
                                                 & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][1U] 
                                                     << 0x10U) 
                                                    | (0xfffeU 
                                                       & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                          [1U][0U] 
                                                          >> 0x10U)))) 
                                                | ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                                     >> 9U) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
        = ((0x3ffffU & (__Vtemp437[0U] >> 0xeU)) | 
           (0xfffc0000U & (__Vtemp437[1U] << 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
        = ((0x3ffffU & (__Vtemp437[1U] >> 0xeU)) | 
           (0xfffc0000U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                           [1U][0U] << 4U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
        = ((0x3ffffU & ((0x3ffc0U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                     [1U][0U] >> 0xbU)) 
                        | ((0x3ffe0U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we) 
                                          << 5U)) & 
                                        ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)) 
                                         << 5U))) | 
                           (0x1fU & ((0x10U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [1U][1U] 
                                               << 4U)) 
                                     | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                        [1U][0U] >> 0x1cU)))))) 
           | (0xfffc0000U & (__Vtemp443[3U] << 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
        = (0xfc0000U | ((0xff000000U & (__Vtemp429[0U] 
                                        << 0x18U)) 
                        | (0x3ffffU & (__Vtemp443[3U] 
                                       >> 0xeU))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
        = ((0xffffffU & (__Vtemp429[0U] >> 8U)) | (0xff000000U 
                                                   & (__Vtemp429[1U] 
                                                      << 0x18U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
        = ((0xffffffU & (__Vtemp429[1U] >> 8U)) | (0xff000000U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [1U][0U] 
                                                      << 0xaU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
        = __Vtemp453[0xcU];
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
        = ((0xffffffU & ((0x7ffU & ((IData)((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q)))) 
                                    >> 0x15U)) | (0xfff800U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                                                              >> 0x20U)) 
                                                     << 0xbU)))) 
           | (0xff000000U & ((IData)(((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                                      >> 0x20U)) << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
        = (0x7ffU & ((IData)(((((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q)) 
                                << 0x20U) | (QData)((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q))) 
                              >> 0x20U)) >> 0x15U));
    __Vtemp462[0U] = (IData)((((QData)((IData)((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                 >> 4U) 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re)))) 
                               << 0x3cU) | (((QData)((IData)(
                                                             ((0xc0000000U 
                                                               & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                   << 0x1aU) 
                                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                     << 0x1eU))) 
                                                              | ((0xf0000000U 
                                                                  & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                      << 0x18U) 
                                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                        << 0x1cU))) 
                                                                 | ((0xfff80000U 
                                                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                         << 0xeU) 
                                                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                           << 0x13U))) 
                                                                    | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                              << 9U) 
                                                                             | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q)))))))))))))) 
                                             << 0x1cU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe) 
                                                                << 0x1bU) 
                                                               | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                   << 0x1aU) 
                                                                  | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                      << 0x19U) 
                                                                     | ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                                                                         << 1U) 
                                                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))))));
    __Vtemp462[1U] = ((0xe0000000U & ((IData)((((QData)((IData)(
                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                              << 0x1bU) 
                                                                             | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 0xeU)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 0xbU)) 
                                                                                | ((0xfffff000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 8U)) 
                                                                                | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 5U)) 
                                                                                | ((0xffffff00U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 2U)) 
                                                                                | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 4U)) 
                                                                                | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 7U)) 
                                                                                | ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)))))))))))))))))))))))))))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                         << 0x1dU) 
                                                                        | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                            << 0x1cU) 
                                                                           | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                                                << 7U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 5U))) 
                                                                                | ((0x7ffffff8U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 3U))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 3U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 1U)))))))))))))))))) 
                                      << 0x1dU)) | (IData)(
                                                           ((((QData)((IData)(
                                                                              (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 4U) 
                                                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re)))) 
                                                              << 0x3cU) 
                                                             | (((QData)((IData)(
                                                                                ((0xc0000000U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0x1aU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 0x1eU))) 
                                                                                | ((0xf0000000U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0x18U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 0x1cU))) 
                                                                                | ((0xfff80000U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xeU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 0x13U))) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q)))))))))))))) 
                                                                 << 0x1cU) 
                                                                | (QData)((IData)(
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x19U) 
                                                                                | ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))))) 
                                                            >> 0x20U)));
    __Vtemp462[2U] = ((0x1fffffffU & ((IData)((((QData)((IData)(
                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                              << 0x1bU) 
                                                                             | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 0xeU)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 0xbU)) 
                                                                                | ((0xfffff000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 8U)) 
                                                                                | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 5U)) 
                                                                                | ((0xffffff00U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 2U)) 
                                                                                | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 4U)) 
                                                                                | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 7U)) 
                                                                                | ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)))))))))))))))))))))))))))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                         << 0x1dU) 
                                                                        | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                            << 0x1cU) 
                                                                           | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                                                << 7U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 5U))) 
                                                                                | ((0x7ffffff8U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 3U))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 3U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 1U)))))))))))))))))) 
                                      >> 3U)) | (0xe0000000U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 0xeU)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 0xbU)) 
                                                                                | ((0xfffff000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 8U)) 
                                                                                | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 5U)) 
                                                                                | ((0xffffff00U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 2U)) 
                                                                                | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 4U)) 
                                                                                | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 7U)) 
                                                                                | ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)))))))))))))))))))))))))))))))))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                                                << 7U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 5U))) 
                                                                                | ((0x7ffffff8U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 3U))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 3U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 1U))))))))))))))))) 
                                                             >> 0x20U)) 
                                                    << 0x1dU)));
    __Vtemp462[3U] = (0x1fffffffU & ((IData)(((((QData)((IData)(
                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                              << 0x1bU) 
                                                                             | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 0xeU)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 0xbU)) 
                                                                                | ((0xfffff000U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 8U)) 
                                                                                | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 5U)) 
                                                                                | ((0xffffff00U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                << 2U)) 
                                                                                | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 1U)) 
                                                                                | ((0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 4U)) 
                                                                                | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                                                [0xaU][0U] 
                                                                                >> 7U)) 
                                                                                | ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__wr_err)))))))))))))))))))))))))))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                   << 0x1fU) 
                                                                  | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                      << 0x1eU) 
                                                                     | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                         << 0x1dU) 
                                                                        | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                                            << 0x1cU) 
                                                                           | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                                                << 7U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                << 1U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 5U))) 
                                                                                | ((0x7ffffff8U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 3U))) 
                                                                                | (0x1ffffffeU 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 3U) 
                                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                                                                << 1U))))))))))))))))) 
                                              >> 0x20U)) 
                                     >> 3U));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
        = __Vtemp462[0U];
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
        = __Vtemp462[1U];
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
        = __Vtemp462[2U];
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
        = __Vtemp462[3U];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill 
        = (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err) 
                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception)) 
                 | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done 
        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                  ? (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem))
                  : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
        = ((0xfffff000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U]) 
           | (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q) 
               << 9U) | ((0x1f8U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                    [9U][0U] << 2U)) 
                         | (((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                        >> 0x24U)) 
                               & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))) 
                             << 2U) | ((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x24U)) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re)) 
                                        << 1U) | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q))))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xcU)))) {
                            if ((0U == (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 2U)))) {
                                if ((0U == (0x1fU & 
                                            (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0U == (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                } else {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0x1000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x8000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        if ((0x800U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0x1000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        } else {
                            if ((0x1000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0U == ((0x20U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 7U)) 
                                    | (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 2U))))) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x8000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0U == (0xffU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 5U)))) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
    if ((2U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | ((0xc000000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x2000000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xe00U 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x1000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)))));
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12003U | ((0xc000000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x18U)) 
                                           | ((0x2000000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1c00000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x1013U | ((0x1f00000U 
                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0xf8000U 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0xf80U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                    }
                }
            }
        }
    } else {
        if ((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x8000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x40063U | ((0xf0000000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0xcU)))) 
                                           << 0x1cU)) 
                                       | ((0xc000000U 
                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                                          | ((0x2000000U 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x17U)) 
                                             | ((0x38000U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 8U)) 
                                                | ((0x1000U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 1U)) 
                                                   | ((0xc00U 
                                                       & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                      | ((0x300U 
                                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 5U)) 
                                                         | (0x80U 
                                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                               >> 5U))))))))));
                } else {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x6fU | ((0x80000000U 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))));
                    } else {
                        if ((0x800U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 0xcU)))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = ((0x40U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                            ? ((0x20U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x847433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x846433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                            : ((0x20U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x844433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x40840433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                                }
                            } else {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x47413U | (
                                                   (0xfc000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                      >> 0xcU)))) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0xdU)) 
                                                      | ((0x1f00000U 
                                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                << 8U)) 
                                                            | (0x380U 
                                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                            }
                        } else {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x45413U | ((0x40000000U 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                               | ((0x1f00000U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x37U | ((0xfffe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x11U)) 
                                        | ((0x1f000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xaU)) 
                                           | (0xf80U 
                                              & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                        if ((2U == (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x10113U | ((0xe0000000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                  >> 0xcU)))) 
                                                   << 0x1dU)) 
                                               | ((0x18000000U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                            << 0x17U)) 
                                                        | (0x1000000U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0x12U)))))));
                        }
                    } else {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | (0xf80U 
                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x2000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                            ? (0x6fU | ((0x80000000U 
                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))))
                            : (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))));
                }
            }
        } else {
            if ((0x8000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x842023U | ((0x4000000U 
                                             & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x15U)) 
                                            | ((0x2000000U 
                                                & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | ((0x700000U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)) 
                                                     | ((0xc00U 
                                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                        | (0x200U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 3U))))))));
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x42403U | ((0x4000000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U)) 
                                           | ((0x3800000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x400000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x10U)) 
                                                 | ((0x38000U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 8U)) 
                                                    | (0x380U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 5U)))))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x10413U | ((0x3c000000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x3000000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x800000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | ((0x400000U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x10U)) 
                                                    | (0x380U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 5U)))))));
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold[0U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                  << 0x17U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 9U)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_rxrst 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                  >> 5U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                            >> 4U)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_txrst 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                  >> 3U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                            >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim = 0U;
    if ((2U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim 
            = (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim 
               | (0xffffffffULL & ((IData)(1U) << vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim_id
                                   [0U])));
    }
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                  >> 6U) & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->uart_tx = ((0x1000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                        ? (IData)(vlTOPp->uart_rx) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_out_q));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | (0xfffffffcU & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                              << 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id[0U] 
        = (0x1fU & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                     << 0x1dU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                  >> 3U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) 
                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
                }
            } else {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
        } else {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) {
                if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                }
            } else {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                    }
                } else {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
                        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)
                                  ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                      >> 1U) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                  : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec)));
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                   >> 0x15U) & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))) 
                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                    >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (2U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                    >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (4U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                    >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (8U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                    >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x10U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                       >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x20U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                       >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x40U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                       >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x80U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                       >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x100U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                        >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x200U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                        >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x400U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                        >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x800U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                        >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x1000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                         >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x2000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                         >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x4000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                         >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x8000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                         >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x10000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                          >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x20000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                          >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x40000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                          >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x80000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                          >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x100000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                           << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x200000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                           << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x400000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                           << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x800000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                           << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x1000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                            << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x2000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                            << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x4000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                            << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x8000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                            << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x10000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                             << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x20000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                             << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x40000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                             << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le) 
           | (0x80000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                             << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in 
        = (1U & ((0x2000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                  ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_q)
                  : ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                      >> 0x18U) | ((0x4000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                                    ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))
                                    : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((6U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((5U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (2U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                      << 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (4U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                        << 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                     ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                     : vlTOPp->gpio_i)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (2U & (((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                      : (vlTOPp->gpio_i >> 1U)) << 1U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (4U & (((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                      : (vlTOPp->gpio_i >> 2U)) << 2U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (8U & (((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                      : (vlTOPp->gpio_i >> 3U)) << 3U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x10U & (((0x10U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 4U)) 
                       << 4U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x20U & (((0x20U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 5U)) 
                       << 5U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x40U & (((0x40U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 6U)) 
                       << 6U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x80U & (((0x80U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                         : (vlTOPp->gpio_i >> 7U)) 
                       << 7U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x100U & (((0x100U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 8U)) 
                        << 8U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x200U & (((0x200U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 9U)) 
                        << 9U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x400U & (((0x400U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0xaU)) 
                        << 0xaU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x800U & (((0x800U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                          : (vlTOPp->gpio_i >> 0xbU)) 
                        << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x1000U & (((0x1000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xcU)) 
                         << 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x2000U & (((0x2000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xdU)) 
                         << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x4000U & (((0x4000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xeU)) 
                         << 0xeU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x8000U & (((0x8000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                           : (vlTOPp->gpio_i >> 0xfU)) 
                         << 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x10000U & (((0x10000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x10U)) 
                          << 0x10U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x20000U & (((0x20000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x11U)) 
                          << 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x40000U & (((0x40000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x12U)) 
                          << 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x80000U & (((0x80000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                            ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                            : (vlTOPp->gpio_i >> 0x13U)) 
                          << 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x100000U & (((0x100000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x14U)) 
                           << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x200000U & (((0x200000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x15U)) 
                           << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x400000U & (((0x400000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x16U)) 
                           << 0x16U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x800000U & (((0x800000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                             ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                             : (vlTOPp->gpio_i >> 0x17U)) 
                           << 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x1000000U & (((0x1000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x18U)) 
                            << 0x18U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x2000000U & (((0x2000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x19U)) 
                            << 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x4000000U & (((0x4000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x1aU)) 
                            << 0x1aU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x8000000U & (((0x8000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                              ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                              : (vlTOPp->gpio_i >> 0x1bU)) 
                            << 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x10000000U & (((0x10000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1cU)) 
                             << 0x1cU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x20000000U & (((0x20000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1dU)) 
                             << 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x40000000U & (((0x40000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1eU)) 
                             << 0x1eU)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
           | (0x80000000U & (((0x80000000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                               ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                               : (vlTOPp->gpio_i >> 0x1fU)) 
                             << 0x1fU)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 3U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 4U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((3U != (3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d 
        = ((0U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                          << 4U) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                    >> 0x1cU)))) ? 
           (2U > (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth))
            : ((1U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                              << 4U) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                        >> 0x1cU))))
                ? (4U > (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth))
                : ((2U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                                  << 4U) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 0x1cU))))
                    ? (8U > (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth))
                    : (0x10U > (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_depth)))));
    vlTOPp->__Vtableidx7 = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                             << 3U) | (7U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                                              << 1U) 
                                             | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                                >> 0x1fU))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d 
        = vlTOPp->__Vtable7_opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d
        [vlTOPp->__Vtableidx7];
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout 
        = ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q 
            == (0xffffffU & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                              << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U] 
                                           >> 1U)))) 
           & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U]);
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle 
        = (1U & ((~ (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                     >> 0x1cU)) | (0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((3U != (3U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                         >> 0x10U))) & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err 
        = (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
             >> 0x17U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q)) 
           & (VL_REDXOR_32((0x1ffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                      >> 1U))) ^ (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                                  >> 0x16U)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data 
        = (0xffU & ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                     ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                        >> 1U) : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                  >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                           >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (2U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                           >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (4U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                           >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (8U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                           >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x10U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                              >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x20U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                              >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x40U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                              >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x80U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                              >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x100U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x200U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x400U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x800U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                               >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x1000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x2000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x4000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x8000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x10000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                 >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x20000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                 >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x40000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                 >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x80000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                 >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x100000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                  << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x200000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                  << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x400000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                  << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x800000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                  << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x1000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                   << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x2000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                   << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x4000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                   << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x8000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                   << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x10000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x20000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x40000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0U] 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
            [0U]) | (0x80000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                    << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump 
                        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                            = (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv 
                        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                  << 0x17U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                               >> 9U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[1U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                  << 0x1aU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                               >> 6U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[2U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                  << 0x1dU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                               >> 3U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[3U] 
        = (7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U]);
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[4U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 3U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                            >> 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[5U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 6U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                            >> 0x1aU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[6U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 9U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                            >> 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[7U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                              >> 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[8U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0xfU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                              >> 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[9U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x12U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 0xeU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0xaU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x15U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0xbU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x18U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 8U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0xcU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x1bU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 5U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0xdU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                  << 0x1eU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                               >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0xeU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 1U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                            >> 0x1fU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0xfU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 4U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                            >> 0x1cU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x10U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 7U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                            >> 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x11U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0xaU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                              >> 0x16U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x12U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0xdU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                              >> 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x13U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x10U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 0x10U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x14U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x13U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x15U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x16U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 0xaU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x16U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x19U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 7U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x17U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x1cU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 4U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x18U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                  << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                               >> 1U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x19U] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 2U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                            >> 0x1eU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x1aU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 5U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                            >> 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x1bU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 8U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                            >> 0x18U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x1cU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 0xbU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                              >> 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x1dU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 0xeU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                              >> 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x1eU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 0x11U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                               >> 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio[0x1fU] 
        = (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                  << 0x14U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                               >> 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
           & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)) 
              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete = 0U;
    if ((4U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])) {
        vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete 
            = (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete 
               | (0xffffffffULL & ((IData)(1U) << vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id
                                   [0U])));
    }
    vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (1U & ((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                     ? ((IData)(vlTOPp->opentitan_soc_top__DOT__intr_vector) 
                        & (~ vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q))
                     : (IData)(vlTOPp->opentitan_soc_top__DOT__intr_vector))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (2U & (((2U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                      ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                  >> 1U)) & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                >> 1U)))
                      : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                 >> 1U))) << 1U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (4U & (((4U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                      ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                  >> 2U)) & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                >> 2U)))
                      : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                 >> 2U))) << 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (8U & (((8U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                      ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                  >> 3U)) & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                >> 3U)))
                      : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                 >> 3U))) << 3U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x10U & (((0x10U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                         ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                     >> 4U)) & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                   >> 4U)))
                         : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                    >> 4U))) << 4U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x20U & (((0x20U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                         ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                     >> 5U)) & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                   >> 5U)))
                         : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                    >> 5U))) << 5U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x40U & (((0x40U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                         ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                     >> 6U)) & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                   >> 6U)))
                         : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                    >> 6U))) << 6U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x80U & (((0x80U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                         ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                     >> 7U)) & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                   >> 7U)))
                         : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                    >> 7U))) << 7U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x100U & (((0x100U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                          ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                      >> 8U)) & (~ 
                                                 (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                  >> 8U)))
                          : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                     >> 8U))) << 8U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x200U & (((0x200U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                          ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                      >> 9U)) & (~ 
                                                 (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                  >> 9U)))
                          : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                     >> 9U))) << 9U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x400U & (((0x400U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                          ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                      >> 0xaU)) & (~ 
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                    >> 0xaU)))
                          : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                     >> 0xaU))) << 0xaU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x800U & (((0x800U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                          ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                      >> 0xbU)) & (~ 
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                                    >> 0xbU)))
                          : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                     >> 0xbU))) << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x1000U & (((0x1000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                           ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                       >> 0xcU)) & 
                              (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                  >> 0xcU))) : (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                        >> 0xcU))) 
                         << 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x2000U & (((0x2000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                           ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                       >> 0xdU)) & 
                              (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                  >> 0xdU))) : (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                        >> 0xdU))) 
                         << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x4000U & (((0x4000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                           ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                       >> 0xeU)) & 
                              (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                  >> 0xeU))) : (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                        >> 0xeU))) 
                         << 0xeU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x8000U & (((0x8000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                           ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                       >> 0xfU)) & 
                              (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                  >> 0xfU))) : (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                        >> 0xfU))) 
                         << 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x10000U & (((0x10000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                            ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                        >> 0x10U)) 
                               & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                     >> 0x10U))) : (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                            >> 0x10U))) 
                          << 0x10U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x20000U & (((0x20000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                            ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                        >> 0x11U)) 
                               & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                     >> 0x11U))) : (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                            >> 0x11U))) 
                          << 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x40000U & (((0x40000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                            ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                        >> 0x12U)) 
                               & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                     >> 0x12U))) : (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                            >> 0x12U))) 
                          << 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x80000U & (((0x80000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                            ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                        >> 0x13U)) 
                               & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                     >> 0x13U))) : (IData)(
                                                           (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                            >> 0x13U))) 
                          << 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffefffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x100000U & (((0x100000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                             ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                         >> 0x14U)) 
                                & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                      >> 0x14U))) : (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                             >> 0x14U))) 
                           << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x200000U & (((0x200000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                             ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                         >> 0x15U)) 
                                & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                      >> 0x15U))) : (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                             >> 0x15U))) 
                           << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x400000U & (((0x400000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                             ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                         >> 0x16U)) 
                                & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                      >> 0x16U))) : (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                             >> 0x16U))) 
                           << 0x16U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x800000U & (((0x800000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                             ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                         >> 0x17U)) 
                                & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                      >> 0x17U))) : (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                             >> 0x17U))) 
                           << 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x1000000U & (((0x1000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                              ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                          >> 0x18U)) 
                                 & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                       >> 0x18U))) : (IData)(
                                                             (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                              >> 0x18U))) 
                            << 0x18U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x2000000U & (((0x2000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                              ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                          >> 0x19U)) 
                                 & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                       >> 0x19U))) : (IData)(
                                                             (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                              >> 0x19U))) 
                            << 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x4000000U & (((0x4000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                              ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                          >> 0x1aU)) 
                                 & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                       >> 0x1aU))) : (IData)(
                                                             (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                              >> 0x1aU))) 
                            << 0x1aU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x8000000U & (((0x8000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                              ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                          >> 0x1bU)) 
                                 & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                       >> 0x1bU))) : (IData)(
                                                             (vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                                              >> 0x1bU))) 
                            << 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xefffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x10000000U & (((0x10000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                               ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                           >> 0x1cU)) 
                                  & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                        >> 0x1cU)))
                               : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                          >> 0x1cU))) 
                             << 0x1cU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x20000000U & (((0x20000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                               ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                           >> 0x1dU)) 
                                  & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                        >> 0x1dU)))
                               : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                          >> 0x1dU))) 
                             << 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x40000000U & (((0x40000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                               ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                           >> 0x1eU)) 
                                  & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                        >> 0x1eU)))
                               : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                          >> 0x1eU))) 
                             << 0x1eU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set) 
           | (0x80000000U & (((0x80000000U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le)
                               ? ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                           >> 0x1fU)) 
                                  & (~ (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q 
                                        >> 0x1fU)))
                               : (IData)((vlTOPp->opentitan_soc_top__DOT__intr_vector 
                                          >> 0x1fU))) 
                             << 0x1fU)));
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
        } else {
            if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
                    = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                         == ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                              ? 0xbU : 0xaU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)) 
                       | (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
    }
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        if ((0x10000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q)) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        }
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
    }
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                    ? 0xbU : 0xaU);
        } else {
            if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                    = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                         == ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                              ? 0xbU : 0xaU)) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in))
                        ? 0U : (0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                        - (IData)(1U))));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
    }
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x10000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__nco_sum_q)) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
        }
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
        = (1U & ((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                  ? ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                      ? ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                           >> 1U) & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                      : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                         | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                            & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                               | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))))))
                  : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_d 
        = ((1U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U])
            ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)
                ? 0U : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                         != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? 0U : ((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth))
                                  ? 0U : (0xffffffU 
                                          & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                              ? ((IData)(1U) 
                                                 + vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)
                                              : vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)))))
            : 0U);
    if ((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in)))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else {
            if (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                if ((1U & (~ (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                               == ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                                    ? 0xbU : 0xaU)) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in))))) {
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
                        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_in) 
                            << 0xaU) | (0x3ffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                                  >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
        = ((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty))) 
           & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
              >> 0x1cU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
        = ((0x1fffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U]) 
           | (0xffe00000U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                             << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
        = ((0xffe00000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U]) 
           | (0x1fffffU & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                           >> 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
        = (((- (IData)((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                              >> 0xaU)))) & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                              << 0x15U) 
                                             | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                                >> 0xbU))) 
           | ((((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                  & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                 & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                    & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                   & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
               | ((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                  & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
              | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                 & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U])));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
        = ((0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U]) 
           | (0xffffe000U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle) 
                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                             << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                   >> 0x1fU) & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U]) 
                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                   >> 0x1dU) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                >> 0x1eU)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 0xbU) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                               >> 0xcU)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d) 
                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 9U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 0xaU)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 7U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 8U)) | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw 
        = (1U & ((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
                  ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))
                  : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffff7fffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                     & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                     [0U])))) << 0x1fU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffeffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 1U)))) 
              << 0x20U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffdffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 2U)))) 
              << 0x21U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffbffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 3U)))) 
              << 0x22U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffff7ffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 4U)))) 
              << 0x23U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffefffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 5U)))) 
              << 0x24U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffdfffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 6U)))) 
              << 0x25U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffbfffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 7U)))) 
              << 0x26U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffff7fffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 8U)))) 
              << 0x27U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffeffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 9U)))) 
              << 0x28U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffdffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xaU)))) 
              << 0x29U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffbffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xbU)))) 
              << 0x2aU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffff7ffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xcU)))) 
              << 0x2bU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffefffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xdU)))) 
              << 0x2cU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffdfffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xeU)))) 
              << 0x2dU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffbfffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0xfU)))) 
              << 0x2eU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fff7fffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x10U)))) 
              << 0x2fU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffeffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x11U)))) 
              << 0x30U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffdffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x12U)))) 
              << 0x31U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffbffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x13U)))) 
              << 0x32U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ff7ffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x14U)))) 
              << 0x33U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fefffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x15U)))) 
              << 0x34U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fdfffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x16U)))) 
              << 0x35U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fbfffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x17U)))) 
              << 0x36U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7f7fffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x18U)))) 
              << 0x37U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7effffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x19U)))) 
              << 0x38U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7dffffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1aU)))) 
              << 0x39U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7bffffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1bU)))) 
              << 0x3aU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x77ffffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1cU)))) 
              << 0x3bU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x6fffffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1dU)))) 
              << 0x3cU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x5fffffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1eU)))) 
              << 0x3dU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x3fffffffffffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip 
                                      & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                      [0U]) >> 0x1fU)))) 
              << 0x3eU));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__break_st_q) 
            | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)) 
                  | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data)))))
            ? 0U : (0x1fU & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err) 
                              & (0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data)))
                              ? ((IData)(1U) + (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q))
                              : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_q))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[1U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [1U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[2U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [2U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[3U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [3U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[4U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [4U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[5U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [5U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[6U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [6U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[7U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [7U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[8U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [8U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[9U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [9U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xaU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0xaU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xbU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0xbU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xcU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0xcU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xdU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0xdU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xeU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0xeU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0xfU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0xfU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x10U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x10U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x11U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x11U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x12U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x12U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x13U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x13U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x14U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x14U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x15U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x15U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x16U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x16U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x17U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x17U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x18U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x18U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x19U] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x19U];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1aU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x1aU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1bU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x1bU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1cU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x1cU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1dU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x1dU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1eU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x1eU];
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[0x1fU] 
        = vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__prio
        [0x1fU];
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id 
        = (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz) 
              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem)) 
             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv)) 
            | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump)) 
           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
        = (0x7fffffffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                           ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                ? (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                : 0U) >> 1U) : (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                + (
                                                   (2U 
                                                    & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))));
    if ((0x10000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        if (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                    ? 0xbU : 0xaU);
        } else {
            if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                    = (0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                               - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
    }
    if ((0x10000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | ((0x200U & (((~ (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                             >> 0x17U)) 
                                         << 9U) | (
                                                   (VL_REDXOR_32((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_data)) 
                                                    << 9U) 
                                                   ^ 
                                                   (0x7fe00U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                                       >> 0xdU))))) 
                             | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_data) 
                                << 1U)));
        } else {
            if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                    = (0x400U | (0x3ffU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                           >> 1U)));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x7ffU;
    }
    if ((0x10000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])) {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready)))) {
            if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
    } else {
        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
              << 1U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
        = ((0x1fffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U]) 
           | (0xffe00000U & ((IData)((((QData)((IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                                        | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                                            << 0x15U) 
                                                           | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                              >> 0xbU))))) 
                                       << 1U) | (QData)((IData)(
                                                                (0U 
                                                                 != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event))))) 
                             << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
        = (0x3fffffU & ((0x1fffffU & ((IData)((((QData)((IData)(
                                                                (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                                                 | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                                                     << 0x15U) 
                                                                    | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                                       >> 0xbU))))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event))))) 
                                      >> 0xbU)) | (0xffe00000U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                                                                | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                                                                << 0x15U) 
                                                                                | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                                                                >> 0xbU))))) 
                                                                 << 1U) 
                                                                | (QData)((IData)(
                                                                                (0U 
                                                                                != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)))) 
                                                               >> 0x20U)) 
                                                      << 0x15U))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 5U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 6U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err 
        = (((0U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                           << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                       >> 0x14U))))
             ? (2U <= (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
             : ((1U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                               << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x14U))))
                 ? (4U <= (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
                 : ((2U == (3U & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                   << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                               >> 0x14U))))
                     ? (8U <= (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
                     : (0x10U <= (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))))) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__break_st_q)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0x1fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0xe0000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0U] << 0x1dU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xfffffff8U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
           [1U]);
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xffffffc7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xfffffff8U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [2U] << 3U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xfffffe3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xffffffc0U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [3U] << 6U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xfffff1ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xfffffe00U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [4U] << 9U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xffff8fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xfffff000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [5U] << 0xcU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xfffc7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xffff8000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [6U] << 0xfU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xffe3ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xfffc0000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [7U] << 0x12U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xff1fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xffe00000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [8U] << 0x15U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xf8ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xff000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [9U] << 0x18U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0xc7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xf8000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xaU] << 0x1bU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
        = ((0x3fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
           | (0xc0000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xbU] << 0x1eU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0x3fffffffU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xbU] >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfffffff1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfffffffeU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xcU] << 1U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xffffff8fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfffffff0U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xdU] << 4U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfffffc7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xffffff80U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xeU] << 7U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xffffe3ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfffffc00U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0xfU] << 0xaU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xffff1fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xffffe000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x10U] << 0xdU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfff8ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xffff0000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x11U] << 0x10U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xffc7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfff80000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x12U] << 0x13U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xfe3fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xffc00000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x13U] << 0x16U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0xf1ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xfe000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x14U] << 0x19U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0x8fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0xf0000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x15U] << 0x1cU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U]) 
           | (0x80000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x16U] << 0x1fU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1ffffffcU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1fffffffU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x16U] >> 1U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1fffffe3U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1ffffffcU & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x17U] << 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1fffff1fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1fffffe0U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x18U] << 5U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1ffff8ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1fffff00U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x19U] << 8U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1fffc7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1ffff800U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1aU] << 0xbU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1ffe3fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1fffc000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1bU] << 0xeU)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1ff1ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1ffe0000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1cU] << 0x11U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1f8fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1ff00000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1dU] << 0x14U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x1c7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1f800000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1eU] << 0x17U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
        = ((0x3ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
           | (0x1c000000U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i
                             [0x1fU] << 0x1aU)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done 
        = (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))) 
           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)
            : 0U);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__wr_data 
        = (((0x200000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U])
             ? ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                 << 0xaU) | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                             >> 0x16U)) : vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
               ? (~ ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                      [1U][1U] << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][0U] 
                                            >> 1U)))
               : 0xffffffffU));
    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((1U & ((((((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                        >> 1U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                   >> 2U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                              >> 3U)) 
                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                     >> 4U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                >> 5U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                           >> 6U)) 
               | ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                  >> 7U)))) {
        if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
        } else {
            if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
            } else {
                if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next = 0U;
                } else {
                    if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                            = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q;
                    } else {
                        if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                = ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                    << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                >> 0x14U));
                        } else {
                            if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                    = ((0xfffffc00U 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                                       | (0x3ffU & 
                                          ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            << 0x16U) 
                                           | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                              >> 0xaU))));
                                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                    = (0xfff00000U 
                                       | (0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next));
                            } else {
                                if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                                    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffff0000U 
                                            & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                                           | (0xffffU 
                                              & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                                    >> 0x10U))));
                                    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xffffU 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next);
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                                        = vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U];
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff0000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                  << 0x10U) | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                               >> 0x10U))));
            vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0xffff0000U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                     << 0x10U)));
        } else {
            if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffff0000U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                      << 0x10U) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                                   >> 0x10U))));
                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next) 
                       | (0xffff0000U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                         << 0x10U)));
            } else {
                vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                        ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q
                        : ((0x800U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                            ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q
                            : ((0x1000U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                                ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q
                                : ((0x2000U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                                    ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q
                                    : ((0x4000U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))
                                        ? vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q
                                        : 0xffffffffU)))));
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((4ULL == (6ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((6ULL == (6ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 0x1aU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                            >> 6U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 0x1dU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                              >> 3U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10ULL == (0x18ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18ULL == (0x18ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 0x14U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                            >> 0xcU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 0x17U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                              >> 9U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40ULL == (0x60ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60ULL == (0x60ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 0xeU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                           >> 0x12U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 0x11U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                              >> 0xfU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100ULL == (0x180ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180ULL == (0x180ULL 
                                          & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 8U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                         >> 0x18U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 0xbU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                             >> 0x15U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400ULL == (0x600ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600ULL == (0x600ULL 
                                          & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                               << 2U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                         >> 0x1eU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                 << 5U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                           >> 0x1bU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000ULL == (0x1800ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800ULL == (0x1800ULL 
                                           & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 0x1cU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                            >> 4U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                              >> 1U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000ULL == (0x6000ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000ULL == (0x6000ULL 
                                           & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 0x16U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                            >> 0xaU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 0x19U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                              >> 7U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10000ULL == (0x18000ULL 
                                         & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18000ULL == (0x18000ULL 
                                            & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 0x10U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                            >> 0x10U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 0x13U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                              >> 0xdU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40000ULL == (0x60000ULL 
                                         & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60000ULL == (0x60000ULL 
                                            & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 0xaU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                           >> 0x16U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 0xdU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             >> 0x13U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100000ULL == (0x180000ULL 
                                          & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180000ULL == (0x180000ULL 
                                             & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 4U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                         >> 0x1cU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 7U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                           >> 0x19U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400000ULL == (0x600000ULL 
                                          & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600000ULL == (0x600000ULL 
                                             & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 0x1eU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                            >> 2U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                 << 1U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                           >> 0x1fU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000000ULL == (0x1800000ULL 
                                           & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800000ULL == (0x1800000ULL 
                                              & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 0x18U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                            >> 8U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 0x1bU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                              >> 5U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000000ULL == (0x6000000ULL 
                                           & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000000ULL == (0x6000000ULL 
                                              & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 0x12U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                            >> 0xeU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 0x15U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                              >> 0xbU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10000000ULL == (0x18000000ULL 
                                            & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18000000ULL == (0x18000000ULL 
                                               & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 0xcU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                           >> 0x14U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 0xfU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             >> 0x11U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40000000ULL == (0x60000000ULL 
                                            & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60000000ULL == (0x60000000ULL 
                                               & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                               << 6U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                         >> 0x1aU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 9U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                           >> 0x17U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100000000ULL == (0x180000000ULL 
                                             & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180000000ULL == (0x180000000ULL 
                                                & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                 << 3U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                           >> 0x1dU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400000000ULL == (0x600000000ULL 
                                             & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600000000ULL == (0x600000000ULL 
                                                & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 0x1aU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                            >> 6U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 0x1dU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                              >> 3U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000000000ULL == (0x1800000000ULL 
                                              & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800000000ULL == (0x1800000000ULL 
                                                 & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 0x14U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                            >> 0xcU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 0x17U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                              >> 9U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000000000ULL == (0x6000000000ULL 
                                              & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000000000ULL == (0x6000000000ULL 
                                                 & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 0xeU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           >> 0x12U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 0x11U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                              >> 0xfU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10000000000ULL == (0x18000000000ULL 
                                               & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18000000000ULL == (0x18000000000ULL 
                                                  & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 8U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                         >> 0x18U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 0xbU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             >> 0x15U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40000000000ULL == (0x60000000000ULL 
                                               & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60000000000ULL == (0x60000000000ULL 
                                                  & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                               << 2U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                         >> 0x1eU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                 << 5U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           >> 0x1bU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100000000000ULL == (0x180000000000ULL 
                                                & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180000000000ULL == (0x180000000000ULL 
                                                   & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 0x1cU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                            >> 4U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                              >> 1U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400000000000ULL == (0x600000000000ULL 
                                                & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600000000000ULL == (0x600000000000ULL 
                                                   & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 0x16U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                            >> 0xaU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 0x19U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                              >> 7U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000000000000ULL == (0x1800000000000ULL 
                                                 & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800000000000ULL == 
                             (0x1800000000000ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 0x10U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                            >> 0x10U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 0x13U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                              >> 0xdU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000000000000ULL == (0x6000000000000ULL 
                                                 & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000000000000ULL == 
                             (0x6000000000000ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 0xaU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                           >> 0x16U))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 0xdU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             >> 0x13U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x10000000000000ULL == (0x18000000000000ULL 
                                                  & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x18000000000000ULL == 
                             (0x18000000000000ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 4U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                         >> 0x1cU))) 
                       > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                 << 7U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                           >> 0x19U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x40000000000000ULL == (0x60000000000000ULL 
                                                  & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x60000000000000ULL == 
                             (0x60000000000000ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 2U)) > (7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                << 1U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                  >> 0x1fU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x100000000000000ULL == (0x180000000000000ULL 
                                                   & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x180000000000000ULL == 
                             (0x180000000000000ULL 
                              & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 8U)) > (7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                               >> 5U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x400000000000000ULL == (0x600000000000000ULL 
                                                   & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x600000000000000ULL == 
                             (0x600000000000000ULL 
                              & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 0xeU)) > (7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                 >> 0xbU))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x1000000000000000ULL == 
                          (0x1800000000000000ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x1800000000000000ULL 
                             == (0x1800000000000000ULL 
                                 & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 0x14U)) > (7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                  >> 0x11U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((IData)((0x4000000000000000ULL == 
                          (0x6000000000000000ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                 | ((IData)((0x6000000000000000ULL 
                             == (0x6000000000000000ULL 
                                 & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))) 
                    & ((7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                              >> 0x1aU)) > (7U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                                  >> 0x17U))))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event 
        = (1U & (((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                   >> 1U) & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                             >> 2U)) | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing)) 
           & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffffeULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | (IData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                     & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                >> 2U))) 
                                    | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                       & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                  >> 1U))))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xffffffc0U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0x3fU & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                        & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                            << 0x14U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                         >> 0xcU))) 
                       | ((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                          & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                              << 0x1aU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                           >> 6U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xfffffff8U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (7U & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                     & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                         << 0x1aU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                      >> 6U))) | ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                      << 0x1dU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                        >> 3U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffffdULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 4U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 3U))))))) 
              << 1U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xfffff03fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0xfc0U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                          << 6U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                     << 0xeU) | (0x3fc0U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                    >> 0x12U)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 6U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                       << 0x14U) | 
                                      (0xfffc0U & (
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                   >> 0xcU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xffffffc7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x38U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                         << 3U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                    << 0x17U) | (0x7ffff8U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                    >> 9U)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 3U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                      << 0x1aU) | (0x3fffff8U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                      >> 6U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffffbULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 6U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 5U))))))) 
              << 2U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xfffc0fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0x3f000U & ((0xfffff000U & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                                           << 0xcU) 
                                          & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                             << 8U))) 
                          | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                              << 0xcU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                           << 0xeU) 
                                          | (0x3000U 
                                             & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
                                                >> 0x12U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xfffffe3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x1c0U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                          << 6U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                     << 0x14U) | (0xfffc0U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                     >> 0xcU)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 6U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                       << 0x17U) | 
                                      (0x7fffc0U & 
                                       (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                        >> 9U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffff7ULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 8U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 7U))))))) 
              << 3U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xff03ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0xfc0000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x12U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                          << 2U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x12U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                          << 8U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xfffff1ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0xe00U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                          << 9U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                     << 0x11U) | (0x1fe00U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                     >> 0xfU)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 9U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                       << 0x14U) | 
                                      (0xffe00U & (
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                   >> 0xcU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffffefULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0xaU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 9U))))))) 
              << 4U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0xc0ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0x3f000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x18U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                             << 0x1cU) 
                                            | (0xf000000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  >> 4U)))) 
                             | (0xff000000U & (((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                                                << 0x18U) 
                                               & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
                                                  << 2U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xffff8fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x7000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                           << 0xcU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                        << 0xeU) | 
                                       (0x3000U & (
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                                   >> 0x12U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0xcU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 0x11U) 
                                         | (0x1f000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
                                               >> 0xfU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffffdfULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0xcU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0xbU))))))) 
              << 5U));
    __Vtemp481 = (0x3fU & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                            & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                << 0x18U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                             >> 8U))) 
                           | ((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                              & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                  << 0x1eU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                               >> 2U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U] 
        = ((0x3fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U]) 
           | (0xc0000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1eU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                            << 0x16U)) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1eU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                              << 0x1cU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xfffffff0U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0x3fffffffU & (__Vtemp481 >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xfffc7fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x38000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0xfU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                        << 0xbU)) | 
                          (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 0xfU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                        << 0xeU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffffbfULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0xeU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0xdU))))))) 
              << 6U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xfffffc0fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0x3f0U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                          << 4U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                     << 0x10U) | (0xfff0U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                     >> 0x10U)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 4U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                       << 0x16U) | 
                                      (0x3ffff0U & 
                                       (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                        >> 0xaU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xffe3ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x1c0000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x12U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 8U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x12U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 0xbU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffff7fULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x10U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0xfU))))))) 
              << 7U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xffff03ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0xfc00U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                           & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
                          << 0xaU) | (((- (IData)((1U 
                                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                                       << 0xaU) & (
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                    << 0x10U) 
                                                   | (0xfc00U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
                                                         >> 0x10U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xff1fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0xe00000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x15U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 5U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x15U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                          << 8U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffeffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x12U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x11U))))))) 
              << 8U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xffc0ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0x3f0000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x10U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                          << 4U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x10U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                          << 0xaU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xf8ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x7000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x18U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                           << 2U)) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x18U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                             << 5U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffdffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x14U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x13U))))))) 
              << 9U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xf03fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0xfc00000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x16U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                            << 0x1eU) 
                                           | (0x3fc00000U 
                                              & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                 >> 2U)))) 
                            | (0xffc00000U & (((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                                               << 0x16U) 
                                              & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                 << 4U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0xc7ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0x38000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1bU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                             << 0x1fU) 
                                            | (0x78000000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  >> 1U)))) 
                             | (0xf8000000U & (((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                                                << 0x1bU) 
                                               & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                  << 2U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffffbffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x16U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x15U))))))) 
              << 0xaU));
    __Vtemp496 = (0x3fU & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                            & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                << 0x1cU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                             >> 4U))) 
                           | ((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                              & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                  << 2U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                            >> 0x1eU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U] 
        = ((0xfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[1U]) 
           | (0xf0000000U & ((0xf0000000U & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                                              << 0x1cU) 
                                             & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                << 0x18U))) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1cU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                               << 0x1eU) 
                                              | (0x30000000U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
                                                    >> 2U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xfffffffcU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0xfffffffU & (__Vtemp496 >> 4U)));
    __Vtemp497 = (7U & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                         & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                             << 0x1eU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                          >> 2U))) 
                        | ((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                           & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                               << 1U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                         >> 0x1fU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U] 
        = ((0x3fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
           | (0xc0000000U & ((0xc0000000U & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                                              << 0x1eU) 
                                             & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                << 0x1cU))) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1eU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               << 0x1fU) 
                                              | (0x40000000U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
                                                    >> 1U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x3fffffffU & (__Vtemp497 >> 2U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffff7ffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x18U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x17U))))))) 
              << 0xbU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xffffff03U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0xfcU & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))) 
                         << 2U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                    << 0x12U) | (0x3fffcU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                    >> 0xeU)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 2U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                      << 0x18U) | (0xfffffcU 
                                                   & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                      >> 8U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfffffff1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0xeU & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))) 
                        << 1U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                   << 0x19U) | (0x1fffffeU 
                                                & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                   >> 7U)))) 
                      | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))))) 
                          << 1U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                     << 0x1cU) | (0xffffffeU 
                                                  & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                     >> 4U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffefffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x1aU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x19U))))))) 
              << 0xcU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xffffc0ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0x3f00U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))) 
                           << 8U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                      << 0xcU) | (0xf00U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                                     >> 0x14U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 8U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                        << 0x12U) | 
                                       (0x3ff00U & 
                                        (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
                                         >> 0xeU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xffffff8fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x70U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))) 
                         << 4U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                    << 0x16U) | (0x3ffff0U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                    >> 0xaU)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 4U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                      << 0x19U) | (0x1fffff0U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                      >> 7U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffdfffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x1cU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x1bU))))))) 
              << 0xdU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xfff03fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0xfc000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0xeU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                        << 6U)) | (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                                                    << 0xeU) 
                                                   & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                                      << 0xcU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfffffc7fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x380U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                          << 7U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                     << 0x13U) | (0x7ff80U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                     >> 0xdU)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 7U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                       << 0x16U) | 
                                      (0x3fff80U & 
                                       (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                        >> 0xaU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffffbfffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x1eU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x1dU))))))) 
              << 0xeU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0xfc0fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0x3f00000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x14U) & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x14U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
                                             << 6U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xffffe3ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x1c00U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))) 
                           << 0xaU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                        << 0x10U) | 
                                       (0xfc00U & (
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                   >> 0x10U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0xaU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                          << 0x13U) 
                                         | (0x7fc00U 
                                            & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                               >> 0xdU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffff7fffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x20U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x1fU))))))) 
              << 0xfU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U] 
        = ((0x3ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[2U]) 
           | (0xfc000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                               & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U]) 
                              << 0x1aU) | (0xfc000000U 
                                           & (((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                                               << 0x1aU) 
                                              & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U])))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xffff1fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0xe000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))) 
                           & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U]) 
                          << 0xdU) | (((- (IData)((1U 
                                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))))) 
                                       << 0xdU) & (
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                    << 0x10U) 
                                                   | (0xe000U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
                                                         >> 0x10U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffeffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x22U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x21U))))))) 
              << 0x10U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xffffffc0U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0x3fU & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                        & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                            << 0x14U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                         >> 0xcU))) 
                       | ((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                          & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                              << 0x1aU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                           >> 6U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfff8ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x70000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0x10U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                         << 0xaU)) 
                          | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel))))) 
                              << 0x10U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           << 0xdU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffdffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x24U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x23U))))))) 
              << 0x11U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xfffff03fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0xfc0U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                          << 6U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                     << 0xeU) | (0x3fc0U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                    >> 0x12U)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 6U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                       << 0x14U) | 
                                      (0xfffc0U & (
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                   >> 0xcU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xffc7ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x380000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x13U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                          << 7U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x13U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                          << 0xaU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffffbffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x26U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x25U))))))) 
              << 0x12U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xfffc0fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0x3f000U & ((0xfffff000U & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                                           << 0xcU) 
                                          & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                             << 8U))) 
                          | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                              << 0xcU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                           << 0xeU) 
                                          | (0x3000U 
                                             & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[6U] 
                                                >> 0x12U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xfe3fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x1c00000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x16U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           << 4U)) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x16U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 7U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffff7ffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x28U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x27U))))))) 
              << 0x13U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xff03ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0xfc0000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x12U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                          << 2U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x12U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                          << 8U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0xf1ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0xe000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x19U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                           << 1U)) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x19U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                             << 4U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffefffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x2aU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x29U))))))) 
              << 0x14U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0xc0ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0x3f000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x18U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                             << 0x1cU) 
                                            | (0xf000000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  >> 4U)))) 
                             | (0xff000000U & (((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))))) 
                                                << 0x18U) 
                                               & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[7U] 
                                                  << 2U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0x8fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x70000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1cU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                             << 0x1eU) 
                                            | (0x30000000U 
                                               & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  >> 2U)))) 
                             | (0xf0000000U & (((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel))))) 
                                                << 0x1cU) 
                                               & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[3U] 
                                                  << 1U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffdfffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x2cU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x2bU))))))) 
              << 0x15U));
    __Vtemp529 = (0x3fU & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                            & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                << 0x18U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                             >> 8U))) 
                           | ((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                              & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                  << 0x1eU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                               >> 2U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U] 
        = ((0x3fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[3U]) 
           | (0xc0000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1eU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                            << 0x16U)) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1eU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                              << 0x1cU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xfffffff0U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0x3fffffffU & (__Vtemp529 >> 2U)));
    __Vtemp530 = (7U & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                         & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                             << 0x1cU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                          >> 4U))) 
                        | ((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                           & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                               << 0x1fU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                            >> 1U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U] 
        = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[1U]) 
           | (0x80000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1fU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                            << 0x1bU)) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1fU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                              << 0x1eU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfffffffcU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x7fffffffU & (__Vtemp530 >> 1U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffffbfffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x2eU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x2dU))))))) 
              << 0x16U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xfffffc0fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0x3f0U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))) 
                          << 4U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                     << 0x10U) | (0xfff0U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                     >> 0x10U)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 4U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                       << 0x16U) | 
                                      (0x3ffff0U & 
                                       (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                        >> 0xaU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xffffffe3U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x1cU & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))) 
                         << 2U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                    << 0x18U) | (0xfffffcU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                    >> 8U)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 2U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x1bU) | (0x7fffffcU 
                                                   & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                      >> 5U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffff7fffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x30U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x2fU))))))) 
              << 0x17U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xffff03ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0xfc00U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel))) 
                           & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U]) 
                          << 0xaU) | (((- (IData)((1U 
                                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel))))) 
                                       << 0xaU) & (
                                                   (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                    << 0x10U) 
                                                   | (0xfc00U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[8U] 
                                                         >> 0x10U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xffffff1fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0xe0U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel))) 
                         << 5U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                    << 0x15U) | (0x1fffe0U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                    >> 0xbU)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 5U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                      << 0x18U) | (0xffffe0U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                      >> 8U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffeffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x32U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x31U))))))) 
              << 0x18U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xffc0ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0x3f0000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x10U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                          << 4U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x10U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                          << 0xaU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfffff8ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x700U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel))) 
                          << 8U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                     << 0x12U) | (0x3ff00U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                     >> 0xeU)))) 
                        | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 8U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                       << 0x15U) | 
                                      (0x1fff00U & 
                                       (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                        >> 0xbU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffdffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x34U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x33U))))))) 
              << 0x19U));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xf03fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0xfc00000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x16U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                            << 0x1eU) 
                                           | (0x3fc00000U 
                                              & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                 >> 2U)))) 
                            | (0xffc00000U & (((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel))))) 
                                               << 0x16U) 
                                              & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                 << 4U))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xffffc7ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x3800U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel))) 
                           << 0xbU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                        << 0xfU) | 
                                       (0x7800U & (
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                   >> 0x11U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0xbU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                          << 0x12U) 
                                         | (0x3f800U 
                                            & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                               >> 0xeU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffffbffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x36U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x35U))))))) 
              << 0x1aU));
    __Vtemp544 = (0x3fU & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))) 
                            & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                << 0x1cU) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                             >> 4U))) 
                           | ((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))))) 
                              & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                  << 2U) | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                            >> 0x1eU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U] 
        = ((0xfffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[4U]) 
           | (0xf0000000U & ((0xf0000000U & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))) 
                                              << 0x1cU) 
                                             & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                << 0x18U))) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1cU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                               << 0x1eU) 
                                              | (0x30000000U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[9U] 
                                                    >> 2U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xfffffffcU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0xfffffffU & (__Vtemp544 >> 4U)));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfffe3fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x1c000U & ((0xffffc000U & (((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))) 
                                           << 0xeU) 
                                          & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 0xcU))) 
                          | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel))))) 
                              << 0xeU) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                           << 0xfU) 
                                          | (0x4000U 
                                             & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[4U] 
                                                >> 0x11U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7ffffffff7ffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x38U))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x37U))))))) 
              << 0x1bU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xffffff03U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0xfcU & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel))) 
                         << 2U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                    << 0x12U) | (0x3fffcU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                    >> 0xeU)))) 
                       | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel))))) 
                           << 2U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                      << 0x18U) | (0xfffffcU 
                                                   & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                      >> 8U)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfff1ffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0xe0000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0x11U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                         << 9U)) | 
                          (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel))))) 
                            << 0x11U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                         << 0xcU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffefffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x3aU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x39U))))))) 
              << 0x1cU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xffffc0ffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0x3f00U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel))) 
                           << 8U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                      << 0xcU) | (0xf00U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                                     >> 0x14U)))) 
                         | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 8U) & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                        << 0x12U) | 
                                       (0x3ff00U & 
                                        (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xaU] 
                                         >> 0xeU)))))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xff8fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x700000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel))) 
                             << 0x14U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                          << 6U)) | 
                           (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel))))) 
                             << 0x14U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                          << 9U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffdfffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x3cU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x3bU))))))) 
              << 0x1dU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xfff03fffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0xfc000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel))) 
                            << 0xeU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                        << 6U)) | (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel))))) 
                                                    << 0xeU) 
                                                   & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                                      << 0xcU)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xfc7fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x3800000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x17U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                           << 3U)) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x17U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                             << 6U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
        = ((0x7fffffffbfffffffULL & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel) 
                                      & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                 >> 0x3eU))) 
                                     | ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel)) 
                                        & (IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree 
                                                   >> 0x3dU))))))) 
              << 0x1eU));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U] 
        = ((0xfc0fffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[5U]) 
           | (0x3f00000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel))) 
                              << 0x14U) & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU]) 
                            | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel))))) 
                                << 0x14U) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0xbU] 
                                             << 6U)))));
    vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U] 
        = ((0xe3ffffffU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[2U]) 
           | (0x1c000000U & ((((- (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel))) 
                               << 0x1aU) & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U]) 
                             | (((- (IData)((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel))))) 
                                 << 0x1aU) & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[5U] 
                                              << 3U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
        = ((0x1ffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U]) 
           | (0xfffe0000U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                              << 0x1fU) | ((0x40000000U 
                                            & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                                << 0x1eU) 
                                               | (0xc0000000U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                     << 3U)))) 
                                           | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                               << 0x1dU) 
                                              | ((0x10000000U 
                                                  & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                                      << 0x1cU) 
                                                     | (0xf0000000U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                           << 2U)))) 
                                                 | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                                     << 0x1bU) 
                                                    | ((0x4000000U 
                                                        & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                                            << 0x1aU) 
                                                           | (0xfc000000U 
                                                              & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                 << 1U)))) 
                                                       | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                                           << 0x19U) 
                                                          | ((0x1000000U 
                                                              & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                                                  << 0x18U) 
                                                                 | (0xff000000U 
                                                                    & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U]))) 
                                                             | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                                                 << 0x17U) 
                                                                | ((0x400000U 
                                                                    & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                                                        << 0x16U) 
                                                                       | (0x7fc00000U 
                                                                          & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                             >> 1U)))) 
                                                                   | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                                                       << 0x15U) 
                                                                      | ((0x100000U 
                                                                          & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                                                              << 0x14U) 
                                                                             | (0x3ff00000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                                >> 2U)))) 
                                                                         | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                                                             << 0x13U) 
                                                                            | ((0x40000U 
                                                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                                                                << 0x12U) 
                                                                                | (0x1ffc0000U 
                                                                                & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                                                                >> 3U)))) 
                                                                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                                                                << 0x11U)))))))))))))))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[2U] 
        = (1U & ((1U & ((0x1ffffU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event)) 
                        | (0xfU & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[3U] 
                                   >> 0x1cU)))) | (
                                                   (0x1ffffU 
                                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                                                       >> 1U)) 
                                                   | ((0x1ffffU 
                                                       & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                                          >> 3U)) 
                                                      | ((0x1ffffU 
                                                          & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                                             >> 5U)) 
                                                         | ((0x1ffffU 
                                                             & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                                                >> 7U)) 
                                                            | ((0x1ffffU 
                                                                & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                                                   >> 9U)) 
                                                               | ((0x1ffffU 
                                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                                                      >> 0xbU)) 
                                                                  | ((0x1ffffU 
                                                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                                                         >> 0xdU)) 
                                                                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                                                        >> 0xfU))))))))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush = 0U;
    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en) 
         & ((1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op)) 
            | (2U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op))))) {
        if (((0x300U == (0xfffU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))) | (0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x14U))))) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush = 1U;
        }
    } else {
        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en) 
             & (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op)))) {
            if (((((0x7b0U == (0xfffU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))) 
                   | (0x7b1U == (0xfffU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U)))) 
                  | (0x7b2U == (0xfffU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)))) 
                 | (0x7b3U == (0xfffU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush = 1U;
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data 
        = (1U & (((0x80000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[2U]
                   : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 1U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data 
        = (1U & (((0x20000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1eU) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 2U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data 
        = (1U & (((0x8000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1cU) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 3U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = (1U & (((0x2000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x1aU) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 4U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = (1U & (((0x800000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x18U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 5U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = (1U & (((0x200000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x16U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 6U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = (1U & (((0x80000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x14U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 7U)))));
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = (1U & (((0x20000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                   ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                      >> 0x12U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                    | (~ (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                          [0xaU][0U] >> 8U)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0x40000000U 
                                                             | (0xfffffffU 
                                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)))) {
                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                                = 
                                                                (3U 
                                                                 | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        }
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            ((0xfffffe3fU 
                                                              & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                                                             | (0x1c0U 
                                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff7ffU 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffff7U 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffefU 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffbffU 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffdffU 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffdfU 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffbfffU 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xf000ffffU 
                                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffffcU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q));
            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe3fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause) 
                      << 6U));
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->__Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__inp 
                                                            = 
                                                            (3U 
                                                             & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                >> 0xbU));
                                                        vlTOPp->__Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__Vfuncout 
                                                            = vlTOPp->__Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__inp;
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                            = 
                                                            ((0x20U 
                                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                 << 2U)) 
                                                             | ((0x10U 
                                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                    >> 3U)) 
                                                                | (((IData)(vlTOPp->__Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__Vfuncout) 
                                                                    << 2U) 
                                                                   | ((2U 
                                                                       & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                          >> 0x10U)) 
                                                                      | (1U 
                                                                         & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                            >> 0x15U))))));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                  >> 2U))) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                    >> 2U))))) {
                                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                                = 
                                                                (0xcU 
                                                                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = (0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((0x2fU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | (0x10U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   >> 1U)));
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((0x33U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q) 
                          << 2U));
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | (0x20U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   << 1U)));
                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = ((0x2fU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                           | (0x10U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                       << 2U)));
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = ((0x33U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                           | (0xcU & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                      << 2U)));
                } else {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = (0x10U | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = (0x33U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((1U & ((((((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                     | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                        >> 1U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                   >> 2U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                              >> 3U)) 
                  | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                     >> 4U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                >> 5U)) | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                           >> 6U)) 
               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                  >> 7U)))) {
        if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                      << 1U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 2U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                      << 3U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                      << 4U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                      << 5U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                      << 6U));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                      << 7U));
        } else {
            if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                          << 1U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                          << 2U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                          << 3U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                          << 4U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                          << 5U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                          << 6U));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                          << 7U));
            } else {
                if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = (0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                } else {
                    if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                  << 2U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                  << 4U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                  << 5U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                  << 6U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                  << 7U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xfffffcffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                  << 8U));
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                  << 0x10U));
                    } else {
                        if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (1U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0x10U)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (2U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0xeU)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (4U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0xcU)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (8U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                            >> 0xaU)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (0x10U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 8U)));
                            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                   | (0x20U & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 6U)));
                        } else {
                            if ((0x20U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                    = ((0xffffff00U 
                                        & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                       | (0xffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[2U] 
                                                    << 0x1dU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                                      >> 3U))));
                            } else {
                                if ((0x40U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xffffff00U 
                                           & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                                } else {
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xfffffffeU 
                                           & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = (0xfffffffdU 
                                           & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next);
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffffffe3U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                              << 2U));
                                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                                        = ((0xffffff9fU 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                                           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                              << 5U));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffc0U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x3fU & ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                << 0xaU) | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U] 
                                            >> 0x16U))));
            vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffc0ffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x3f0000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U]));
        } else {
            if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q));
                vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                    = ((0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                          << 1U));
            } else {
                if ((0x400U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                    vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                        = ((0xffff0000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                           | (0xffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U]));
                } else {
                    if ((0x800U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))) {
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0xff000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next 
                            = ((0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next) 
                               | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                  << 0x1fU));
                    } else {
                        vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x800U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                    } else {
                                        if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                = (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                   | (0xffffffffULL 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                    = 
                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                     | (0xffffffffULL 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                            } else {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                        = 
                                                        (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                         | (0xffffffffULL 
                                                            & ((IData)(1U) 
                                                               << 
                                                               (0x1fU 
                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                            = 
                                                            (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                             | (0xffffffffULL 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x800U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                    } else {
                                        if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                = (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                   | (0xffffffffULL 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                    = 
                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                     | (0xffffffffULL 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                            } else {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                        = 
                                                        (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                         | (0xffffffffULL 
                                                            & ((IData)(1U) 
                                                               << 
                                                               (0x1fU 
                                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                            = 
                                                            (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                             | (0xffffffffULL 
                                                                & ((IData)(1U) 
                                                                   << 
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr)))));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush) 
           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (5U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
            | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
               | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err))) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq)) 
                         & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                            | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                    if ((1U & (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall)) 
                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending))))) {
                        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                        } else {
                            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear 
        = (1U & ((~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                 | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready 
        = (1U & (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall)) 
                  & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if))) 
                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
            | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d 
        = ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
             & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    if ((8U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 0U : ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                         ? 0U : 5U));
    } else {
        if ((4U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                } else {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    if ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if ((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)))) {
                                if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) {
                                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                                } else {
                                    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq))) {
                                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                                    }
                                }
                            }
                        }
                    }
                    if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
                         & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        if (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb) 
                             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception))) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
                        }
                    }
                    if ((1U & (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall)) 
                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending))))) {
                        if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                            vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                        } else {
                            if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    }
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                    }
                    if (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (((0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs) 
                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                               | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                  >> 2U)))) {
                        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                    }
                } else {
                    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                }
            } else {
                vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                        ? 4U : 1U);
            }
        }
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffeU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffefffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffdfffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffbfffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffff7fffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffeffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffdffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffbffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfff7ffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffefffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffdfffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffbfffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xff7fffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfeffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfdffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfbffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xf7ffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xefffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xdfffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xbfffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0x7fffffffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (1U | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffdU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffffbU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
              << 2U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffff7U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
               & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                  | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz))) 
              << 3U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffffefU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))) 
              << 4U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffffdfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load) 
              << 5U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffffbfU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store) 
              << 6U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffff7fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump) 
              << 7U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffeffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch) 
              << 8U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffdffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch) 
              << 9U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffbffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q)) 
              << 0xaU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffff7ffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec)) 
              << 0xbU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffefffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec)) 
              << 0xcU));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
            & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)) 
           & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((6U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                >> 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              | (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((5U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | ((0x7ffffffeU & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                               >> 1U) & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) 
                                         << 1U))) | 
              (0xfffffffeU & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                                << 1U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                              & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                 << 1U)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd 
        = (1ULL + vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))
                ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd
                : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd 
        = (1ULL + vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q);
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : ((1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                       >> 2U) & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 2U)))) ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd
                : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((6U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                     ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                        >> 1U) : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((5U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (2U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                      ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                         >> 2U) : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                                   >> 1U)) << 1U)));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (4U & (((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                     << 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((6U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((5U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (2U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)) 
                       << 1U))));
    vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (4U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)) 
                       << 2U))));
}
