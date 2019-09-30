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
DECL_SCOPE(scope_14, 1);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 2);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 2);
DECL_SCOPE(scope_7, 2);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 2);
DECL_SCOPE(scope_3, 2);
DECL_SCOPE(scope_2, 2);
DECL_SCOPE(scope_1, 18);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_15_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_15 = {
    "Main/ MainSM1:TankOpen:<1",
    scope_15_entries, 1
};

const MappingEntry scope_14_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 0 }
};
const MappingScope scope_14 = {
    "Main/ MainSM1:TankOpen:",
    scope_14_entries, 1
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_13 = {
    "Main/ MainSM1:TankClosed:<1",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 0 }
};
const MappingScope scope_12 = {
    "Main/ MainSM1:TankClosed:",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[2] = {
    /* 0 */ { MAP_STATE, "TankClosed:", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 0 },
    /* 1 */ { MAP_STATE, "TankOpen:", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 1 }
};
const MappingScope scope_11 = {
    "Main/ MainSM1:",
    scope_11_entries, 2
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "FuelColor", NULL, sizeof(intMsg2), (size_t)&outputs_ctx.FuelColor, &_Type_intMsg2_Utils, NULL, NULL, &scope_4, 1, 0 }
};
const MappingScope scope_10 = {
    "Main/ Main/SetFuelColor 1",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "TankFullVisible", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.TankFullVisible, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 0 }
};
const MappingScope scope_9 = {
    "Main/ Main/SetTankFullVisible 1",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "FuelVisible", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.FuelVisible, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "FuelLevel", NULL, sizeof(intMsg), (size_t)&outputs_ctx.FuelLevel, &_Type_intMsg_Utils, NULL, NULL, &scope_3, 1, 1 }
};
const MappingScope scope_8 = {
    "Main/ Main/RepaintFuelLevel 1",
    scope_8_entries, 2
};

const MappingEntry scope_7_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "RefuelEnable", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.RefuelEnable, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "FuelTypeEnable", NULL, sizeof(BoolMsg), (size_t)&outputs_ctx.FuelTypeEnable, &_Type_BoolMsg_Utils, NULL, NULL, &scope_2, 1, 1 }
};
const MappingScope scope_7 = {
    "Main/ Main/EnableWidgets 1",
    scope_7_entries, 2
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "LayerVisible", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.LayerVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_5 = {
    "Main/ Main/ShowLayer 1",
    scope_5_entries, 1
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

const MappingEntry scope_1_entries[18] = {
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
    /* 11 */ { MAP_EXPANDED, "ShowLayer 1", NULL, 0, 0, NULL, NULL, NULL, &scope_5, 1, 11 },
    /* 12 */ { MAP_EXPANDED, "SetFuelLevel 1", NULL, 0, 0, NULL, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_EXPANDED, "EnableWidgets 1", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 13 },
    /* 14 */ { MAP_EXPANDED, "RepaintFuelLevel 1", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 14 },
    /* 15 */ { MAP_EXPANDED, "SetTankFullVisible 1", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 15 },
    /* 16 */ { MAP_EXPANDED, "SetFuelColor 1", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 16 },
    /* 17 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 17 }
};
const MappingScope scope_1 = {
    "Main/ Main",
    scope_1_entries, 18
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
