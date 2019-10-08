/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/KCG/config.txt
** Generation date: 2019-10-08T09:17:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "project1.h"

/* project1/ */
void project1(inC_project1 *inC, outC_project1 *outC)
{
  outC->EmitToCDS = kcg_true;
  /* @1/_L3= */
  if (inC->SignalFromTeam2) {
    outC->_L3_Toggle_1 = !outC->_L3_Toggle_1;
  }
  /* _L6= */
  if (outC->_L3_Toggle_1) {
    outC->SignalToLED = GREEN;
  }
  else {
    outC->SignalToLED = RED;
  }
  outC->ReqLayerActive = outC->_L1;
  outC->ReqLayerVisible = outC->_L1;
  outC->_L1 = kcg_false;
  outC->SignalToTeam2 = inC->SignalFromButton;
}

#ifndef KCG_USER_DEFINED_INIT
void project1_init(outC_project1 *outC)
{
  outC->_L3_Toggle_1 = kcg_false;
  outC->_L1 = kcg_true;
  outC->ReqLayerVisible = kcg_true;
  outC->ReqLayerActive = kcg_true;
  outC->SignalToTeam2 = kcg_true;
  outC->EmitToCDS = kcg_true;
  outC->SignalToLED = kcg_lit_uint8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void project1_reset(outC_project1 *outC)
{
  outC->_L3_Toggle_1 = kcg_false;
  outC->_L1 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: project1/
  @1: (Toggle#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** project1.c
** Generation date: 2019-10-08T09:17:07
*************************************************************$ */

