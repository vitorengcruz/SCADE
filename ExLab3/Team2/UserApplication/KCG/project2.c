/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Listex_2/Team2/UserApplication/KCG/config.txt
** Generation date: 2016-08-24T02:14:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "project2.h"

#ifndef KCG_USER_DEFINED_INIT
void project2_init(outC_project2 *outC)
{
  outC->EmitToCDS = kcg_true;
  outC->SignalToTeam1 = kcg_true;
  outC->ReqLayerActive = kcg_true;
  outC->ReqLayerVisible = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L2 = kcg_true;
  outC->init = kcg_true;
  outC->SignalToLED = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void project2_reset(outC_project2 *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* project2 */
void project2(inC_project2 *inC, outC_project2 *outC)
{
  /* toggle::_L3 */ kcg_bool _L3_1;
  
  outC->EmitToCDS = kcg_true;
  /* 1_fby_1_init_1 */ if (outC->init) {
    outC->ReqLayerActive = kcg_true;
    outC->init = kcg_false;
    _L3_1 = kcg_false;
  }
  else {
    outC->ReqLayerActive = outC->_L2;
    _L3_1 = outC->_L9;
  }
  outC->_L2 = kcg_false;
  outC->ReqLayerVisible = outC->ReqLayerActive;
  outC->SignalToTeam1 = inC->SignalFromButton;
  /* 1 */ if (inC->SignalFromTeam1) {
    outC->_L9 = !_L3_1;
  }
  else {
    outC->_L9 = _L3_1;
  }
  /* 1 */ if (outC->_L9) {
    outC->SignalToLED = GREEN;
  }
  else {
    outC->SignalToLED = RED;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** project2.c
** Generation date: 2016-08-24T02:14:44
*************************************************************$ */

