/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/Simulation/config.txt
** Generation date: 2019-10-07T16:38:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "project2.h"

/* project2/ */
void project2(inC_project2 *inC, outC_project2 *outC)
{
  /* @1/_L2= */
  if (outC->init) {
    outC->_L2_Toggle_1 = kcg_false;
  }
  else {
    outC->_L2_Toggle_1 = outC->_L4_Toggle_1;
  }
  outC->_L3_Toggle_1 = !outC->_L2_Toggle_1;
  outC->_L4 = inC->SignalFromTeam1;
  outC->Input_Toggle_1 = outC->_L4;
  outC->_L1_Toggle_1 = outC->Input_Toggle_1;
  /* @1/_L4= */
  if (outC->_L1_Toggle_1) {
    outC->_L4_Toggle_1 = outC->_L3_Toggle_1;
  }
  else {
    outC->_L4_Toggle_1 = outC->_L2_Toggle_1;
  }
  outC->Output_Toggle_1 = outC->_L4_Toggle_1;
  outC->_L10 = kcg_true;
  outC->EmitToCDS = outC->_L10;
  outC->_L9 = inC->SignalFromButton;
  outC->SignalToTeam1 = outC->_L9;
  outC->_L8 = RED;
  outC->_L7 = GREEN;
  outC->_L5 = outC->Output_Toggle_1;
  /* _L6= */
  if (outC->_L5) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  outC->SignalToLED = outC->_L6;
  /* _L3= */
  if (outC->init) {
    outC->_L3 = kcg_true;
  }
  else {
    outC->_L3 = outC->_L2;
  }
  outC->ReqLayerActive = outC->_L3;
  outC->ReqLayerVisible = outC->_L3;
  outC->_L2 = kcg_false;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void project2_init(outC_project2 *outC)
{
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_uint8(0);
  outC->_L7 = kcg_lit_uint8(0);
  outC->_L6 = kcg_lit_uint8(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1_Toggle_1 = kcg_true;
  outC->_L2_Toggle_1 = kcg_true;
  outC->_L3_Toggle_1 = kcg_true;
  outC->Input_Toggle_1 = kcg_true;
  outC->Output_Toggle_1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L4_Toggle_1 = kcg_true;
  outC->init = kcg_true;
  outC->SignalToLED = kcg_lit_uint8(0);
  outC->EmitToCDS = kcg_true;
  outC->SignalToTeam1 = kcg_true;
  outC->ReqLayerActive = kcg_true;
  outC->ReqLayerVisible = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void project2_reset(outC_project2 *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: project2/
  @1: (Toggle#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** project2.c
** Generation date: 2019-10-07T16:38:44
*************************************************************$ */

