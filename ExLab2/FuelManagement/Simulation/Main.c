/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Repositorio_ITA/SCADE/ExLab2/FuelManagement/Simulation/config.txt
** Generation date: 2019-09-29T23:26:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Main.h"

/* Main/ */
void Main(inC_Main *inC, outC_Main *outC)
{
  /* tank_status/ */
  kcg_uint32 tank_status_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* tank_status/ */
  kcg_uint32 _1_tank_status_partial;
  /* SM1: */
  SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _4_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:TankClosed:<1> */
  kcg_bool tr_1_guard_TankClosed_SM1;
  /* SM1: */
  SSM_ST_SM1 _5_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _7_SM1_fired_strong_partial;
  /* SM1:TankOpen:<1> */
  kcg_bool tr_1_guard_TankOpen_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  /* @1/_L2= */
  if (outC->init) {
    outC->_L2_ShowLayer_1 = kcg_true;
  }
  else {
    outC->_L2_ShowLayer_1 = outC->_L1_ShowLayer_1;
  }
  outC->LayerVisible_ShowLayer_1 = outC->_L2_ShowLayer_1;
  outC->_L1_ShowLayer_1 = kcg_false;
  /* @2/_L6= */
  if (outC->init) {
    outC->_L6_SetFuelLevel_1 = kcg_lit_uint32(0);
  }
  else {
    outC->_L6_SetFuelLevel_1 = outC->_L4_SetFuelLevel_1;
  }
  outC->value_SetFuelLevel_1 = outC->_L6_SetFuelLevel_1;
  outC->_L27_SetFuelLevel_1 = outC->value_SetFuelLevel_1;
  outC->_L26_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L4 = inC->EmptyTank;
  outC->Empty_SetFuelLevel_1 = outC->_L4;
  outC->_L25_SetFuelLevel_1 = outC->Empty_SetFuelLevel_1;
  /* @2/_L24= */
  if (outC->_L25_SetFuelLevel_1) {
    outC->_L24_SetFuelLevel_1 = outC->_L26_SetFuelLevel_1;
  }
  else {
    outC->_L24_SetFuelLevel_1 = outC->_L27_SetFuelLevel_1;
  }
  outC->_L21_SetFuelLevel_1 = MAX_FUEL_LEVEL - FUEL_LEVEL_OFFSET;
  outC->_L19_SetFuelLevel_1 = FUEL_INCREMENT;
  outC->_L18_SetFuelLevel_1 = outC->value_SetFuelLevel_1;
  outC->_L17_SetFuelLevel_1 = outC->_L18_SetFuelLevel_1 +
    outC->_L19_SetFuelLevel_1;
  outC->_L16_SetFuelLevel_1 = MAX_FUEL_LEVEL - FUEL_INCREMENT;
  outC->_L14_SetFuelLevel_1 = outC->value_SetFuelLevel_1;
  outC->_L15_SetFuelLevel_1 = outC->_L14_SetFuelLevel_1 <
    outC->_L16_SetFuelLevel_1;
  /* @2/_L20= */
  if (outC->_L15_SetFuelLevel_1) {
    outC->_L20_SetFuelLevel_1 = outC->_L17_SetFuelLevel_1;
  }
  else {
    outC->_L20_SetFuelLevel_1 = outC->_L21_SetFuelLevel_1;
  }
  outC->_L3 = inC->Refuel;
  outC->Refuel_SetFuelLevel_1 = outC->_L3;
  outC->_L23_SetFuelLevel_1 = outC->Refuel_SetFuelLevel_1;
  /* @2/_L22= */
  if (outC->_L23_SetFuelLevel_1) {
    outC->_L22_SetFuelLevel_1 = outC->_L20_SetFuelLevel_1;
  }
  else {
    outC->_L22_SetFuelLevel_1 = outC->_L24_SetFuelLevel_1;
  }
  outC->FuelLevelValue_SetFuelLevel_1 = outC->_L22_SetFuelLevel_1;
  outC->_L12_SetFuelLevel_1 = MAX_FUEL_LEVEL - FUEL_LEVEL_OFFSET;
  outC->_L10_SetFuelLevel_1 = FUEL_INCREMENT;
  outC->_L9_SetFuelLevel_1 = outC->_L6_SetFuelLevel_1 + outC->_L10_SetFuelLevel_1;
  outC->_L8_SetFuelLevel_1 = MAX_FUEL_LEVEL - FUEL_INCREMENT;
  outC->_L7_SetFuelLevel_1 = outC->_L6_SetFuelLevel_1 < outC->_L8_SetFuelLevel_1;
  /* @2/_L11= */
  if (outC->_L7_SetFuelLevel_1) {
    outC->_L11_SetFuelLevel_1 = outC->_L9_SetFuelLevel_1;
  }
  else {
    outC->_L11_SetFuelLevel_1 = outC->_L12_SetFuelLevel_1;
  }
  outC->_L5_SetFuelLevel_1 = outC->Refuel_SetFuelLevel_1;
  outC->_L3_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L1_SetFuelLevel_1 = outC->Empty_SetFuelLevel_1;
  /* @2/_L2= */
  if (outC->_L1_SetFuelLevel_1) {
    outC->_L2_SetFuelLevel_1 = outC->_L3_SetFuelLevel_1;
  }
  else {
    outC->_L2_SetFuelLevel_1 = outC->_L6_SetFuelLevel_1;
  }
  /* @2/_L4= */
  if (outC->_L5_SetFuelLevel_1) {
    outC->_L4_SetFuelLevel_1 = outC->_L11_SetFuelLevel_1;
  }
  else {
    outC->_L4_SetFuelLevel_1 = outC->_L2_SetFuelLevel_1;
  }
  outC->_L22_EnableWidgets_1 = kcg_true;
  outC->_L13_EnableWidgets_1 = A661_FALSE;
  outC->_L12_EnableWidgets_1 = A661_TRUE;
  outC->_L18_EnableWidgets_1 = kcg_lit_uint32(0);
  outC->_L2 = outC->FuelLevelValue_SetFuelLevel_1;
  outC->FuelLevelValue_EnableWidgets_1 = outC->_L2;
  outC->_L17_EnableWidgets_1 = outC->FuelLevelValue_EnableWidgets_1;
  outC->_L16_EnableWidgets_1 = outC->_L17_EnableWidgets_1 ==
    outC->_L18_EnableWidgets_1;
  /* @3/_L19= */
  if (outC->_L16_EnableWidgets_1) {
    outC->_L19_EnableWidgets_1 = outC->_L12_EnableWidgets_1;
  }
  else {
    outC->_L19_EnableWidgets_1 = outC->_L13_EnableWidgets_1;
  }
  outC->_L21_EnableWidgets_1.Emit = outC->_L22_EnableWidgets_1;
  outC->_L21_EnableWidgets_1.Value = outC->_L19_EnableWidgets_1;
  kcg_copy_BoolMsg(
    &outC->FuelTypeEnable_EnableWidgets_1,
    &outC->_L21_EnableWidgets_1);
  outC->_L15_EnableWidgets_1 = kcg_true;
  outC->_L9_EnableWidgets_1 = MAX_FUEL_LEVEL - FUEL_LEVEL_OFFSET;
  outC->_L8_EnableWidgets_1 = outC->FuelLevelValue_EnableWidgets_1;
  outC->_L7_EnableWidgets_1 = outC->_L8_EnableWidgets_1 <
    outC->_L9_EnableWidgets_1;
  outC->_L6_EnableWidgets_1 = OPEN_ID;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_TankOpen_SM1 :
      tr_1_guard_TankOpen_SM1 = inC->TankStatus;
      if (tr_1_guard_TankOpen_SM1) {
        _5_SM1_state_act_partial = SSM_st_TankClosed_SM1;
      }
      else {
        _5_SM1_state_act_partial = SSM_st_TankOpen_SM1;
      }
      outC->SM1_state_act = _5_SM1_state_act_partial;
      break;
    case SSM_st_TankClosed_SM1 :
      tr_1_guard_TankClosed_SM1 = inC->TankStatus;
      if (tr_1_guard_TankClosed_SM1) {
        SM1_state_act_partial = SSM_st_TankOpen_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_TankClosed_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_TankOpen_SM1 :
      outC->_L1_TankOpen_SM1 = OPEN_ID;
      _1_tank_status_partial = outC->_L1_TankOpen_SM1;
      outC->tank_status = _1_tank_status_partial;
      break;
    case SSM_st_TankClosed_SM1 :
      outC->_L1_TankClosed_SM1 = CLOSED_ID;
      tank_status_partial = outC->_L1_TankClosed_SM1;
      outC->tank_status = tank_status_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L9 = outC->tank_status;
  outC->FuelStatus_EnableWidgets_1 = outC->_L9;
  outC->_L5_EnableWidgets_1 = outC->FuelStatus_EnableWidgets_1;
  outC->_L4_EnableWidgets_1 = outC->_L5_EnableWidgets_1 ==
    outC->_L6_EnableWidgets_1;
  outC->_L3_EnableWidgets_1 = kcg_lit_uint16(1);
  outC->_L8 = inC->FuelType;
  outC->FuelType_EnableWidgets_1 = outC->_L8;
  outC->_L1_EnableWidgets_1 = outC->FuelType_EnableWidgets_1;
  outC->_L2_EnableWidgets_1 = outC->_L1_EnableWidgets_1 >
    outC->_L3_EnableWidgets_1;
  outC->_L10_EnableWidgets_1 = outC->_L2_EnableWidgets_1 &
    outC->_L4_EnableWidgets_1 & outC->_L7_EnableWidgets_1;
  /* @3/_L11= */
  if (outC->_L10_EnableWidgets_1) {
    outC->_L11_EnableWidgets_1 = outC->_L12_EnableWidgets_1;
  }
  else {
    outC->_L11_EnableWidgets_1 = outC->_L13_EnableWidgets_1;
  }
  outC->_L14_EnableWidgets_1.Emit = outC->_L15_EnableWidgets_1;
  outC->_L14_EnableWidgets_1.Value = outC->_L11_EnableWidgets_1;
  kcg_copy_BoolMsg(
    &outC->RefuelEnable_EnableWidgets_1,
    &outC->_L14_EnableWidgets_1);
  outC->_L10_RepaintFuelLevel_1 = kcg_true;
  outC->Value_RepaintFuelLevel_1 = outC->_L2;
  outC->_L1_RepaintFuelLevel_1 = outC->Value_RepaintFuelLevel_1;
  outC->_L9_RepaintFuelLevel_1.Emit = outC->_L10_RepaintFuelLevel_1;
  outC->_L9_RepaintFuelLevel_1.Value = outC->_L1_RepaintFuelLevel_1;
  kcg_copy_intMsg(
    &outC->FuelLevel_RepaintFuelLevel_1,
    &outC->_L9_RepaintFuelLevel_1);
  outC->_L8_RepaintFuelLevel_1 = kcg_true;
  outC->_L6_RepaintFuelLevel_1 = kcg_true;
  outC->_L5_RepaintFuelLevel_1 = kcg_false;
  outC->_L3_RepaintFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L2_RepaintFuelLevel_1 = outC->_L1_RepaintFuelLevel_1 ==
    outC->_L3_RepaintFuelLevel_1;
  /* @4/_L4= */
  if (outC->_L2_RepaintFuelLevel_1) {
    outC->_L4_RepaintFuelLevel_1 = outC->_L5_RepaintFuelLevel_1;
  }
  else {
    outC->_L4_RepaintFuelLevel_1 = outC->_L6_RepaintFuelLevel_1;
  }
  outC->_L7_RepaintFuelLevel_1.Emit = outC->_L8_RepaintFuelLevel_1;
  outC->_L7_RepaintFuelLevel_1.Value = outC->_L4_RepaintFuelLevel_1;
  kcg_copy_BoolMsg(
    &outC->FuelVisible_RepaintFuelLevel_1,
    &outC->_L7_RepaintFuelLevel_1);
  outC->_L9_SetTankFullVisible_1 = kcg_true;
  outC->_L6_SetTankFullVisible_1 = kcg_false;
  outC->_L5_SetTankFullVisible_1 = kcg_true;
  outC->_L3_SetTankFullVisible_1 = MAX_FUEL_LEVEL - FUEL_LEVEL_OFFSET;
  outC->FuelLevelValue_SetTankFullVisible_1 = outC->_L2;
  outC->_L1_SetTankFullVisible_1 = outC->FuelLevelValue_SetTankFullVisible_1;
  outC->_L2_SetTankFullVisible_1 = outC->_L1_SetTankFullVisible_1 >=
    outC->_L3_SetTankFullVisible_1;
  /* @5/_L4= */
  if (outC->_L2_SetTankFullVisible_1) {
    outC->_L4_SetTankFullVisible_1 = outC->_L5_SetTankFullVisible_1;
  }
  else {
    outC->_L4_SetTankFullVisible_1 = outC->_L6_SetTankFullVisible_1;
  }
  outC->_L8_SetTankFullVisible_1.Emit = outC->_L9_SetTankFullVisible_1;
  outC->_L8_SetTankFullVisible_1.Value = outC->_L4_SetTankFullVisible_1;
  kcg_copy_BoolMsg(
    &outC->TankFullVisible_SetTankFullVisible_1,
    &outC->_L8_SetTankFullVisible_1);
  outC->_L7_SetFuelColor_1 = kcg_true;
  outC->_L3_SetFuelColor_1 = ALCOHOL_COLOR;
  outC->_L4_SetFuelColor_1 = DIESEL_COLOR;
  outC->_L5_SetFuelColor_1 = GASOLINE_COLOR;
  outC->_L14 = inC->FuelType;
  outC->FuelType_SetFuelColor_1 = outC->_L14;
  outC->_L1_SetFuelColor_1 = outC->FuelType_SetFuelColor_1;
  /* @6/_L2= */
  switch (outC->_L1_SetFuelColor_1) {
    case kcg_lit_uint16(2) :
      outC->_L2_SetFuelColor_1 = outC->_L3_SetFuelColor_1;
      break;
    case kcg_lit_uint16(3) :
      outC->_L2_SetFuelColor_1 = outC->_L4_SetFuelColor_1;
      break;
    default :
      outC->_L2_SetFuelColor_1 = outC->_L5_SetFuelColor_1;
      break;
  }
  outC->_L6_SetFuelColor_1.Emit = outC->_L7_SetFuelColor_1;
  outC->_L6_SetFuelColor_1.Value = outC->_L2_SetFuelColor_1;
  kcg_copy_intMsg2(&outC->FuelColor_SetFuelColor_1, &outC->_L6_SetFuelColor_1);
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_TankOpen_SM1 :
      if (tr_1_guard_TankOpen_SM1) {
        _7_SM1_fired_strong_partial = SSM_TR_TankOpen_TankClosed_1_TankOpen_SM1;
      }
      else {
        _7_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _7_SM1_fired_strong_partial;
      break;
    case SSM_st_TankClosed_SM1 :
      if (tr_1_guard_TankClosed_SM1) {
        SM1_fired_strong_partial = SSM_TR_TankClosed_TankOpen_1_TankClosed_SM1;
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
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_TankOpen_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_TankOpen_SM1;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_TankClosed_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_TankClosed_SM1;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_TankOpen_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_TankClosed_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_TankOpen_SM1 :
      _6_SM1_reset_act_partial = tr_1_guard_TankOpen_SM1;
      break;
    case SSM_st_TankClosed_SM1 :
      SM1_reset_act_partial = tr_1_guard_TankClosed_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_TankOpen_SM1 :
      outC->SM1_reset_act = _6_SM1_reset_act_partial;
      break;
    case SSM_st_TankClosed_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_intMsg2(&outC->_L13, &outC->FuelColor_SetFuelColor_1);
  kcg_copy_intMsg2(&outC->FuelColor, &outC->_L13);
  kcg_copy_BoolMsg(&outC->_L12, &outC->TankFullVisible_SetTankFullVisible_1);
  kcg_copy_BoolMsg(&outC->TankFullVisible, &outC->_L12);
  kcg_copy_intMsg(&outC->_L11, &outC->FuelLevel_RepaintFuelLevel_1);
  kcg_copy_intMsg(&outC->FuelLevel, &outC->_L11);
  kcg_copy_BoolMsg(&outC->_L10, &outC->FuelVisible_RepaintFuelLevel_1);
  kcg_copy_BoolMsg(&outC->FuelVisible, &outC->_L10);
  kcg_copy_BoolMsg(&outC->_L6, &outC->FuelTypeEnable_EnableWidgets_1);
  kcg_copy_BoolMsg(&outC->FuelTypeEnable, &outC->_L6);
  kcg_copy_BoolMsg(&outC->_L5, &outC->RefuelEnable_EnableWidgets_1);
  kcg_copy_BoolMsg(&outC->RefuelEnable, &outC->_L5);
  outC->_L1 = outC->LayerVisible_ShowLayer_1;
  outC->LayerVisible = outC->_L1;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Main_init(outC_Main *outC)
{
  outC->_L14 = kcg_lit_uint16(0);
  outC->_L13.Emit = kcg_true;
  outC->_L13.Value = kcg_lit_uint8(0);
  outC->_L12.Emit = kcg_true;
  outC->_L12.Value = kcg_true;
  outC->_L10.Emit = kcg_true;
  outC->_L10.Value = kcg_true;
  outC->_L11.Emit = kcg_true;
  outC->_L11.Value = kcg_lit_uint32(0);
  outC->_L9 = kcg_lit_uint32(0);
  outC->_L8 = kcg_lit_uint16(0);
  outC->_L5.Emit = kcg_true;
  outC->_L5.Value = kcg_true;
  outC->_L6.Emit = kcg_true;
  outC->_L6.Value = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_uint32(0);
  outC->_L1 = kcg_true;
  outC->tank_status = kcg_lit_uint32(0);
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_TankClosed_SM1;
  outC->SM1_state_sel = SSM_st_TankClosed_SM1;
  outC->_L1_TankOpen_SM1 = kcg_lit_uint32(0);
  outC->_L1_TankClosed_SM1 = kcg_lit_uint32(0);
  outC->_L1_SetFuelColor_1 = kcg_lit_uint16(0);
  outC->_L2_SetFuelColor_1 = kcg_lit_uint8(0);
  outC->_L3_SetFuelColor_1 = kcg_lit_uint8(0);
  outC->_L4_SetFuelColor_1 = kcg_lit_uint8(0);
  outC->_L5_SetFuelColor_1 = kcg_lit_uint8(0);
  outC->_L6_SetFuelColor_1.Emit = kcg_true;
  outC->_L6_SetFuelColor_1.Value = kcg_lit_uint8(0);
  outC->_L7_SetFuelColor_1 = kcg_true;
  outC->FuelType_SetFuelColor_1 = kcg_lit_uint16(0);
  outC->FuelColor_SetFuelColor_1.Emit = kcg_true;
  outC->FuelColor_SetFuelColor_1.Value = kcg_lit_uint8(0);
  outC->_L1_SetTankFullVisible_1 = kcg_lit_uint32(0);
  outC->_L2_SetTankFullVisible_1 = kcg_true;
  outC->_L3_SetTankFullVisible_1 = kcg_lit_uint32(0);
  outC->_L4_SetTankFullVisible_1 = kcg_true;
  outC->_L5_SetTankFullVisible_1 = kcg_true;
  outC->_L6_SetTankFullVisible_1 = kcg_true;
  outC->_L8_SetTankFullVisible_1.Emit = kcg_true;
  outC->_L8_SetTankFullVisible_1.Value = kcg_true;
  outC->_L9_SetTankFullVisible_1 = kcg_true;
  outC->FuelLevelValue_SetTankFullVisible_1 = kcg_lit_uint32(0);
  outC->TankFullVisible_SetTankFullVisible_1.Emit = kcg_true;
  outC->TankFullVisible_SetTankFullVisible_1.Value = kcg_true;
  outC->_L1_RepaintFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L2_RepaintFuelLevel_1 = kcg_true;
  outC->_L3_RepaintFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L4_RepaintFuelLevel_1 = kcg_true;
  outC->_L5_RepaintFuelLevel_1 = kcg_true;
  outC->_L6_RepaintFuelLevel_1 = kcg_true;
  outC->_L7_RepaintFuelLevel_1.Emit = kcg_true;
  outC->_L7_RepaintFuelLevel_1.Value = kcg_true;
  outC->_L8_RepaintFuelLevel_1 = kcg_true;
  outC->_L9_RepaintFuelLevel_1.Emit = kcg_true;
  outC->_L9_RepaintFuelLevel_1.Value = kcg_lit_uint32(0);
  outC->_L10_RepaintFuelLevel_1 = kcg_true;
  outC->Value_RepaintFuelLevel_1 = kcg_lit_uint32(0);
  outC->FuelVisible_RepaintFuelLevel_1.Emit = kcg_true;
  outC->FuelVisible_RepaintFuelLevel_1.Value = kcg_true;
  outC->FuelLevel_RepaintFuelLevel_1.Emit = kcg_true;
  outC->FuelLevel_RepaintFuelLevel_1.Value = kcg_lit_uint32(0);
  outC->_L1_EnableWidgets_1 = kcg_lit_uint16(0);
  outC->_L2_EnableWidgets_1 = kcg_true;
  outC->_L3_EnableWidgets_1 = kcg_lit_uint16(0);
  outC->_L4_EnableWidgets_1 = kcg_true;
  outC->_L5_EnableWidgets_1 = kcg_lit_uint32(0);
  outC->_L6_EnableWidgets_1 = kcg_lit_uint32(0);
  outC->_L7_EnableWidgets_1 = kcg_true;
  outC->_L8_EnableWidgets_1 = kcg_lit_uint32(0);
  outC->_L9_EnableWidgets_1 = kcg_lit_uint32(0);
  outC->_L10_EnableWidgets_1 = kcg_true;
  outC->_L11_EnableWidgets_1 = kcg_true;
  outC->_L12_EnableWidgets_1 = kcg_true;
  outC->_L13_EnableWidgets_1 = kcg_true;
  outC->_L14_EnableWidgets_1.Emit = kcg_true;
  outC->_L14_EnableWidgets_1.Value = kcg_true;
  outC->_L15_EnableWidgets_1 = kcg_true;
  outC->_L16_EnableWidgets_1 = kcg_true;
  outC->_L17_EnableWidgets_1 = kcg_lit_uint32(0);
  outC->_L18_EnableWidgets_1 = kcg_lit_uint32(0);
  outC->_L19_EnableWidgets_1 = kcg_true;
  outC->_L21_EnableWidgets_1.Emit = kcg_true;
  outC->_L21_EnableWidgets_1.Value = kcg_true;
  outC->_L22_EnableWidgets_1 = kcg_true;
  outC->FuelType_EnableWidgets_1 = kcg_lit_uint16(0);
  outC->FuelStatus_EnableWidgets_1 = kcg_lit_uint32(0);
  outC->FuelLevelValue_EnableWidgets_1 = kcg_lit_uint32(0);
  outC->RefuelEnable_EnableWidgets_1.Emit = kcg_true;
  outC->RefuelEnable_EnableWidgets_1.Value = kcg_true;
  outC->FuelTypeEnable_EnableWidgets_1.Emit = kcg_true;
  outC->FuelTypeEnable_EnableWidgets_1.Value = kcg_true;
  outC->value_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L1_SetFuelLevel_1 = kcg_true;
  outC->_L2_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L3_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L5_SetFuelLevel_1 = kcg_true;
  outC->_L6_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L7_SetFuelLevel_1 = kcg_true;
  outC->_L8_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L9_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L10_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L11_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L12_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L14_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L15_SetFuelLevel_1 = kcg_true;
  outC->_L16_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L17_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L18_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L19_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L20_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L21_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L22_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L23_SetFuelLevel_1 = kcg_true;
  outC->_L24_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L25_SetFuelLevel_1 = kcg_true;
  outC->_L26_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L27_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->Refuel_SetFuelLevel_1 = kcg_true;
  outC->Empty_SetFuelLevel_1 = kcg_true;
  outC->FuelLevelValue_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L2_ShowLayer_1 = kcg_true;
  outC->LayerVisible_ShowLayer_1 = kcg_true;
  outC->_L4_SetFuelLevel_1 = kcg_lit_uint32(0);
  outC->_L1_ShowLayer_1 = kcg_true;
  outC->init = kcg_true;
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
  outC->LayerVisible = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_TankClosed_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Main_reset(outC_Main *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_TankClosed_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Main/
  @1: (ShowLayer#1)
  @2: (SetFuelLevel#1)
  @3: (EnableWidgets#1)
  @4: (RepaintFuelLevel#1)
  @5: (SetTankFullVisible#1)
  @6: (SetFuelColor#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.c
** Generation date: 2019-09-29T23:26:56
*************************************************************$ */

