/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab1/landing_gear/LandingGear/Simulation/config.txt
** Generation date: 2019-09-26T07:55:03
*************************************************************$ */
#ifndef _LandingGear_H_
#define _LandingGear_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* LG_UpBtn/ */ LG_UpBtn;
  kcg_bool /* LG_FailBtn/ */ LG_FailBtn;
} inC_LandingGear;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_String /* LG_UpBtnTextString/ */ LG_UpBtnTextString;
  T_String /* LG_FailBtnTextString/ */ LG_FailBtnTextString;
  kcg_bool /* Layer1Active/ */ Layer1Active;
  kcg_bool /* Layer1Visible/ */ Layer1Visible;
  kcg_uint8 /* NoseSquareBorderColor/ */ NoseSquareBorderColor;
  kcg_uint8 /* LeftSquareBorderColor/ */ LeftSquareBorderColor;
  kcg_uint8 /* RightSquareBorderColor/ */ RightSquareBorderColor;
  kcg_uint8 /* NoseSquareFillColor/ */ NoseSquareFillColor;
  kcg_uint8 /* LeftSquareFillColor/ */ LeftSquareFillColor;
  kcg_uint8 /* RightSquareFillColor/ */ RightSquareFillColor;
  kcg_uint8 /* NoseTextColorIndex/ */ NoseTextColorIndex;
  kcg_uint8 /* LeftTextColorIndex/ */ LeftTextColorIndex;
  kcg_uint8 /* RightTextColorIndex/ */ RightTextColorIndex;
  T_String /* NoseTextString/ */ NoseTextString;
  T_String /* LeftTextString/ */ LeftTextString;
  T_String /* RightTextString/ */ RightTextString;
  kcg_uint16 /* StringSize/ */ StringSize;
  kcg_bool /* Emit2CDS/ */ Emit2CDS;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool /* @1/_L2/ */ _L2_Switch_1;
  kcg_bool /* @2/_L2/ */ _L2_Switch_2;
  kcg_int32 /* SM1:TRANSITION:_L2/ */ _L2_TRANSITION_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_bool /* _L14/ */ _L14;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:DOWN:IfBlock2: */ IfBlock2_clock_DOWN_SM1;
  kcg_bool /* SM1:TRANSITION:IfBlock1: */ IfBlock1_clock_TRANSITION_SM1;
  kcg_bool /* SM1:TRANSITION:IfBlock2: */ IfBlock2_clock_TRANSITION_SM1;
  kcg_bool /* SM1:TRANSITION: */ TRANSITION_weakb_clock_SM1;
  kcg_bool /* SM1:UP:IfBlock2: */ IfBlock2_clock_UP_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/Output1/ */ Output1_Switch_1;
  kcg_bool /* @1/Input1/ */ Input1_Switch_1;
  kcg_bool /* @1/_L4/ */ _L4_Switch_1;
  kcg_bool /* @1/_L3/ */ _L3_Switch_1;
  kcg_bool /* @1/_L1/ */ _L1_Switch_1;
  kcg_bool /* @2/Output1/ */ Output1_Switch_2;
  kcg_bool /* @2/Input1/ */ Input1_Switch_2;
  kcg_bool /* @2/_L4/ */ _L4_Switch_2;
  kcg_bool /* @2/_L3/ */ _L3_Switch_2;
  kcg_bool /* @2/_L1/ */ _L1_Switch_2;
  kcg_bool /* SM1:DOWN:_L1/ */ _L1_DOWN_SM1;
  T_String /* SM1:DOWN:IfBlock2:else:_L1/ */ _L1_else_IfBlock2_DOWN_SM1;
  kcg_uint8 /* SM1:DOWN:IfBlock2:else:_L2/ */ _L2_else_IfBlock2_DOWN_SM1;
  kcg_uint8 /* SM1:DOWN:IfBlock2:else:_L3/ */ _L3_else_IfBlock2_DOWN_SM1;
  kcg_uint8 /* SM1:DOWN:IfBlock2:else:_L4/ */ _L4_else_IfBlock2_DOWN_SM1;
  T_String /* SM1:DOWN:IfBlock2:then:_L1/ */ _L1_then_IfBlock2_DOWN_SM1;
  kcg_uint8 /* SM1:DOWN:IfBlock2:then:_L2/ */ _L2_then_IfBlock2_DOWN_SM1;
  kcg_uint8 /* SM1:DOWN:IfBlock2:then:_L3/ */ _L3_then_IfBlock2_DOWN_SM1;
  kcg_uint8 /* SM1:DOWN:IfBlock2:then:_L4/ */ _L4_then_IfBlock2_DOWN_SM1;
  kcg_int32 /* SM1:TRANSITION:_L5/ */ _L5_TRANSITION_SM1;
  kcg_int32 /* SM1:TRANSITION:_L4/ */ _L4_TRANSITION_SM1;
  kcg_bool /* SM1:TRANSITION:_L3/ */ _L3_TRANSITION_SM1;
  kcg_int32 /* SM1:TRANSITION:_L1/ */ _L1_TRANSITION_SM1;
  kcg_bool /* SM1:TRANSITION:ResetDelay/ */ ResetDelay_TRANSITION_SM1;
  kcg_bool /* SM1:TRANSITION:IfBlock1:else:_L1/ */ _L1_else_IfBlock1_TRANSITION_SM1;
  kcg_bool /* SM1:TRANSITION:IfBlock1:then:_L1/ */ _L1_then_IfBlock1_TRANSITION_SM1;
  kcg_bool /* SM1:TRANSITION:IfBlock1:then:_L2/ */ _L2_then_IfBlock1_TRANSITION_SM1;
  T_String /* SM1:TRANSITION:IfBlock2:else:_L1/ */ _L1_else_IfBlock2_TRANSITION_SM1;
  kcg_uint8 /* SM1:TRANSITION:IfBlock2:else:_L2/ */ _L2_else_IfBlock2_TRANSITION_SM1;
  kcg_uint8 /* SM1:TRANSITION:IfBlock2:else:_L3/ */ _L3_else_IfBlock2_TRANSITION_SM1;
  kcg_uint8 /* SM1:TRANSITION:IfBlock2:else:_L4/ */ _L4_else_IfBlock2_TRANSITION_SM1;
  T_String /* SM1:TRANSITION:IfBlock2:then:_L1/ */ _L1_then_IfBlock2_TRANSITION_SM1;
  kcg_uint8 /* SM1:TRANSITION:IfBlock2:then:_L2/ */ _L2_then_IfBlock2_TRANSITION_SM1;
  kcg_uint8 /* SM1:TRANSITION:IfBlock2:then:_L3/ */ _L3_then_IfBlock2_TRANSITION_SM1;
  kcg_uint8 /* SM1:TRANSITION:IfBlock2:then:_L4/ */ _L4_then_IfBlock2_TRANSITION_SM1;
  kcg_bool /* SM1:UP:_L1/ */ _L1_UP_SM1;
  T_String /* SM1:UP:IfBlock2:else:_L1/ */ _L1_else_IfBlock2_UP_SM1;
  kcg_uint8 /* SM1:UP:IfBlock2:else:_L2/ */ _L2_else_IfBlock2_UP_SM1;
  kcg_uint8 /* SM1:UP:IfBlock2:else:_L3/ */ _L3_else_IfBlock2_UP_SM1;
  kcg_uint8 /* SM1:UP:IfBlock2:else:_L4/ */ _L4_else_IfBlock2_UP_SM1;
  T_String /* SM1:UP:IfBlock2:then:_L1/ */ _L1_then_IfBlock2_UP_SM1;
  kcg_uint8 /* SM1:UP:IfBlock2:then:_L2/ */ _L2_then_IfBlock2_UP_SM1;
  kcg_uint8 /* SM1:UP:IfBlock2:then:_L3/ */ _L3_then_IfBlock2_UP_SM1;
  kcg_uint8 /* SM1:UP:IfBlock2:then:_L4/ */ _L4_then_IfBlock2_UP_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* LG_Up/ */ LG_Up;
  kcg_bool /* LG_Fail/ */ LG_Fail;
  kcg_bool /* Tr2Dn/ */ Tr2Dn;
  kcg_bool /* Tr2Up/ */ Tr2Up;
  kcg_bool /* _L1/ */ _L1;
  T_String /* _L2/ */ _L2;
  T_String /* _L3/ */ _L3;
  T_String /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  T_String /* _L6/ */ _L6;
  T_String /* _L7/ */ _L7;
  T_String /* _L8/ */ _L8;
  kcg_uint16 /* _L11/ */ _L11;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L22/ */ _L22;
} outC_LandingGear;

/* ===========  node initialization and cycle functions  =========== */
/* LandingGear/ */
extern void LandingGear(inC_LandingGear *inC, outC_LandingGear *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LandingGear_reset(outC_LandingGear *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LandingGear_init(outC_LandingGear *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: LandingGear/
  @1: (Switch#1)
  @2: (Switch#2)
*/

#endif /* _LandingGear_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** LandingGear.h
** Generation date: 2019-09-26T07:55:03
*************************************************************$ */

