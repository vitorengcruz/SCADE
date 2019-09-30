/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab2/FuelManagement/KCG/config.txt
** Generation date: 2019-09-29T22:23:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Main.h"

/* Main/ */
void Main(inC_Main *inC, outC_Main *outC)
{
  outC->FuelColor.Emit = kcg_true;
  outC->TankFullVisible.Emit = kcg_true;
  outC->FuelLevel.Emit = kcg_true;
  outC->FuelVisible.Emit = kcg_true;
  outC->FuelTypeEnable.Emit = kcg_true;
  outC->FuelTypeEnable.Value = kcg_false;
  outC->LayerVisible = outC->_L1_ShowLayer_1;
  outC->_L1_ShowLayer_1 = kcg_false;
  /* @6/_L22=, @6/_L4= */
  if (inC->Refuel) {
    /* @6/_L11=, @6/_L20= */
    if (outC->_L4_SetFuelLevel_1 < kcg_lit_uint32(9000)) {
      outC->_L4_SetFuelLevel_1 = outC->_L4_SetFuelLevel_1 + FUEL_INCREMENT;
    }
    else {
      outC->_L4_SetFuelLevel_1 = kcg_lit_uint32(9900);
    }
  }
  else /* @6/_L24=, @6/_L2= */
  if (inC->EmptyTank) {
    outC->_L4_SetFuelLevel_1 = kcg_lit_uint32(0);
  }
  outC->TankFullVisible.Value = outC->_L4_SetFuelLevel_1 >= kcg_lit_uint32(9900);
  outC->FuelLevel.Value = outC->_L4_SetFuelLevel_1;
  outC->FuelVisible.Value = !(outC->_L4_SetFuelLevel_1 == kcg_lit_uint32(0));
  /* @5/_L2= */
  switch (inC->FuelType) {
    case kcg_lit_uint16(2) :
      outC->FuelColor.Value = ALCOHOL_COLOR;
      break;
    case kcg_lit_uint16(3) :
      outC->FuelColor.Value = DIESEL_COLOR;
      break;
    default :
      outC->FuelColor.Value = GASOLINE_COLOR;
      break;
  }
  kcg_copy_BoolMsg(&outC->RefuelEnable, &outC->FuelTypeEnable);
}

#ifndef KCG_USER_DEFINED_INIT
void Main_init(outC_Main *outC)
{
  outC->_L1_ShowLayer_1 = kcg_true;
  outC->LayerVisible = kcg_true;
  outC->FuelColor.Emit = kcg_true;
  outC->FuelColor.Value = kcg_lit_uint8(0);
  outC->TankFullVisible.Emit = kcg_true;
  outC->TankFullVisible.Value = kcg_true;
  outC->FuelTypeEnable.Emit = kcg_true;
  outC->FuelTypeEnable.Value = kcg_true;
  outC->RefuelEnable.Emit = kcg_true;
  outC->RefuelEnable.Value = kcg_true;
  outC->FuelLevel.Emit = kcg_true;
  outC->FuelLevel.Value = kcg_lit_uint32(0);
  outC->FuelVisible.Emit = kcg_true;
  outC->FuelVisible.Value = kcg_true;
  outC->_L4_SetFuelLevel_1 = kcg_lit_uint32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Main_reset(outC_Main *outC)
{
  outC->_L1_ShowLayer_1 = kcg_true;
  outC->_L4_SetFuelLevel_1 = kcg_lit_uint32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Main/
  @6: (SetFuelLevel#1)
  @5: (SetFuelColor#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.c
** Generation date: 2019-09-29T22:23:11
*************************************************************$ */

