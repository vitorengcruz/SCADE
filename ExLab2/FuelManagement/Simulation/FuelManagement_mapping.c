/* FuelManagement_mapping.c */

#include "FuelManagement_type.h"
#include "FuelManagement_interface.h"
#include "FuelManagement_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_15, 1);
DECL_SCOPE(scope_14, 2);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 2);
DECL_SCOPE(scope_11, 9);
DECL_SCOPE(scope_10, 8);
DECL_SCOPE(scope_9, 9);
DECL_SCOPE(scope_8, 12);
DECL_SCOPE(scope_7, 23);
DECL_SCOPE(scope_6, 28);
DECL_SCOPE(scope_5, 3);
DECL_SCOPE(scope_4, 2);
DECL_SCOPE(scope_3, 2);
DECL_SCOPE(scope_2, 2);
DECL_SCOPE(scope_1, 32);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_TankClosed_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_TankClosed_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_TankOpen_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_TankOpen_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_TankClosed_TankOpen_1_TankClosed_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_TankClosed_TankOpen_1_TankClosed_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_TankOpen_TankClosed_1_TankOpen_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_TankOpen_TankClosed_1_TankOpen_SM1; }

/* mapping definition */


const MappingEntry scope_15_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_11_entries[5], isActive_SSM_TR_SM1_SSM_TR_TankOpen_TankClosed_1_TankOpen_SM1, NULL, 1, 0 }
};
const MappingScope scope_15 = {
    "Main/ MainSM1:TankOpen:<1",
    scope_15_entries, 1
};

const MappingEntry scope_14_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_11_entries[5], isActive_SSM_TR_SM1_SSM_TR_TankOpen_TankClosed_1_TankOpen_SM1, &scope_15, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L1_TankOpen_SM1, &_Type_kcg_uint32_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_TankOpen_SM1, NULL, 1, 1 }
};
const MappingScope scope_14 = {
    "Main/ MainSM1:TankOpen:",
    scope_14_entries, 2
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_11_entries[5], isActive_SSM_TR_SM1_SSM_TR_TankClosed_TankOpen_1_TankClosed_SM1, NULL, 1, 0 }
};
const MappingScope scope_13 = {
    "Main/ MainSM1:TankClosed:<1",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_11_entries[5], isActive_SSM_TR_SM1_SSM_TR_TankClosed_TankOpen_1_TankClosed_SM1, &scope_13, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L1_TankClosed_SM1, &_Type_kcg_uint32_Utils, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_TankClosed_SM1, NULL, 1, 1 }
};
const MappingScope scope_12 = {
    "Main/ MainSM1:TankClosed:",
    scope_12_entries, 2
};

const MappingEntry scope_11_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "TankClosed:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_TankClosed_SM1, &scope_12, 1, 7 },
    /* 8 */ { MAP_STATE, "TankOpen:", NULL, 0, 0, NULL, &scope_11_entries[0], isActive_SSM_ST_SM1_SSM_st_TankOpen_SM1, &scope_14, 1, 8 }
};
const MappingScope scope_11 = {
    "Main/ MainSM1:",
    scope_11_entries, 9
};

const MappingEntry scope_10_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "FuelColor", NULL, sizeof(intMsg2), (size_t)&outputs_ctx.FuelColor_SetFuelColor_1, &_Type_intMsg2_Utils, NULL, NULL, &scope_4, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L1_SetFuelColor_1, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L2_SetFuelColor_1, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L3_SetFuelColor_1, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L4_SetFuelColor_1, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_uint8), (size_t)&outputs_ctx._L5_SetFuelColor_1, &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(intMsg2), (size_t)&outputs_ctx._L6_SetFuelColor_1, &_Type_intMsg2_Utils, NULL, NULL, &scope_4, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7_SetFuelColor_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 }
};
const MappingScope scope_10 = {
    "Main/ Main/SetFuelColor 1",
    scope_10_entries, 8
};

const MappingEntry scope_9_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "TankFullVisible", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.TankFullVisible_SetTankFullVisible_1, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L1_SetTankFullVisible_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_SetTankFullVisible_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L3_SetTankFullVisible_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_SetTankFullVisible_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_SetTankFullVisible_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6_SetTankFullVisible_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx._L8_SetTankFullVisible_1, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9_SetTankFullVisible_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_9 = {
    "Main/ Main/SetTankFullVisible 1",
    scope_9_entries, 9
};

const MappingEntry scope_8_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "FuelVisible", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.FuelVisible_RepaintFuelLevel_1, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "FuelLevel", NULL, sizeof(intMsg), (size_t)&outputs_ctx.FuelLevel_RepaintFuelLevel_1, &_Type_intMsg_Utils, NULL, NULL, &scope_3, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L1_RepaintFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_RepaintFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L3_RepaintFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_RepaintFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_RepaintFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6_RepaintFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx._L7_RepaintFuelLevel_1, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8_RepaintFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(intMsg), (size_t)&outputs_ctx._L9_RepaintFuelLevel_1, &_Type_intMsg_Utils, NULL, NULL, &scope_3, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L10_RepaintFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 }
};
const MappingScope scope_8 = {
    "Main/ Main/RepaintFuelLevel 1",
    scope_8_entries, 12
};

