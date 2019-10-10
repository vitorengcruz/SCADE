/* project1_mapping.c */

#include <stddef.h>

#include "SmuTypes.h"
#include "SmuMapping.h"
#include "project1_type.h"
#include "project1_mapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) extern const MappingEntry ident##_entries[nb]; extern const MappingScope ident
MAP_DECL(scope_2, 5);
MAP_DECL(scope_1, 16);
MAP_DECL(scope_0, 1);

/* project1/ project1toggle 1/ */
const MappingEntry scope_2_entries[5] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 2 */ { MAP_OUTPUT, "Output", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3@mem", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_2 = {
  "project1/ project1toggle 1/",
  scope_2_entries, 5,
};

/* project1/ project1 */
const MappingEntry scope_1_entries[16] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 4},
  /* 3 */ { MAP_OUTPUT, "EmitToCDS", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EmitToCDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 4 */ { MAP_OUTPUT, "ReqLayerActive", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ReqLayerActive, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_OUTPUT, "ReqLayerVisible", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ReqLayerVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_INPUT, "SignalFromButton", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalFromButton, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 7 */ { MAP_INPUT, "SignalFromTeam2", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.SignalFromTeam2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 8 */ { MAP_OUTPUT, "SignalToLED", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.SignalToLED, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_OUTPUT, "SignalToTeam2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SignalToTeam2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.ReqLayerVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L3@mem", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.SignalToLED, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 13 */ { MAP_LOCAL, "_L5@mem", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EmitToCDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 15 */ { MAP_EXPANDED, "toggle 1", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 5}
};
const MappingScope scope_1 = {
  "project1/ project1",
  scope_1_entries, 16,
};

/*  */
const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "project1", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

