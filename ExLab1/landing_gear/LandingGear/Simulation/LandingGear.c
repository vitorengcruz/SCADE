/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/Simulation/config.txt
** Generation date: 2019-09-26T07:55:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LandingGear.h"

/* LandingGear/ */
void LandingGear(inC_LandingGear *inC, outC_LandingGear *outC)
{
  /* NoseSquareBorderColor/ */
  kcg_uint8 NoseSquareBorderColor_partial;
  /* LeftSquareBorderColor/ */
  kcg_uint8 LeftSquareBorderColor_partial;
  /* RightSquareBorderColor/ */
  kcg_uint8 RightSquareBorderColor_partial;
  /* NoseSquareFillColor/ */
  kcg_uint8 NoseSquareFillColor_partial;
  /* LeftSquareFillColor/ */
  kcg_uint8 LeftSquareFillColor_partial;
  /* RightSquareFillColor/ */
  kcg_uint8 RightSquareFillColor_partial;
  /* NoseTextColorIndex/ */
  kcg_uint8 NoseTextColorIndex_partial;
  /* LeftTextColorIndex/ */
  kcg_uint8 LeftTextColorIndex_partial;
  /* RightTextColorIndex/ */
  kcg_uint8 RightTextColorIndex_partial;
  /* NoseTextString/ */
  T_String NoseTextString_partial;
  /* LeftTextString/ */
  T_String LeftTextString_partial;
  /* RightTextString/ */
  T_String RightTextString_partial;
  /* Tr2Dn/ */
  kcg_bool Tr2Dn_partial;
  /* Tr2Up/ */
  kcg_bool Tr2Up_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* RightTextString/ */
  T_String _1_RightTextString_partial;
  /* LeftTextString/ */
  T_String _2_LeftTextString_partial;
  /* NoseTextString/ */
  T_String _3_NoseTextString_partial;
  /* RightTextColorIndex/ */
  kcg_uint8 _4_RightTextColorIndex_partial;
  /* LeftTextColorIndex/ */
  kcg_uint8 _5_LeftTextColorIndex_partial;
  /* NoseTextColorIndex/ */
  kcg_uint8 _6_NoseTextColorIndex_partial;
  /* RightSquareFillColor/ */
  kcg_uint8 _7_RightSquareFillColor_partial;
  /* LeftSquareFillColor/ */
  kcg_uint8 _8_LeftSquareFillColor_partial;
  /* NoseSquareFillColor/ */
  kcg_uint8 _9_NoseSquareFillColor_partial;
  /* RightSquareBorderColor/ */
  kcg_uint8 _10_RightSquareBorderColor_partial;
  /* LeftSquareBorderColor/ */
  kcg_uint8 _11_LeftSquareBorderColor_partial;
  /* NoseSquareBorderColor/ */
  kcg_uint8 _12_NoseSquareBorderColor_partial;
  /* RightTextString/ */
  T_String _13_RightTextString_partial;
  /* LeftTextString/ */
  T_String _14_LeftTextString_partial;
  /* NoseTextString/ */
  T_String _15_NoseTextString_partial;
  /* RightTextColorIndex/ */
  kcg_uint8 _16_RightTextColorIndex_partial;
  /* LeftTextColorIndex/ */
  kcg_uint8 _17_LeftTextColorIndex_partial;
  /* NoseTextColorIndex/ */
  kcg_uint8 _18_NoseTextColorIndex_partial;
  /* RightSquareFillColor/ */
  kcg_uint8 _19_RightSquareFillColor_partial;
  /* LeftSquareFillColor/ */
  kcg_uint8 _20_LeftSquareFillColor_partial;
  /* NoseSquareFillColor/ */
  kcg_uint8 _21_NoseSquareFillColor_partial;
  /* RightSquareBorderColor/ */
  kcg_uint8 _22_RightSquareBorderColor_partial;
  /* LeftSquareBorderColor/ */
  kcg_uint8 _23_LeftSquareBorderColor_partial;
  /* NoseSquareBorderColor/ */
  kcg_uint8 _24_NoseSquareBorderColor_partial;
  /* NoseSquareBorderColor/ */
  kcg_uint8 _25_NoseSquareBorderColor_partial;
  /* LeftSquareBorderColor/ */
  kcg_uint8 _26_LeftSquareBorderColor_partial;
  /* RightSquareBorderColor/ */
  kcg_uint8 _27_RightSquareBorderColor_partial;
  /* NoseSquareFillColor/ */
  kcg_uint8 _28_NoseSquareFillColor_partial;
  /* LeftSquareFillColor/ */
  kcg_uint8 _29_LeftSquareFillColor_partial;
  /* RightSquareFillColor/ */
  kcg_uint8 _30_RightSquareFillColor_partial;
  /* NoseTextColorIndex/ */
  kcg_uint8 _31_NoseTextColorIndex_partial;
  /* LeftTextColorIndex/ */
  kcg_uint8 _32_LeftTextColorIndex_partial;
  /* RightTextColorIndex/ */
  kcg_uint8 _33_RightTextColorIndex_partial;
  /* NoseTextString/ */
  T_String _34_NoseTextString_partial;
  /* LeftTextString/ */
  T_String _35_LeftTextString_partial;
  /* RightTextString/ */
  T_String _36_RightTextString_partial;
  /* Tr2Dn/ */
  kcg_bool _37_Tr2Dn_partial;
  /* Tr2Up/ */
  kcg_bool _38_Tr2Up_partial;
  /* SM1: */
  SSM_ST_SM1 _39_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _40_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _41_SM1_fired_partial;
  /* Tr2Up/ */
  kcg_bool _42_Tr2Up_partial;
  /* Tr2Dn/ */
  kcg_bool _43_Tr2Dn_partial;
  /* Tr2Up/ */
  kcg_bool _44_Tr2Up_partial;
  /* Tr2Dn/ */
  kcg_bool _45_Tr2Dn_partial;
  /* RightTextString/ */
  T_String _46_RightTextString_partial;
  /* LeftTextString/ */
  T_String _47_LeftTextString_partial;
  /* NoseTextString/ */
  T_String _48_NoseTextString_partial;
  /* RightTextColorIndex/ */
  kcg_uint8 _49_RightTextColorIndex_partial;
  /* LeftTextColorIndex/ */
  kcg_uint8 _50_LeftTextColorIndex_partial;
  /* NoseTextColorIndex/ */
  kcg_uint8 _51_NoseTextColorIndex_partial;
  /* RightSquareFillColor/ */
  kcg_uint8 _52_RightSquareFillColor_partial;
  /* LeftSquareFillColor/ */
  kcg_uint8 _53_LeftSquareFillColor_partial;
  /* NoseSquareFillColor/ */
  kcg_uint8 _54_NoseSquareFillColor_partial;
  /* RightSquareBorderColor/ */
  kcg_uint8 _55_RightSquareBorderColor_partial;
  /* LeftSquareBorderColor/ */
  kcg_uint8 _56_LeftSquareBorderColor_partial;
  /* NoseSquareBorderColor/ */
  kcg_uint8 _57_NoseSquareBorderColor_partial;
  /* RightTextString/ */
  T_String _58_RightTextString_partial;
  /* LeftTextString/ */
  T_String _59_LeftTextString_partial;
  /* NoseTextString/ */
  T_String _60_NoseTextString_partial;
  /* RightTextColorIndex/ */
  kcg_uint8 _61_RightTextColorIndex_partial;
  /* LeftTextColorIndex/ */
  kcg_uint8 _62_LeftTextColorIndex_partial;
  /* NoseTextColorIndex/ */
  kcg_uint8 _63_NoseTextColorIndex_partial;
  /* RightSquareFillColor/ */
  kcg_uint8 _64_RightSquareFillColor_partial;
  /* LeftSquareFillColor/ */
  kcg_uint8 _65_LeftSquareFillColor_partial;
  /* NoseSquareFillColor/ */
  kcg_uint8 _66_NoseSquareFillColor_partial;
  /* RightSquareBorderColor/ */
  kcg_uint8 _67_RightSquareBorderColor_partial;
  /* LeftSquareBorderColor/ */
  kcg_uint8 _68_LeftSquareBorderColor_partial;
  /* NoseSquareBorderColor/ */
  kcg_uint8 _69_NoseSquareBorderColor_partial;
  /* SM1:TRANSITION:<1> */
  kcg_bool tr_1_guard_TRANSITION_SM1;
  /* SM1:TRANSITION:<2> */
  kcg_bool tr_2_guard_TRANSITION_SM1;
  /* SM1: */
  SSM_TR_SM1 _70_SM1_fired_partial;
  /* SM1: */
  kcg_bool _71_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _72_SM1_state_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _73_SM1_fired_partial;
  /* SM1: */
  kcg_bool _74_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _75_SM1_state_nxt_partial;
  /* NoseSquareBorderColor/ */
  kcg_uint8 _76_NoseSquareBorderColor_partial;
  /* LeftSquareBorderColor/ */
  kcg_uint8 _77_LeftSquareBorderColor_partial;
  /* RightSquareBorderColor/ */
  kcg_uint8 _78_RightSquareBorderColor_partial;
  /* NoseSquareFillColor/ */
  kcg_uint8 _79_NoseSquareFillColor_partial;
  /* LeftSquareFillColor/ */
  kcg_uint8 _80_LeftSquareFillColor_partial;
  /* RightSquareFillColor/ */
  kcg_uint8 _81_RightSquareFillColor_partial;
  /* NoseTextColorIndex/ */
  kcg_uint8 _82_NoseTextColorIndex_partial;
  /* LeftTextColorIndex/ */
  kcg_uint8 _83_LeftTextColorIndex_partial;
  /* RightTextColorIndex/ */
  kcg_uint8 _84_RightTextColorIndex_partial;
  /* NoseTextString/ */
  T_String _85_NoseTextString_partial;
  /* LeftTextString/ */
  T_String _86_LeftTextString_partial;
  /* RightTextString/ */
  T_String _87_RightTextString_partial;
  /* Tr2Dn/ */
  kcg_bool _88_Tr2Dn_partial;
  /* Tr2Up/ */
  kcg_bool _89_Tr2Up_partial;
  /* SM1: */
  SSM_ST_SM1 _90_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _91_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _92_SM1_fired_partial;
  /* RightTextString/ */
  T_String _93_RightTextString_partial;
  /* LeftTextString/ */
  T_String _94_LeftTextString_partial;
  /* NoseTextString/ */
  T_String _95_NoseTextString_partial;
  /* RightTextColorIndex/ */
  kcg_uint8 _96_RightTextColorIndex_partial;
  /* LeftTextColorIndex/ */
  kcg_uint8 _97_LeftTextColorIndex_partial;
  /* NoseTextColorIndex/ */
  kcg_uint8 _98_NoseTextColorIndex_partial;
  /* RightSquareFillColor/ */
  kcg_uint8 _99_RightSquareFillColor_partial;
  /* LeftSquareFillColor/ */
  kcg_uint8 _100_LeftSquareFillColor_partial;
  /* NoseSquareFillColor/ */
  kcg_uint8 _101_NoseSquareFillColor_partial;
  /* RightSquareBorderColor/ */
  kcg_uint8 _102_RightSquareBorderColor_partial;
  /* LeftSquareBorderColor/ */
  kcg_uint8 _103_LeftSquareBorderColor_partial;
  /* NoseSquareBorderColor/ */
  kcg_uint8 _104_NoseSquareBorderColor_partial;
  /* RightTextString/ */
  T_String _105_RightTextString_partial;
  /* LeftTextString/ */
  T_String _106_LeftTextString_partial;
  /* NoseTextString/ */
  T_String _107_NoseTextString_partial;
  /* RightTextColorIndex/ */
  kcg_uint8 _108_RightTextColorIndex_partial;
  /* LeftTextColorIndex/ */
  kcg_uint8 _109_LeftTextColorIndex_partial;
  /* NoseTextColorIndex/ */
  kcg_uint8 _110_NoseTextColorIndex_partial;
  /* RightSquareFillColor/ */
  kcg_uint8 _111_RightSquareFillColor_partial;
  /* LeftSquareFillColor/ */
  kcg_uint8 _112_LeftSquareFillColor_partial;
  /* NoseSquareFillColor/ */
  kcg_uint8 _113_NoseSquareFillColor_partial;
  /* RightSquareBorderColor/ */
  kcg_uint8 _114_RightSquareBorderColor_partial;
  /* LeftSquareBorderColor/ */
  kcg_uint8 _115_LeftSquareBorderColor_partial;
  /* NoseSquareBorderColor/ */
  kcg_uint8 _116_NoseSquareBorderColor_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:DOWN:<1> */
  kcg_bool tr_1_guard_DOWN_SM1;
  /* SM1: */
  SSM_ST_SM1 _117_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _118_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _119_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _120_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _121_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _122_SM1_fired_strong_partial;
  /* SM1:UP:<1> */
  kcg_bool tr_1_guard_UP_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  /* @1/_L3= */
  if (outC->init) {
    outC->_L3_Switch_1 = kcg_false;
  }
  else {
    outC->_L3_Switch_1 = outC->_L2_Switch_1;
  }
  outC->Output1_Switch_1 = outC->_L3_Switch_1;
  outC->_L4_Switch_1 = !outC->_L3_Switch_1;
  outC->_L1 = inC->LG_UpBtn;
  outC->Input1_Switch_1 = outC->_L1;
  outC->_L1_Switch_1 = outC->Input1_Switch_1;
  /* @1/_L2= */
  if (outC->_L1_Switch_1) {
    outC->_L2_Switch_1 = outC->_L4_Switch_1;
  }
  else {
    outC->_L2_Switch_1 = outC->_L3_Switch_1;
  }
  /* @2/_L3= */
  if (outC->init) {
    outC->_L3_Switch_2 = kcg_false;
  }
  else {
    outC->_L3_Switch_2 = outC->_L2_Switch_2;
  }
  outC->Output1_Switch_2 = outC->_L3_Switch_2;
  outC->_L4_Switch_2 = !outC->_L3_Switch_2;
  outC->_L5 = inC->LG_FailBtn;
  outC->Input1_Switch_2 = outC->_L5;
  outC->_L1_Switch_2 = outC->Input1_Switch_2;
  /* @2/_L2= */
  if (outC->_L1_Switch_2) {
    outC->_L2_Switch_2 = outC->_L4_Switch_2;
  }
  else {
    outC->_L2_Switch_2 = outC->_L3_Switch_2;
  }
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->_L19 = outC->Output1_Switch_1;
  outC->LG_Up = outC->_L19;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_UP_SM1 :
      tr_1_guard_UP_SM1 = !outC->LG_Up;
      if (tr_1_guard_UP_SM1) {
        _120_SM1_state_act_partial = SSM_st_TRANSITION_SM1;
      }
      else {
        _120_SM1_state_act_partial = SSM_st_UP_SM1;
      }
      outC->SM1_state_act = _120_SM1_state_act_partial;
      if (tr_1_guard_UP_SM1) {
        _122_SM1_fired_strong_partial = SSM_TR_UP_TRANSITION_1_UP_SM1;
      }
      else {
        _122_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _122_SM1_fired_strong_partial;
      break;
    case SSM_st_TRANSITION_SM1 :
      _117_SM1_state_act_partial = SSM_st_TRANSITION_SM1;
      outC->SM1_state_act = _117_SM1_state_act_partial;
      _119_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _119_SM1_fired_strong_partial;
      break;
    case SSM_st_DOWN_SM1 :
      tr_1_guard_DOWN_SM1 = outC->LG_Up;
      if (tr_1_guard_DOWN_SM1) {
        SM1_state_act_partial = SSM_st_TRANSITION_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_DOWN_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_DOWN_SM1) {
        SM1_fired_strong_partial = SSM_TR_DOWN_TRANSITION_1_DOWN_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_UP_SM1 :
      _92_SM1_fired_partial = outC->SM1_fired_strong;
      _91_SM1_reset_nxt_partial = kcg_false;
      _90_SM1_state_nxt_partial = SSM_st_UP_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L22 = outC->Output1_Switch_2;
  outC->LG_Fail = outC->_L22;
  switch (outC->SM1_state_act) {
    case SSM_st_UP_SM1 :
      outC->IfBlock2_clock_UP_SM1 = outC->LG_Fail;
      /* SM1:UP:IfBlock2: */
      if (outC->IfBlock2_clock_UP_SM1) {
        outC->_L4_then_IfBlock2_UP_SM1 = WHITE;
        _108_RightTextColorIndex_partial = outC->_L4_then_IfBlock2_UP_SM1;
        _109_LeftTextColorIndex_partial = outC->_L4_then_IfBlock2_UP_SM1;
        _110_NoseTextColorIndex_partial = outC->_L4_then_IfBlock2_UP_SM1;
        outC->_L3_then_IfBlock2_UP_SM1 = RED;
        _111_RightSquareFillColor_partial = outC->_L3_then_IfBlock2_UP_SM1;
        _112_LeftSquareFillColor_partial = outC->_L3_then_IfBlock2_UP_SM1;
        _113_NoseSquareFillColor_partial = outC->_L3_then_IfBlock2_UP_SM1;
        outC->_L2_then_IfBlock2_UP_SM1 = RED;
        _114_RightSquareBorderColor_partial = outC->_L2_then_IfBlock2_UP_SM1;
        _115_LeftSquareBorderColor_partial = outC->_L2_then_IfBlock2_UP_SM1;
        _116_NoseSquareBorderColor_partial = outC->_L2_then_IfBlock2_UP_SM1;
        kcg_copy_T_String(&outC->_L1_then_IfBlock2_UP_SM1, (T_String *) &LG_DOWN_TEXT);
        kcg_copy_T_String(
          &_105_RightTextString_partial,
          &outC->_L1_then_IfBlock2_UP_SM1);
        kcg_copy_T_String(
          &_106_LeftTextString_partial,
          &outC->_L1_then_IfBlock2_UP_SM1);
        kcg_copy_T_String(
          &_107_NoseTextString_partial,
          &outC->_L1_then_IfBlock2_UP_SM1);
        _76_NoseSquareBorderColor_partial = _116_NoseSquareBorderColor_partial;
        _77_LeftSquareBorderColor_partial = _115_LeftSquareBorderColor_partial;
        _78_RightSquareBorderColor_partial = _114_RightSquareBorderColor_partial;
        _79_NoseSquareFillColor_partial = _113_NoseSquareFillColor_partial;
        _80_LeftSquareFillColor_partial = _112_LeftSquareFillColor_partial;
        _81_RightSquareFillColor_partial = _111_RightSquareFillColor_partial;
        _82_NoseTextColorIndex_partial = _110_NoseTextColorIndex_partial;
        _83_LeftTextColorIndex_partial = _109_LeftTextColorIndex_partial;
        _84_RightTextColorIndex_partial = _108_RightTextColorIndex_partial;
        kcg_copy_T_String(&_85_NoseTextString_partial, &_107_NoseTextString_partial);
        kcg_copy_T_String(&_86_LeftTextString_partial, &_106_LeftTextString_partial);
        kcg_copy_T_String(&_87_RightTextString_partial, &_105_RightTextString_partial);
      }
      else {
        outC->_L4_else_IfBlock2_UP_SM1 = WHITE;
        _96_RightTextColorIndex_partial = outC->_L4_else_IfBlock2_UP_SM1;
        _97_LeftTextColorIndex_partial = outC->_L4_else_IfBlock2_UP_SM1;
        _98_NoseTextColorIndex_partial = outC->_L4_else_IfBlock2_UP_SM1;
        outC->_L3_else_IfBlock2_UP_SM1 = GREEN;
        _99_RightSquareFillColor_partial = outC->_L3_else_IfBlock2_UP_SM1;
        _100_LeftSquareFillColor_partial = outC->_L3_else_IfBlock2_UP_SM1;
        _101_NoseSquareFillColor_partial = outC->_L3_else_IfBlock2_UP_SM1;
        outC->_L2_else_IfBlock2_UP_SM1 = GREEN;
        _102_RightSquareBorderColor_partial = outC->_L2_else_IfBlock2_UP_SM1;
        _103_LeftSquareBorderColor_partial = outC->_L2_else_IfBlock2_UP_SM1;
        _104_NoseSquareBorderColor_partial = outC->_L2_else_IfBlock2_UP_SM1;
        kcg_copy_T_String(&outC->_L1_else_IfBlock2_UP_SM1, (T_String *) &LG_DOWN_TEXT);
        kcg_copy_T_String(
          &_93_RightTextString_partial,
          &outC->_L1_else_IfBlock2_UP_SM1);
        kcg_copy_T_String(&_94_LeftTextString_partial, &outC->_L1_else_IfBlock2_UP_SM1);
        kcg_copy_T_String(&_95_NoseTextString_partial, &outC->_L1_else_IfBlock2_UP_SM1);
        _76_NoseSquareBorderColor_partial = _104_NoseSquareBorderColor_partial;
        _77_LeftSquareBorderColor_partial = _103_LeftSquareBorderColor_partial;
        _78_RightSquareBorderColor_partial = _102_RightSquareBorderColor_partial;
        _79_NoseSquareFillColor_partial = _101_NoseSquareFillColor_partial;
        _80_LeftSquareFillColor_partial = _100_LeftSquareFillColor_partial;
        _81_RightSquareFillColor_partial = _99_RightSquareFillColor_partial;
        _82_NoseTextColorIndex_partial = _98_NoseTextColorIndex_partial;
        _83_LeftTextColorIndex_partial = _97_LeftTextColorIndex_partial;
        _84_RightTextColorIndex_partial = _96_RightTextColorIndex_partial;
        kcg_copy_T_String(&_85_NoseTextString_partial, &_95_NoseTextString_partial);
        kcg_copy_T_String(&_86_LeftTextString_partial, &_94_LeftTextString_partial);
        kcg_copy_T_String(&_87_RightTextString_partial, &_93_RightTextString_partial);
      }
      outC->_L1_UP_SM1 = kcg_false;
      _89_Tr2Up_partial = outC->_L1_UP_SM1;
      _88_Tr2Dn_partial = outC->_L1_UP_SM1;
      break;
    case SSM_st_TRANSITION_SM1 :
      outC->TRANSITION_weakb_clock_SM1 = outC->SM1_fired_strong !=
        SSM_TR_no_trans_SM1;
      outC->_L5_TRANSITION_SM1 = kcg_lit_int32(10);
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_UP_SM1 :
      _121_SM1_reset_act_partial = tr_1_guard_UP_SM1;
      outC->SM1_reset_act = _121_SM1_reset_act_partial;
      break;
    case SSM_st_TRANSITION_SM1 :
      _118_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _118_SM1_reset_act_partial;
      break;
    case SSM_st_DOWN_SM1 :
      SM1_reset_act_partial = tr_1_guard_DOWN_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_UP_SM1 :
      outC->NoseSquareBorderColor = _76_NoseSquareBorderColor_partial;
      outC->LeftSquareBorderColor = _77_LeftSquareBorderColor_partial;
      outC->RightSquareBorderColor = _78_RightSquareBorderColor_partial;
      outC->NoseSquareFillColor = _79_NoseSquareFillColor_partial;
      outC->LeftSquareFillColor = _80_LeftSquareFillColor_partial;
      outC->RightSquareFillColor = _81_RightSquareFillColor_partial;
      outC->NoseTextColorIndex = _82_NoseTextColorIndex_partial;
      outC->LeftTextColorIndex = _83_LeftTextColorIndex_partial;
      outC->RightTextColorIndex = _84_RightTextColorIndex_partial;
      kcg_copy_T_String(&outC->NoseTextString, &_85_NoseTextString_partial);
      kcg_copy_T_String(&outC->LeftTextString, &_86_LeftTextString_partial);
      kcg_copy_T_String(&outC->RightTextString, &_87_RightTextString_partial);
      outC->Tr2Dn = _88_Tr2Dn_partial;
      outC->Tr2Up = _89_Tr2Up_partial;
      outC->SM1_state_nxt = _90_SM1_state_nxt_partial;
      break;
    case SSM_st_TRANSITION_SM1 :
      if (outC->SM1_reset_act) {
        outC->init1 = kcg_true;
      }
      /* SM1:TRANSITION:_L1= */
      if (outC->init1) {
        outC->_L1_TRANSITION_SM1 = kcg_lit_int32(0);
      }
      else {
        outC->_L1_TRANSITION_SM1 = outC->_L2_TRANSITION_SM1;
      }
      outC->_L4_TRANSITION_SM1 = kcg_lit_int32(1);
      outC->_L2_TRANSITION_SM1 = outC->_L1_TRANSITION_SM1 + outC->_L4_TRANSITION_SM1;
      outC->_L3_TRANSITION_SM1 = outC->_L2_TRANSITION_SM1 >= outC->_L5_TRANSITION_SM1;
      outC->ResetDelay_TRANSITION_SM1 = outC->_L3_TRANSITION_SM1;
      outC->IfBlock1_clock_TRANSITION_SM1 = outC->ResetDelay_TRANSITION_SM1;
      /* SM1:TRANSITION:IfBlock1: */
      if (outC->IfBlock1_clock_TRANSITION_SM1) {
        outC->_L1_then_IfBlock1_TRANSITION_SM1 = outC->LG_Up;
        outC->_L2_then_IfBlock1_TRANSITION_SM1 =
          !outC->_L1_then_IfBlock1_TRANSITION_SM1;
        _45_Tr2Dn_partial = outC->_L2_then_IfBlock1_TRANSITION_SM1;
        _37_Tr2Dn_partial = _45_Tr2Dn_partial;
      }
      else {
        outC->_L1_else_IfBlock1_TRANSITION_SM1 = kcg_false;
        _43_Tr2Dn_partial = outC->_L1_else_IfBlock1_TRANSITION_SM1;
        _37_Tr2Dn_partial = _43_Tr2Dn_partial;
      }
      if (outC->TRANSITION_weakb_clock_SM1) {
      }
      else {
        tr_2_guard_TRANSITION_SM1 = _37_Tr2Dn_partial;
      }
      /* SM1:TRANSITION:IfBlock1: */
      if (outC->IfBlock1_clock_TRANSITION_SM1) {
        _44_Tr2Up_partial = outC->_L1_then_IfBlock1_TRANSITION_SM1;
        _38_Tr2Up_partial = _44_Tr2Up_partial;
      }
      else {
        _42_Tr2Up_partial = outC->_L1_else_IfBlock1_TRANSITION_SM1;
        _38_Tr2Up_partial = _42_Tr2Up_partial;
      }
      /* SM1:TRANSITION: */
      if (outC->TRANSITION_weakb_clock_SM1) {
        _73_SM1_fired_partial = outC->SM1_fired_strong;
        _74_SM1_reset_nxt_partial = kcg_false;
        _75_SM1_state_nxt_partial = SSM_st_TRANSITION_SM1;
        _39_SM1_state_nxt_partial = _75_SM1_state_nxt_partial;
        _40_SM1_reset_nxt_partial = _74_SM1_reset_nxt_partial;
        _41_SM1_fired_partial = _73_SM1_fired_partial;
      }
      else {
        tr_1_guard_TRANSITION_SM1 = _38_Tr2Up_partial;
        if (tr_1_guard_TRANSITION_SM1) {
          _70_SM1_fired_partial = SSM_TR_TRANSITION_UP_1_TRANSITION_SM1;
        }
        else if (tr_2_guard_TRANSITION_SM1) {
          _70_SM1_fired_partial = SSM_TR_TRANSITION_DOWN_2_TRANSITION_SM1;
        }
        else {
          _70_SM1_fired_partial = SSM_TR_no_trans_SM1;
        }
        if (tr_1_guard_TRANSITION_SM1) {
          _71_SM1_reset_nxt_partial = kcg_true;
        }
        else {
          _71_SM1_reset_nxt_partial = tr_2_guard_TRANSITION_SM1;
        }
        if (tr_1_guard_TRANSITION_SM1) {
          _72_SM1_state_nxt_partial = SSM_st_UP_SM1;
        }
        else if (tr_2_guard_TRANSITION_SM1) {
          _72_SM1_state_nxt_partial = SSM_st_DOWN_SM1;
        }
        else {
          _72_SM1_state_nxt_partial = SSM_st_TRANSITION_SM1;
        }
        _39_SM1_state_nxt_partial = _72_SM1_state_nxt_partial;
        _40_SM1_reset_nxt_partial = _71_SM1_reset_nxt_partial;
        _41_SM1_fired_partial = _70_SM1_fired_partial;
      }
      outC->IfBlock2_clock_TRANSITION_SM1 = outC->LG_Fail;
      /* SM1:TRANSITION:IfBlock2: */
      if (outC->IfBlock2_clock_TRANSITION_SM1) {
        outC->_L4_then_IfBlock2_TRANSITION_SM1 = WHITE;
        _61_RightTextColorIndex_partial = outC->_L4_then_IfBlock2_TRANSITION_SM1;
        _62_LeftTextColorIndex_partial = outC->_L4_then_IfBlock2_TRANSITION_SM1;
        _63_NoseTextColorIndex_partial = outC->_L4_then_IfBlock2_TRANSITION_SM1;
        outC->_L3_then_IfBlock2_TRANSITION_SM1 = AMBAR;
        _64_RightSquareFillColor_partial = outC->_L3_then_IfBlock2_TRANSITION_SM1;
        _65_LeftSquareFillColor_partial = outC->_L3_then_IfBlock2_TRANSITION_SM1;
        _66_NoseSquareFillColor_partial = outC->_L3_then_IfBlock2_TRANSITION_SM1;
        outC->_L2_then_IfBlock2_TRANSITION_SM1 = AMBAR;
        _67_RightSquareBorderColor_partial = outC->_L2_then_IfBlock2_TRANSITION_SM1;
        _68_LeftSquareBorderColor_partial = outC->_L2_then_IfBlock2_TRANSITION_SM1;
        _69_NoseSquareBorderColor_partial = outC->_L2_then_IfBlock2_TRANSITION_SM1;
        kcg_copy_T_String(
          &outC->_L1_then_IfBlock2_TRANSITION_SM1,
          (T_String *) &LG_BTN_EMPTY_TEXT);
        kcg_copy_T_String(
          &_58_RightTextString_partial,
          &outC->_L1_then_IfBlock2_TRANSITION_SM1);
        kcg_copy_T_String(
          &_59_LeftTextString_partial,
          &outC->_L1_then_IfBlock2_TRANSITION_SM1);
        kcg_copy_T_String(
          &_60_NoseTextString_partial,
          &outC->_L1_then_IfBlock2_TRANSITION_SM1);
        _25_NoseSquareBorderColor_partial = _69_NoseSquareBorderColor_partial;
        _26_LeftSquareBorderColor_partial = _68_LeftSquareBorderColor_partial;
        _27_RightSquareBorderColor_partial = _67_RightSquareBorderColor_partial;
        _28_NoseSquareFillColor_partial = _66_NoseSquareFillColor_partial;
        _29_LeftSquareFillColor_partial = _65_LeftSquareFillColor_partial;
        _30_RightSquareFillColor_partial = _64_RightSquareFillColor_partial;
        _31_NoseTextColorIndex_partial = _63_NoseTextColorIndex_partial;
        _32_LeftTextColorIndex_partial = _62_LeftTextColorIndex_partial;
        _33_RightTextColorIndex_partial = _61_RightTextColorIndex_partial;
        kcg_copy_T_String(&_34_NoseTextString_partial, &_60_NoseTextString_partial);
        kcg_copy_T_String(&_35_LeftTextString_partial, &_59_LeftTextString_partial);
        kcg_copy_T_String(&_36_RightTextString_partial, &_58_RightTextString_partial);
      }
      else {
        outC->_L4_else_IfBlock2_TRANSITION_SM1 = WHITE;
        _49_RightTextColorIndex_partial = outC->_L4_else_IfBlock2_TRANSITION_SM1;
        _50_LeftTextColorIndex_partial = outC->_L4_else_IfBlock2_TRANSITION_SM1;
        _51_NoseTextColorIndex_partial = outC->_L4_else_IfBlock2_TRANSITION_SM1;
        outC->_L3_else_IfBlock2_TRANSITION_SM1 = AMBAR;
        _52_RightSquareFillColor_partial = outC->_L3_else_IfBlock2_TRANSITION_SM1;
        _53_LeftSquareFillColor_partial = outC->_L3_else_IfBlock2_TRANSITION_SM1;
        _54_NoseSquareFillColor_partial = outC->_L3_else_IfBlock2_TRANSITION_SM1;
        outC->_L2_else_IfBlock2_TRANSITION_SM1 = AMBAR;
        _55_RightSquareBorderColor_partial = outC->_L2_else_IfBlock2_TRANSITION_SM1;
        _56_LeftSquareBorderColor_partial = outC->_L2_else_IfBlock2_TRANSITION_SM1;
        _57_NoseSquareBorderColor_partial = outC->_L2_else_IfBlock2_TRANSITION_SM1;
        kcg_copy_T_String(
          &outC->_L1_else_IfBlock2_TRANSITION_SM1,
          (T_String *) &LG_BTN_EMPTY_TEXT);
        kcg_copy_T_String(
          &_46_RightTextString_partial,
          &outC->_L1_else_IfBlock2_TRANSITION_SM1);
        kcg_copy_T_String(
          &_47_LeftTextString_partial,
          &outC->_L1_else_IfBlock2_TRANSITION_SM1);
        kcg_copy_T_String(
          &_48_NoseTextString_partial,
          &outC->_L1_else_IfBlock2_TRANSITION_SM1);
        _25_NoseSquareBorderColor_partial = _57_NoseSquareBorderColor_partial;
        _26_LeftSquareBorderColor_partial = _56_LeftSquareBorderColor_partial;
        _27_RightSquareBorderColor_partial = _55_RightSquareBorderColor_partial;
        _28_NoseSquareFillColor_partial = _54_NoseSquareFillColor_partial;
        _29_LeftSquareFillColor_partial = _53_LeftSquareFillColor_partial;
        _30_RightSquareFillColor_partial = _52_RightSquareFillColor_partial;
        _31_NoseTextColorIndex_partial = _51_NoseTextColorIndex_partial;
        _32_LeftTextColorIndex_partial = _50_LeftTextColorIndex_partial;
        _33_RightTextColorIndex_partial = _49_RightTextColorIndex_partial;
        kcg_copy_T_String(&_34_NoseTextString_partial, &_48_NoseTextString_partial);
        kcg_copy_T_String(&_35_LeftTextString_partial, &_47_LeftTextString_partial);
        kcg_copy_T_String(&_36_RightTextString_partial, &_46_RightTextString_partial);
      }
      outC->NoseSquareBorderColor = _25_NoseSquareBorderColor_partial;
      outC->LeftSquareBorderColor = _26_LeftSquareBorderColor_partial;
      outC->RightSquareBorderColor = _27_RightSquareBorderColor_partial;
      outC->NoseSquareFillColor = _28_NoseSquareFillColor_partial;
      outC->LeftSquareFillColor = _29_LeftSquareFillColor_partial;
      outC->RightSquareFillColor = _30_RightSquareFillColor_partial;
      outC->NoseTextColorIndex = _31_NoseTextColorIndex_partial;
      outC->LeftTextColorIndex = _32_LeftTextColorIndex_partial;
      outC->RightTextColorIndex = _33_RightTextColorIndex_partial;
      kcg_copy_T_String(&outC->NoseTextString, &_34_NoseTextString_partial);
      kcg_copy_T_String(&outC->LeftTextString, &_35_LeftTextString_partial);
      kcg_copy_T_String(&outC->RightTextString, &_36_RightTextString_partial);
      outC->Tr2Dn = _37_Tr2Dn_partial;
      outC->Tr2Up = _38_Tr2Up_partial;
      outC->SM1_state_nxt = _39_SM1_state_nxt_partial;
      break;
    case SSM_st_DOWN_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_DOWN_SM1;
      outC->IfBlock2_clock_DOWN_SM1 = outC->LG_Fail;
      /* SM1:DOWN:IfBlock2: */
      if (outC->IfBlock2_clock_DOWN_SM1) {
        outC->_L4_then_IfBlock2_DOWN_SM1 = WHITE;
        _16_RightTextColorIndex_partial = outC->_L4_then_IfBlock2_DOWN_SM1;
        _17_LeftTextColorIndex_partial = outC->_L4_then_IfBlock2_DOWN_SM1;
        _18_NoseTextColorIndex_partial = outC->_L4_then_IfBlock2_DOWN_SM1;
        outC->_L3_then_IfBlock2_DOWN_SM1 = RED;
        _19_RightSquareFillColor_partial = outC->_L3_then_IfBlock2_DOWN_SM1;
        _20_LeftSquareFillColor_partial = outC->_L3_then_IfBlock2_DOWN_SM1;
        _21_NoseSquareFillColor_partial = outC->_L3_then_IfBlock2_DOWN_SM1;
        outC->_L2_then_IfBlock2_DOWN_SM1 = RED;
        _22_RightSquareBorderColor_partial = outC->_L2_then_IfBlock2_DOWN_SM1;
        _23_LeftSquareBorderColor_partial = outC->_L2_then_IfBlock2_DOWN_SM1;
        _24_NoseSquareBorderColor_partial = outC->_L2_then_IfBlock2_DOWN_SM1;
        kcg_copy_T_String(&outC->_L1_then_IfBlock2_DOWN_SM1, (T_String *) &LG_UP_TEXT);
        kcg_copy_T_String(
          &_13_RightTextString_partial,
          &outC->_L1_then_IfBlock2_DOWN_SM1);
        kcg_copy_T_String(
          &_14_LeftTextString_partial,
          &outC->_L1_then_IfBlock2_DOWN_SM1);
        kcg_copy_T_String(
          &_15_NoseTextString_partial,
          &outC->_L1_then_IfBlock2_DOWN_SM1);
        NoseSquareBorderColor_partial = _24_NoseSquareBorderColor_partial;
        LeftSquareBorderColor_partial = _23_LeftSquareBorderColor_partial;
        RightSquareBorderColor_partial = _22_RightSquareBorderColor_partial;
        NoseSquareFillColor_partial = _21_NoseSquareFillColor_partial;
        LeftSquareFillColor_partial = _20_LeftSquareFillColor_partial;
        RightSquareFillColor_partial = _19_RightSquareFillColor_partial;
        NoseTextColorIndex_partial = _18_NoseTextColorIndex_partial;
        LeftTextColorIndex_partial = _17_LeftTextColorIndex_partial;
        RightTextColorIndex_partial = _16_RightTextColorIndex_partial;
        kcg_copy_T_String(&NoseTextString_partial, &_15_NoseTextString_partial);
        kcg_copy_T_String(&LeftTextString_partial, &_14_LeftTextString_partial);
        kcg_copy_T_String(&RightTextString_partial, &_13_RightTextString_partial);
      }
      else {
        outC->_L4_else_IfBlock2_DOWN_SM1 = WHITE;
        _4_RightTextColorIndex_partial = outC->_L4_else_IfBlock2_DOWN_SM1;
        _5_LeftTextColorIndex_partial = outC->_L4_else_IfBlock2_DOWN_SM1;
        _6_NoseTextColorIndex_partial = outC->_L4_else_IfBlock2_DOWN_SM1;
        outC->_L3_else_IfBlock2_DOWN_SM1 = GREEN;
        _7_RightSquareFillColor_partial = outC->_L3_else_IfBlock2_DOWN_SM1;
        _8_LeftSquareFillColor_partial = outC->_L3_else_IfBlock2_DOWN_SM1;
        _9_NoseSquareFillColor_partial = outC->_L3_else_IfBlock2_DOWN_SM1;
        outC->_L2_else_IfBlock2_DOWN_SM1 = GREEN;
        _10_RightSquareBorderColor_partial = outC->_L2_else_IfBlock2_DOWN_SM1;
        _11_LeftSquareBorderColor_partial = outC->_L2_else_IfBlock2_DOWN_SM1;
        _12_NoseSquareBorderColor_partial = outC->_L2_else_IfBlock2_DOWN_SM1;
        kcg_copy_T_String(&outC->_L1_else_IfBlock2_DOWN_SM1, (T_String *) &LG_UP_TEXT);
        kcg_copy_T_String(
          &_1_RightTextString_partial,
          &outC->_L1_else_IfBlock2_DOWN_SM1);
        kcg_copy_T_String(
          &_2_LeftTextString_partial,
          &outC->_L1_else_IfBlock2_DOWN_SM1);
        kcg_copy_T_String(
          &_3_NoseTextString_partial,
          &outC->_L1_else_IfBlock2_DOWN_SM1);
        NoseSquareBorderColor_partial = _12_NoseSquareBorderColor_partial;
        LeftSquareBorderColor_partial = _11_LeftSquareBorderColor_partial;
        RightSquareBorderColor_partial = _10_RightSquareBorderColor_partial;
        NoseSquareFillColor_partial = _9_NoseSquareFillColor_partial;
        LeftSquareFillColor_partial = _8_LeftSquareFillColor_partial;
        RightSquareFillColor_partial = _7_RightSquareFillColor_partial;
        NoseTextColorIndex_partial = _6_NoseTextColorIndex_partial;
        LeftTextColorIndex_partial = _5_LeftTextColorIndex_partial;
        RightTextColorIndex_partial = _4_RightTextColorIndex_partial;
        kcg_copy_T_String(&NoseTextString_partial, &_3_NoseTextString_partial);
        kcg_copy_T_String(&LeftTextString_partial, &_2_LeftTextString_partial);
        kcg_copy_T_String(&RightTextString_partial, &_1_RightTextString_partial);
      }
      outC->_L1_DOWN_SM1 = kcg_false;
      Tr2Up_partial = outC->_L1_DOWN_SM1;
      Tr2Dn_partial = outC->_L1_DOWN_SM1;
      outC->NoseSquareBorderColor = NoseSquareBorderColor_partial;
      outC->LeftSquareBorderColor = LeftSquareBorderColor_partial;
      outC->RightSquareBorderColor = RightSquareBorderColor_partial;
      outC->NoseSquareFillColor = NoseSquareFillColor_partial;
      outC->LeftSquareFillColor = LeftSquareFillColor_partial;
      outC->RightSquareFillColor = RightSquareFillColor_partial;
      outC->NoseTextColorIndex = NoseTextColorIndex_partial;
      outC->LeftTextColorIndex = LeftTextColorIndex_partial;
      outC->RightTextColorIndex = RightTextColorIndex_partial;
      kcg_copy_T_String(&outC->NoseTextString, &NoseTextString_partial);
      kcg_copy_T_String(&outC->LeftTextString, &LeftTextString_partial);
      kcg_copy_T_String(&outC->RightTextString, &RightTextString_partial);
      outC->Tr2Dn = Tr2Dn_partial;
      outC->Tr2Up = Tr2Up_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_UP_SM1 :
      outC->SM1_reset_nxt = _91_SM1_reset_nxt_partial;
      outC->SM1_fired = _92_SM1_fired_partial;
      break;
    case SSM_st_TRANSITION_SM1 :
      outC->SM1_reset_nxt = _40_SM1_reset_nxt_partial;
      outC->SM1_fired = _41_SM1_fired_partial;
      break;
    case SSM_st_DOWN_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L16 = kcg_true;
  outC->Emit2CDS = outC->_L16;
  /* _L15= */
  if (outC->init) {
    outC->_L15 = kcg_true;
  }
  else {
    outC->_L15 = outC->_L14;
  }
  outC->Layer1Visible = outC->_L15;
  outC->Layer1Active = outC->_L15;
  outC->_L14 = kcg_false;
  outC->_L11 = STR_SIZE;
  outC->StringSize = outC->_L11;
  kcg_copy_T_String(&outC->_L7, (T_String *) &LG_BTN_FAIL_TEXT);
  kcg_copy_T_String(&outC->_L6, (T_String *) &LG_BTN_NORM_TEXT);
  /* _L8= */
  if (outC->_L22) {
    kcg_copy_T_String(&outC->_L8, &outC->_L6);
  }
  else {
    kcg_copy_T_String(&outC->_L8, &outC->_L7);
  }
  kcg_copy_T_String(&outC->LG_FailBtnTextString, &outC->_L8);
  kcg_copy_T_String(&outC->_L4, (T_String *) &LG_UP_TEXT);
  kcg_copy_T_String(&outC->_L3, (T_String *) &LG_DOWN_TEXT);
  /* _L2= */
  if (outC->_L19) {
    kcg_copy_T_String(&outC->_L2, &outC->_L3);
  }
  else {
    kcg_copy_T_String(&outC->_L2, &outC->_L4);
  }
  kcg_copy_T_String(&outC->LG_UpBtnTextString, &outC->_L2);
  switch (outC->SM1_state_act) {
    case SSM_st_TRANSITION_SM1 :
      outC->init1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void LandingGear_init(outC_LandingGear *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;

  outC->_L22 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L11 = kcg_lit_uint16(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L8[idx] = ' ';
  }
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L7[idx1] = ' ';
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L6[idx2] = ' ';
  }
  outC->_L5 = kcg_true;
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L4[idx3] = ' ';
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L3[idx4] = ' ';
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L2[idx5] = ' ';
  }
  outC->_L1 = kcg_true;
  outC->Tr2Up = kcg_true;
  outC->Tr2Dn = kcg_true;
  outC->LG_Fail = kcg_true;
  outC->LG_Up = kcg_true;
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_DOWN_SM1;
  outC->SM1_state_sel = SSM_st_DOWN_SM1;
  outC->_L4_then_IfBlock2_UP_SM1 = kcg_lit_uint8(0);
  outC->_L3_then_IfBlock2_UP_SM1 = kcg_lit_uint8(0);
  outC->_L2_then_IfBlock2_UP_SM1 = kcg_lit_uint8(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L1_then_IfBlock2_UP_SM1[idx6] = ' ';
  }
  outC->_L4_else_IfBlock2_UP_SM1 = kcg_lit_uint8(0);
  outC->_L3_else_IfBlock2_UP_SM1 = kcg_lit_uint8(0);
  outC->_L2_else_IfBlock2_UP_SM1 = kcg_lit_uint8(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L1_else_IfBlock2_UP_SM1[idx7] = ' ';
  }
  outC->IfBlock2_clock_UP_SM1 = kcg_true;
  outC->_L1_UP_SM1 = kcg_true;
  outC->_L4_then_IfBlock2_TRANSITION_SM1 = kcg_lit_uint8(0);
  outC->_L3_then_IfBlock2_TRANSITION_SM1 = kcg_lit_uint8(0);
  outC->_L2_then_IfBlock2_TRANSITION_SM1 = kcg_lit_uint8(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L1_then_IfBlock2_TRANSITION_SM1[idx8] = ' ';
  }
  outC->_L4_else_IfBlock2_TRANSITION_SM1 = kcg_lit_uint8(0);
  outC->_L3_else_IfBlock2_TRANSITION_SM1 = kcg_lit_uint8(0);
  outC->_L2_else_IfBlock2_TRANSITION_SM1 = kcg_lit_uint8(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L1_else_IfBlock2_TRANSITION_SM1[idx9] = ' ';
  }
  outC->_L2_then_IfBlock1_TRANSITION_SM1 = kcg_true;
  outC->_L1_then_IfBlock1_TRANSITION_SM1 = kcg_true;
  outC->_L1_else_IfBlock1_TRANSITION_SM1 = kcg_true;
  outC->TRANSITION_weakb_clock_SM1 = kcg_true;
  outC->IfBlock2_clock_TRANSITION_SM1 = kcg_true;
  outC->IfBlock1_clock_TRANSITION_SM1 = kcg_true;
  outC->ResetDelay_TRANSITION_SM1 = kcg_true;
  outC->_L1_TRANSITION_SM1 = kcg_lit_int32(0);
  outC->_L3_TRANSITION_SM1 = kcg_true;
  outC->_L4_TRANSITION_SM1 = kcg_lit_int32(0);
  outC->_L5_TRANSITION_SM1 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock2_DOWN_SM1 = kcg_lit_uint8(0);
  outC->_L3_then_IfBlock2_DOWN_SM1 = kcg_lit_uint8(0);
  outC->_L2_then_IfBlock2_DOWN_SM1 = kcg_lit_uint8(0);
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L1_then_IfBlock2_DOWN_SM1[idx10] = ' ';
  }
  outC->_L4_else_IfBlock2_DOWN_SM1 = kcg_lit_uint8(0);
  outC->_L3_else_IfBlock2_DOWN_SM1 = kcg_lit_uint8(0);
  outC->_L2_else_IfBlock2_DOWN_SM1 = kcg_lit_uint8(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L1_else_IfBlock2_DOWN_SM1[idx11] = ' ';
  }
  outC->IfBlock2_clock_DOWN_SM1 = kcg_true;
  outC->_L1_DOWN_SM1 = kcg_true;
  outC->_L1_Switch_2 = kcg_true;
  outC->_L3_Switch_2 = kcg_true;
  outC->_L4_Switch_2 = kcg_true;
  outC->Input1_Switch_2 = kcg_true;
  outC->Output1_Switch_2 = kcg_true;
  outC->_L1_Switch_1 = kcg_true;
  outC->_L3_Switch_1 = kcg_true;
  outC->_L4_Switch_1 = kcg_true;
  outC->Input1_Switch_1 = kcg_true;
  outC->Output1_Switch_1 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L2_TRANSITION_SM1 = kcg_lit_int32(0);
  outC->_L2_Switch_2 = kcg_true;
  outC->_L2_Switch_1 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->Emit2CDS = kcg_true;
  outC->StringSize = kcg_lit_uint16(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->RightTextString[idx12] = ' ';
  }
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->LeftTextString[idx13] = ' ';
  }
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->NoseTextString[idx14] = ' ';
  }
  outC->RightTextColorIndex = kcg_lit_uint8(0);
  outC->LeftTextColorIndex = kcg_lit_uint8(0);
  outC->NoseTextColorIndex = kcg_lit_uint8(0);
  outC->RightSquareFillColor = kcg_lit_uint8(0);
  outC->LeftSquareFillColor = kcg_lit_uint8(0);
  outC->NoseSquareFillColor = kcg_lit_uint8(0);
  outC->RightSquareBorderColor = kcg_lit_uint8(0);
  outC->LeftSquareBorderColor = kcg_lit_uint8(0);
  outC->NoseSquareBorderColor = kcg_lit_uint8(0);
  outC->Layer1Visible = kcg_true;
  outC->Layer1Active = kcg_true;
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->LG_FailBtnTextString[idx15] = ' ';
  }
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->LG_UpBtnTextString[idx16] = ' ';
  }
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_DOWN_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LandingGear_reset(outC_LandingGear *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_DOWN_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: LandingGear/
  @1: (Switch#1)
  @2: (Switch#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** LandingGear.c
** Generation date: 2019-09-26T07:55:03
*************************************************************$ */