const MappingEntry scope_7_entries[23] = {
    /* 0 */ { MAP_OUTPUT, "RefuelEnable", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.RefuelEnable_EnableWidgets_1, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "FuelTypeEnable", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.FuelTypeEnable_EnableWidgets_1, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L1_EnableWidgets_1, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L3_EnableWidgets_1, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L5_EnableWidgets_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L6_EnableWidgets_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L8_EnableWidgets_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L9_EnableWidgets_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L10_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L14", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx._L14_EnableWidgets_1, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L16_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L17_EnableWidgets_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L18_EnableWidgets_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L19_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx._L21_EnableWidgets_1, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L22_EnableWidgets_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 }
};
const MappingScope scope_7 = {
    "Main/ Main/EnableWidgets 1",
    scope_7_entries, 23
};

const MappingEntry scope_6_entries[28] = {
    /* 0 */ { MAP_OUTPUT, "FuelLevelValue", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx.FuelLevelValue_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "value", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx.value_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_SetFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L2_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L3_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L4_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_SetFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L6_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7_SetFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L8_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L9_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L10_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L11_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L12_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L14_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15_SetFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L16_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L17_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L18_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L19_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L20_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L21_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L22_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L23_SetFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L24_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L25_SetFuelLevel_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L26_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L27_SetFuelLevel_1, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 27 }
};
const MappingScope scope_6 = {
    "Main/ Main/SetFuelLevel 1",
    scope_6_entries, 28
};

const MappingEntry scope_5_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "LayerVisible", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.LayerVisible_ShowLayer_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_ShowLayer_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_ShowLayer_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_5 = {
    "Main/ Main/ShowLayer 1",
    scope_5_entries, 3
};

const MappingEntry scope_4_entries[2] = {
    /* 0 */ { MAP_FIELD, ".Emit", NULL, sizeof(kcg_bool), offsetof(intMsg2, Emit), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".Value", NULL, sizeof(kcg_uint8), offsetof(intMsg2, Value), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_4 = {
    "intMsg2",
    scope_4_entries, 2
};

const MappingEntry scope_3_entries[2] = {
    /* 0 */ { MAP_FIELD, ".Emit", NULL, sizeof(kcg_bool), offsetof(intMsg, Emit), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".Value", NULL, sizeof(kcg_uint32), offsetof(intMsg, Value), &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_3 = {
    "intMsg",
    scope_3_entries, 2
};

const MappingEntry scope_2_entries[2] = {
    /* 0 */ { MAP_FIELD, ".Emit", NULL, sizeof(kcg_bool), offsetof(BoolMsg, Emit), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".Value", NULL, sizeof(kcg_bool), offsetof(BoolMsg, Value), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_2 = {
    "BoolMsg",
    scope_2_entries, 2
};

const MappingEntry scope_1_entries[32] = {
    /* 0 */ { MAP_OUTPUT, "LayerVisible", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.LayerVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "FuelVisible", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.FuelVisible, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "FuelLevel", NULL, sizeof(intMsg), (size_t)&outputs_ctx.FuelLevel, &_Type_intMsg_Utils, NULL, NULL, &scope_3, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "RefuelEnable", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.RefuelEnable, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "FuelTypeEnable", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.FuelTypeEnable, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "TankFullVisible", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.TankFullVisible, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "FuelColor", NULL, sizeof(intMsg2), (size_t)&outputs_ctx.FuelColor, &_Type_intMsg2_Utils, NULL, NULL, &scope_4, 1, 6 },
    /* 7 */ { MAP_INPUT, "TankStatus", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.TankStatus, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_INPUT, "FuelType", NULL, sizeof(kcg_uint16), (size_t)&inputs_ctx.FuelType, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_INPUT, "Refuel", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Refuel, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_INPUT, "EmptyTank", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.EmptyTank, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "tank_status", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx.tank_status, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L2, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L6", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx._L6, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx._L5, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L8, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_uint32), (size_t)&outputs_ctx._L9, &_Type_kcg_uint32_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L11", NULL, sizeof(intMsg), (size_t)&outputs_ctx._L11, &_Type_intMsg_Utils, NULL, NULL, &scope_3, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L10", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx._L10, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L12", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx._L12, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L13", NULL, sizeof(intMsg2), (size_t)&outputs_ctx._L13, &_Type_intMsg2_Utils, NULL, NULL, &scope_4, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L14, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_EXPANDED, "ShowLayer 1", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 25 },
    /* 26 */ { MAP_EXPANDED, "SetFuelLevel 1", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 26 },
    /* 27 */ { MAP_EXPANDED, "EnableWidgets 1", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 27 },
    /* 28 */ { MAP_EXPANDED, "RepaintFuelLevel 1", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 28 },
    /* 29 */ { MAP_EXPANDED, "SetTankFullVisible 1", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 29 },
    /* 30 */ { MAP_EXPANDED, "SetFuelColor 1", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 30 },
    /* 31 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 31 }
};
const MappingScope scope_1 = {
    "Main/ Main",
    scope_1_entries, 32
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Main", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
