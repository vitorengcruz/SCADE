/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/KCG/config.txt
** Generation date: 2019-09-25T14:43:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LandingGear.h"

/* LandingGear/ */
void LandingGear(inC_LandingGear *inC, outC_LandingGear *outC)
{
  kcg_bool tmp;
  kcg_bool tmp1;
  /* @1/_L4/ */
  kcg_bool _L4_Switch_1;
  /* SM1:TRANSITION:IfBlock1:, SM1:TRANSITION:ResetDelay/, SM1:TRANSITION:_L3/ */
  kcg_bool IfBlock1_clock_TRANSITION_SM1;
  /* SM1:TRANSITION: */
  kcg_bool TRANSITION_weakb_clock_SM1;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act;
  /* SM1: */
  kcg_bool SM1_reset_act;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong;

  outC->Emit2CDS = kcg_true;
  _L4_Switch_1 = !outC->_L2_Switch_1;
  /* _L2= */
  if (outC->_L2_Switch_1) {
    kcg_copy_T_String(&outC->LG_UpBtnTextString, (T_String *) &LG_DOWN_TEXT);
  }
  else {
    kcg_copy_T_String(&outC->LG_UpBtnTextString, (T_String *) &LG_UP_TEXT);
  }
  /* SM1: */
  switch (outC->SM1_state_nxt) {
    case SSM_st_UP_SM1 :
      SM1_reset_act = _L4_Switch_1;
      if (_L4_Switch_1) {
        SM1_state_act = SSM_st_TRANSITION_SM1;
        SM1_fired_strong = SSM_TR_UP_TRANSITION_1_UP_SM1;
      }
      else {
        SM1_state_act = SSM_st_UP_SM1;
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      break;
    case SSM_st_TRANSITION_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_TRANSITION_SM1;
      SM1_fired_strong = SSM_TR_no_trans_SM1;
      break;
    case SSM_st_DOWN_SM1 :
      SM1_reset_act = outC->_L2_Switch_1;
      if (outC->_L2_Switch_1) {
        SM1_state_act = SSM_st_TRANSITION_SM1;
        SM1_fired_strong = SSM_TR_DOWN_TRANSITION_1_DOWN_SM1;
      }
      else {
        SM1_state_act = SSM_st_DOWN_SM1;
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_UP_SM1 :
      outC->SM1_state_nxt = SSM_st_UP_SM1;
      /* SM1:UP:IfBlock2: */
      if (outC->_L2_Switch_2) {
        outC->RightSquareFillColor = RED;
        outC->RightTextColorIndex = WHITE;
        kcg_copy_T_String(&outC->RightTextString, (T_String *) &LG_DOWN_TEXT);
      }
      else {
        outC->RightSquareFillColor = GREEN;
        outC->RightTextColorIndex = WHITE;
        kcg_copy_T_String(&outC->RightTextString, (T_String *) &LG_DOWN_TEXT);
      }
      break;
    case SSM_st_TRANSITION_SM1 :
      if (SM1_reset_act) {
        outC->init = kcg_true;
      }
      TRANSITION_weakb_clock_SM1 = SM1_fired_strong != SSM_TR_no_trans_SM1;
      /* SM1:TRANSITION:_L1= */
      if (outC->init) {
        outC->_L2_TRANSITION_SM1 = kcg_lit_int32(0) + kcg_lit_int32(1);
      }
      else {
        outC->_L2_TRANSITION_SM1 = outC->_L2_TRANSITION_SM1 + kcg_lit_int32(1);
      }
      IfBlock1_clock_TRANSITION_SM1 = outC->_L2_TRANSITION_SM1 >= kcg_lit_int32(10);
      /* SM1:TRANSITION: */
      if (TRANSITION_weakb_clock_SM1) {
        outC->SM1_state_nxt = SSM_st_TRANSITION_SM1;
      }
      else {
        /* SM1:TRANSITION:IfBlock1: */
        if (IfBlock1_clock_TRANSITION_SM1) {
          tmp = outC->_L2_Switch_1;
        }
        else {
          tmp = kcg_false;
        }
        if (tmp) {
          outC->SM1_state_nxt = SSM_st_UP_SM1;
        }
        else {
          /* SM1:TRANSITION:IfBlock1: */
          if (IfBlock1_clock_TRANSITION_SM1) {
            tmp1 = _L4_Switch_1;
          }
          else {
            tmp1 = kcg_false;
          }
          if (tmp1) {
            outC->SM1_state_nxt = SSM_st_DOWN_SM1;
          }
          else {
            outC->SM1_state_nxt = SSM_st_TRANSITION_SM1;
          }
        }
      }
      /* SM1:TRANSITION:IfBlock2: */
      if (outC->_L2_Switch_2) {
        outC->RightSquareFillColor = AMBAR;
        outC->RightTextColorIndex = WHITE;
        kcg_copy_T_String(&outC->RightTextString, (T_String *) &LG_BTN_EMPTY_TEXT);
      }
      else {
        outC->RightSquareFillColor = AMBAR;
        outC->RightTextColorIndex = WHITE;
        kcg_copy_T_String(&outC->RightTextString, (T_String *) &LG_BTN_EMPTY_TEXT);
      }
      outC->init = kcg_false;
      break;
    case SSM_st_DOWN_SM1 :
      outC->SM1_state_nxt = SSM_st_DOWN_SM1;
      /* SM1:DOWN:IfBlock2: */
      if (outC->_L2_Switch_2) {
        outC->RightSquareFillColor = RED;
        outC->RightTextColorIndex = WHITE;
        kcg_copy_T_String(&outC->RightTextString, (T_String *) &LG_UP_TEXT);
      }
      else {
        outC->RightSquareFillColor = GREEN;
        outC->RightTextColorIndex = WHITE;
        kcg_copy_T_String(&outC->RightTextString, (T_String *) &LG_UP_TEXT);
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @1/_L2= */
  if (inC->LG_UpBtn) {
    outC->_L2_Switch_1 = _L4_Switch_1;
  }
  /* _L8= */
  if (outC->_L2_Switch_2) {
    kcg_copy_T_String(&outC->LG_FailBtnTextString, (T_String *) &LG_BTN_NORM_TEXT);
  }
  else {
    kcg_copy_T_String(&outC->LG_FailBtnTextString, (T_String *) &LG_BTN_FAIL_TEXT);
  }
  /* @2/_L2= */
  if (inC->LG_FailBtn) {
    outC->_L2_Switch_2 = !outC->_L2_Switch_2;
  }
  outC->Layer1Visible = outC->_L14;
  outC->Layer1Active = outC->_L14;
  outC->_L14 = kcg_false;
  outC->NoseSquareBorderColor = outC->RightSquareFillColor;
  outC->LeftSquareBorderColor = outC->RightSquareFillColor;
  outC->RightSquareBorderColor = outC->RightSquareFillColor;
  outC->NoseSquareFillColor = outC->RightSquareFillColor;
  outC->LeftSquareFillColor = outC->RightSquareFillColor;
  outC->NoseTextColorIndex = outC->RightTextColorIndex;
  outC->LeftTextColorIndex = outC->RightTextColorIndex;
  kcg_copy_T_String(&outC->NoseTextString, &outC->RightTextString);
  kcg_copy_T_String(&outC->LeftTextString, &outC->RightTextString);
  outC->StringSize = STR_SIZE;
}

#ifndef KCG_USER_DEFINED_INIT
void LandingGear_init(outC_LandingGear *outC)
{
  kcg_size idx;

  outC->_L2_Switch_1 = kcg_false;
  outC->_L2_Switch_2 = kcg_false;
  outC->_L14 = kcg_true;
  outC->Layer1Active = kcg_true;
  outC->Layer1Visible = kcg_true;
  outC->Emit2CDS = kcg_true;
  outC->init = kcg_true;
  outC->_L2_TRANSITION_SM1 = kcg_lit_int32(0);
  outC->StringSize = kcg_lit_uint16(0);
  outC->RightTextColorIndex = kcg_lit_uint8(0);
  outC->LeftTextColorIndex = kcg_lit_uint8(0);
  outC->NoseTextColorIndex = kcg_lit_uint8(0);
  outC->RightSquareFillColor = kcg_lit_uint8(0);
  outC->LeftSquareFillColor = kcg_lit_uint8(0);
  outC->NoseSquareFillColor = kcg_lit_uint8(0);
  outC->RightSquareBorderColor = kcg_lit_uint8(0);
  outC->LeftSquareBorderColor = kcg_lit_uint8(0);
  outC->NoseSquareBorderColor = kcg_lit_uint8(0);
  for (idx = 0; idx < 5; idx++) {
    outC->RightTextString[idx] = ' ';
    outC->LeftTextString[idx] = ' ';
    outC->NoseTextString[idx] = ' ';
    outC->LG_FailBtnTextString[idx] = ' ';
    outC->LG_UpBtnTextString[idx] = ' ';
  }
  outC->SM1_state_nxt = SSM_st_DOWN_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LandingGear_reset(outC_LandingGear *outC)
{
  outC->_L2_Switch_1 = kcg_false;
  outC->_L2_Switch_2 = kcg_false;
  outC->_L14 = kcg_true;
  outC->init = kcg_true;
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
** Generation date: 2019-09-25T14:43:43
*************************************************************$ */

