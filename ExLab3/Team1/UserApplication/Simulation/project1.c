/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Listex_2/Team1/UserApplication/Simulation/config.txt
** Generation date: 2016-08-23T00:14:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "project1.h"

#ifndef KCG_USER_DEFINED_INIT
void project1_init(outC_project1 *outC)
{
  outC->init = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L3 = kcg_true;
  outC->SignalToLED = 0;
  outC->EmitToCDS = kcg_true;
  outC->SignalToTeam2 = kcg_true;
  outC->ReqLayerActive = kcg_true;
  outC->ReqLayerVisible = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void project1_reset(outC_project1 *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* project1 */
void project1(inC_project1 *inC, outC_project1 *outC)
{
  /* 1_fby_1_init_1 */ if (outC->init) {
    outC->ReqLayerVisible = kcg_true;
    outC->_L5_1 = kcg_false;
  }
  else {
    outC->ReqLayerVisible = outC->_L5;
    outC->_L5_1 = outC->_L3;
  }
  /* 1 */ if (inC->SignalFromTeam2) {
    outC->_L3 = !outC->_L5_1;
  }
  else {
    outC->_L3 = outC->_L5_1;
  }
  /* 1 */ if (outC->_L3) {
    outC->SignalToLED = GREEN;
  }
  else {
    outC->SignalToLED = RED;
  }
  outC->_L5 = kcg_false;
  outC->EmitToCDS = kcg_true;
  outC->ReqLayerActive = outC->ReqLayerVisible;
  outC->SignalToTeam2 = inC->SignalFromButton;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** project1.c
** Generation date: 2016-08-23T00:14:48
*************************************************************$ */

