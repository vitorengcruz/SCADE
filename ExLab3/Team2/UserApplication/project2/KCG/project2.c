/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab3/Team2/UserApplication/project2/KCG/config.txt
** Generation date: 2019-10-08T09:16:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "project2.h"

/* project2/ */
void project2(inC_project2 *inC, outC_project2 *outC)
{
  outC->EmitToCDS = kcg_true;
  /* @1/_L4= */
  if (inC->SignalFromTeam1) {
    outC->_L4_Toggle_1 = !outC->_L4_Toggle_1;
  }
  /* _L6= */
  if (outC->_L4_Toggle_1) {
    outC->SignalToLED = GREEN;
  }
  else {
    outC->SignalToLED = RED;
  }
  outC->ReqLayerActive = outC->_L2;
  outC->ReqLayerVisible = outC->_L2;
  outC->_L2 = kcg_false;
  outC->SignalToTeam1 = inC->SignalFromButton;
}

#ifndef KCG_USER_DEFINED_INIT
void project2_init(outC_project2 *outC)
{
  outC->_L4_Toggle_1 = kcg_false;
  outC->_L2 = kcg_true;
  outC->ReqLayerVisible = kcg_true;
  outC->ReqLayerActive = kcg_true;
  outC->SignalToTeam1 = kcg_true;
  outC->EmitToCDS = kcg_true;
  outC->SignalToLED = kcg_lit_uint8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void project2_reset(outC_project2 *outC)
{
  outC->_L4_Toggle_1 = kcg_false;
  outC->_L2 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: project2/
  @1: (Toggle#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** project2.c
** Generation date: 2019-10-08T09:16:58
*************************************************************$ */

