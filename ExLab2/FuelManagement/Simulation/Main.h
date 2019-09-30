/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab2/FuelManagement/Simulation/config.txt
** Generation date: 2019-09-29T23:26:56
*************************************************************$ */
#ifndef _Main_H_
#define _Main_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* TankStatus/ */ TankStatus;
  kcg_uint16 /* FuelType/ */ FuelType;
  kcg_bool /* Refuel/ */ Refuel;
  kcg_bool /* EmptyTank/ */ EmptyTank;
} inC_Main;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* LayerVisible/ */ LayerVisible;
  BoolMsg /* FuelVisible/ */ FuelVisible;
  intMsg /* FuelLevel/ */ FuelLevel;
  BoolMsg /* RefuelEnable/ */ RefuelEnable;
  BoolMsg /* FuelTypeEnable/ */ FuelTypeEnable;
  BoolMsg /* TankFullVisible/ */ TankFullVisible;
  intMsg2 /* FuelColor/ */ FuelColor;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* @1/_L1/ */ _L1_ShowLayer_1;
  kcg_uint32 /* @2/_L4/ */ _L4_SetFuelLevel_1;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/LayerVisible/ */ LayerVisible_ShowLayer_1;
  kcg_bool /* @1/_L2/ */ _L2_ShowLayer_1;
  kcg_uint32 /* @2/FuelLevelValue/ */ FuelLevelValue_SetFuelLevel_1;
  kcg_bool /* @2/Empty/ */ Empty_SetFuelLevel_1;
  kcg_bool /* @2/Refuel/ */ Refuel_SetFuelLevel_1;
  kcg_uint32 /* @2/_L27/ */ _L27_SetFuelLevel_1;
  kcg_uint32 /* @2/_L26/ */ _L26_SetFuelLevel_1;
  kcg_bool /* @2/_L25/ */ _L25_SetFuelLevel_1;
  kcg_uint32 /* @2/_L24/ */ _L24_SetFuelLevel_1;
  kcg_bool /* @2/_L23/ */ _L23_SetFuelLevel_1;
  kcg_uint32 /* @2/_L22/ */ _L22_SetFuelLevel_1;
  kcg_uint32 /* @2/_L21/ */ _L21_SetFuelLevel_1;
  kcg_uint32 /* @2/_L20/ */ _L20_SetFuelLevel_1;
  kcg_uint32 /* @2/_L19/ */ _L19_SetFuelLevel_1;
  kcg_uint32 /* @2/_L18/ */ _L18_SetFuelLevel_1;
  kcg_uint32 /* @2/_L17/ */ _L17_SetFuelLevel_1;
  kcg_uint32 /* @2/_L16/ */ _L16_SetFuelLevel_1;
  kcg_bool /* @2/_L15/ */ _L15_SetFuelLevel_1;
  kcg_uint32 /* @2/_L14/ */ _L14_SetFuelLevel_1;
  kcg_uint32 /* @2/_L12/ */ _L12_SetFuelLevel_1;
  kcg_uint32 /* @2/_L11/ */ _L11_SetFuelLevel_1;
  kcg_uint32 /* @2/_L10/ */ _L10_SetFuelLevel_1;
  kcg_uint32 /* @2/_L9/ */ _L9_SetFuelLevel_1;
  kcg_uint32 /* @2/_L8/ */ _L8_SetFuelLevel_1;
  kcg_bool /* @2/_L7/ */ _L7_SetFuelLevel_1;
  kcg_uint32 /* @2/_L6/ */ _L6_SetFuelLevel_1;
  kcg_bool /* @2/_L5/ */ _L5_SetFuelLevel_1;
  kcg_uint32 /* @2/_L3/ */ _L3_SetFuelLevel_1;
  kcg_uint32 /* @2/_L2/ */ _L2_SetFuelLevel_1;
  kcg_bool /* @2/_L1/ */ _L1_SetFuelLevel_1;
  kcg_uint32 /* @2/value/ */ value_SetFuelLevel_1;
  BoolMsg /* @3/FuelTypeEnable/ */ FuelTypeEnable_EnableWidgets_1;
  BoolMsg /* @3/RefuelEnable/ */ RefuelEnable_EnableWidgets_1;
  kcg_uint32 /* @3/FuelLevelValue/ */ FuelLevelValue_EnableWidgets_1;
  kcg_uint32 /* @3/FuelStatus/ */ FuelStatus_EnableWidgets_1;
  kcg_uint16 /* @3/FuelType/ */ FuelType_EnableWidgets_1;
  kcg_bool /* @3/_L22/ */ _L22_EnableWidgets_1;
  BoolMsg /* @3/_L21/ */ _L21_EnableWidgets_1;
  kcg_bool /* @3/_L19/ */ _L19_EnableWidgets_1;
  kcg_uint32 /* @3/_L18/ */ _L18_EnableWidgets_1;
  kcg_uint32 /* @3/_L17/ */ _L17_EnableWidgets_1;
  kcg_bool /* @3/_L16/ */ _L16_EnableWidgets_1;
  kcg_bool /* @3/_L15/ */ _L15_EnableWidgets_1;
  BoolMsg /* @3/_L14/ */ _L14_EnableWidgets_1;
  kcg_bool /* @3/_L13/ */ _L13_EnableWidgets_1;
  kcg_bool /* @3/_L12/ */ _L12_EnableWidgets_1;
  kcg_bool /* @3/_L11/ */ _L11_EnableWidgets_1;
  kcg_bool /* @3/_L10/ */ _L10_EnableWidgets_1;
  kcg_uint32 /* @3/_L9/ */ _L9_EnableWidgets_1;
  kcg_uint32 /* @3/_L8/ */ _L8_EnableWidgets_1;
  kcg_bool /* @3/_L7/ */ _L7_EnableWidgets_1;
  kcg_uint32 /* @3/_L6/ */ _L6_EnableWidgets_1;
  kcg_uint32 /* @3/_L5/ */ _L5_EnableWidgets_1;
  kcg_bool /* @3/_L4/ */ _L4_EnableWidgets_1;
  kcg_uint16 /* @3/_L3/ */ _L3_EnableWidgets_1;
  kcg_bool /* @3/_L2/ */ _L2_EnableWidgets_1;
  kcg_uint16 /* @3/_L1/ */ _L1_EnableWidgets_1;
  intMsg /* @4/FuelLevel/ */ FuelLevel_RepaintFuelLevel_1;
  BoolMsg /* @4/FuelVisible/ */ FuelVisible_RepaintFuelLevel_1;
  kcg_uint32 /* @4/Value/ */ Value_RepaintFuelLevel_1;
  kcg_bool /* @4/_L10/ */ _L10_RepaintFuelLevel_1;
  intMsg /* @4/_L9/ */ _L9_RepaintFuelLevel_1;
  kcg_bool /* @4/_L8/ */ _L8_RepaintFuelLevel_1;
  BoolMsg /* @4/_L7/ */ _L7_RepaintFuelLevel_1;
  kcg_bool /* @4/_L6/ */ _L6_RepaintFuelLevel_1;
  kcg_bool /* @4/_L5/ */ _L5_RepaintFuelLevel_1;
  kcg_bool /* @4/_L4/ */ _L4_RepaintFuelLevel_1;
  kcg_uint32 /* @4/_L3/ */ _L3_RepaintFuelLevel_1;
  kcg_bool /* @4/_L2/ */ _L2_RepaintFuelLevel_1;
  kcg_uint32 /* @4/_L1/ */ _L1_RepaintFuelLevel_1;
  BoolMsg /* @5/TankFullVisible/ */ TankFullVisible_SetTankFullVisible_1;
  kcg_uint32 /* @5/FuelLevelValue/ */ FuelLevelValue_SetTankFullVisible_1;
  kcg_bool /* @5/_L9/ */ _L9_SetTankFullVisible_1;
  BoolMsg /* @5/_L8/ */ _L8_SetTankFullVisible_1;
  kcg_bool /* @5/_L6/ */ _L6_SetTankFullVisible_1;
  kcg_bool /* @5/_L5/ */ _L5_SetTankFullVisible_1;
  kcg_bool /* @5/_L4/ */ _L4_SetTankFullVisible_1;
  kcg_uint32 /* @5/_L3/ */ _L3_SetTankFullVisible_1;
  kcg_bool /* @5/_L2/ */ _L2_SetTankFullVisible_1;
  kcg_uint32 /* @5/_L1/ */ _L1_SetTankFullVisible_1;
  intMsg2 /* @6/FuelColor/ */ FuelColor_SetFuelColor_1;
  kcg_uint16 /* @6/FuelType/ */ FuelType_SetFuelColor_1;
  kcg_bool /* @6/_L7/ */ _L7_SetFuelColor_1;
  intMsg2 /* @6/_L6/ */ _L6_SetFuelColor_1;
  kcg_uint8 /* @6/_L5/ */ _L5_SetFuelColor_1;
  kcg_uint8 /* @6/_L4/ */ _L4_SetFuelColor_1;
  kcg_uint8 /* @6/_L3/ */ _L3_SetFuelColor_1;
  kcg_uint8 /* @6/_L2/ */ _L2_SetFuelColor_1;
  kcg_uint16 /* @6/_L1/ */ _L1_SetFuelColor_1;
  kcg_uint32 /* SM1:TankClosed:_L1/ */ _L1_TankClosed_SM1;
  kcg_uint32 /* SM1:TankOpen:_L1/ */ _L1_TankOpen_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_uint32 /* tank_status/ */ tank_status;
  kcg_bool /* _L1/ */ _L1;
  kcg_uint32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  BoolMsg /* _L6/ */ _L6;
  BoolMsg /* _L5/ */ _L5;
  kcg_uint16 /* _L8/ */ _L8;
  kcg_uint32 /* _L9/ */ _L9;
  intMsg /* _L11/ */ _L11;
  BoolMsg /* _L10/ */ _L10;
  BoolMsg /* _L12/ */ _L12;
  intMsg2 /* _L13/ */ _L13;
  kcg_uint16 /* _L14/ */ _L14;
} outC_Main;

/* ===========  node initialization and cycle functions  =========== */
/* Main/ */
extern void Main(inC_Main *inC, outC_Main *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Main_reset(outC_Main *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Main_init(outC_Main *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Main/
  @1: (ShowLayer#1)
  @2: (SetFuelLevel#1)
  @3: (EnableWidgets#1)
  @4: (RepaintFuelLevel#1)
  @5: (SetTankFullVisible#1)
  @6: (SetFuelColor#1)
*/

#endif /* _Main_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.h
** Generation date: 2019-09-29T23:26:56
*************************************************************$ */

