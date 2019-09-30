#ifndef _MAIN_MACRO_H_
#define _MAIN_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file Main_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "Main.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_Main inputs_ctx;
    outC_Main outputs_ctx;
} WU_Main;
#define WU_CTX_TYPE_Main WU_Main
#define WU_CTX_TYPE_Main_SIZE sizeof(WU_Main)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_Main() 

#define DECLARE_EXT_SENSORS_Main(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_Main_TankStatus(context) context.inputs_ctx.TankStatus  /* Main/TankStatus */
#define VAR_Main_TankStatus VARC_Main_TankStatus(CTX_Main)

#define VARC_Main_FuelType(context) context.inputs_ctx.FuelType  /* Main/FuelType */
#define VAR_Main_FuelType VARC_Main_FuelType(CTX_Main)

#define VARC_Main_Refuel(context) context.inputs_ctx.Refuel  /* Main/Refuel */
#define VAR_Main_Refuel VARC_Main_Refuel(CTX_Main)

#define VARC_Main_EmptyTank(context) context.inputs_ctx.EmptyTank  /* Main/EmptyTank */
#define VAR_Main_EmptyTank VARC_Main_EmptyTank(CTX_Main)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_Main_LayerVisible(context) context.outputs_ctx.LayerVisible  /* Main/LayerVisible */
#define VAR_Main_LayerVisible VARC_Main_LayerVisible(CTX_Main)

#define VARC_Main_FuelVisible(context) context.outputs_ctx.FuelVisible  /* Main/FuelVisible */
#define VAR_Main_FuelVisible VARC_Main_FuelVisible(CTX_Main)

#define VARC_Main_FuelLevel(context) context.outputs_ctx.FuelLevel  /* Main/FuelLevel */
#define VAR_Main_FuelLevel VARC_Main_FuelLevel(CTX_Main)

#define VARC_Main_RefuelEnable(context) context.outputs_ctx.RefuelEnable  /* Main/RefuelEnable */
#define VAR_Main_RefuelEnable VARC_Main_RefuelEnable(CTX_Main)

#define VARC_Main_FuelTypeEnable(context) context.outputs_ctx.FuelTypeEnable  /* Main/FuelTypeEnable */
#define VAR_Main_FuelTypeEnable VARC_Main_FuelTypeEnable(CTX_Main)

#define VARC_Main_TankFullVisible(context) context.outputs_ctx.TankFullVisible  /* Main/TankFullVisible */
#define VAR_Main_TankFullVisible VARC_Main_TankFullVisible(CTX_Main)

#define VARC_Main_FuelColor(context) context.outputs_ctx.FuelColor  /* Main/FuelColor */
#define VAR_Main_FuelColor VARC_Main_FuelColor(CTX_Main)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_TankStatus kcg_bool
#define CPY_TankStatus(DST, SRC) DST = SRC
#define T_FuelType kcg_uint16
#define CPY_FuelType(DST, SRC) DST = SRC
#define T_Refuel kcg_bool
#define CPY_Refuel(DST, SRC) DST = SRC
#define T_EmptyTank kcg_bool
#define CPY_EmptyTank(DST, SRC) DST = SRC
#define T_LayerVisible kcg_bool
#define CPY_LayerVisible(DST, SRC) DST = SRC
#define T_FuelVisible BoolMsg
#define CPY_FuelVisible(DST, SRC) kcg_copy_BoolMsg(DST, SRC)
#define T_FuelLevel intMsg
#define CPY_FuelLevel(DST, SRC) kcg_copy_intMsg(DST, SRC)
#define T_RefuelEnable BoolMsg
#define CPY_RefuelEnable(DST, SRC) kcg_copy_BoolMsg(DST, SRC)
#define T_FuelTypeEnable BoolMsg
#define CPY_FuelTypeEnable(DST, SRC) kcg_copy_BoolMsg(DST, SRC)
#define T_TankFullVisible BoolMsg
#define CPY_TankFullVisible(DST, SRC) kcg_copy_BoolMsg(DST, SRC)
#define T_FuelColor intMsg2
#define CPY_FuelColor(DST, SRC) kcg_copy_intMsg2(DST, SRC)


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_Main(context)  WU_Main context;

#define DECLARE_CTXT_Main() DECLAREC_CTXT_Main(CTX_Main)

#define DECLAREC_EXT_CTXT_Main(MODE , context) MODE WU_Main context;

#define DECLARE_EXT_CTXT_Main(MODE) DECLAREC_EXT_CTXT_Main(MODE , CTX_Main)

#ifndef KCG_USER_DEFINED_INIT
#   define INITC_Main(context) Main_init(&context.outputs_ctx);
#else
#   ifndef KCG_NO_EXTERN_CALL_TO_RESET
#       define INITC_Main(context) Main_reset(&context.outputs_ctx);
#   else
#       define INITC_Main(context) 
#   endif
#endif
#define INIT_Main() INITC_Main(CTX_Main)

#define PERFORMC_Main(context) Main( \
    &context.inputs_ctx /* input context */,\
    &context.outputs_ctx /* output/memories context */\
)
#define PERFORM_Main() PERFORMC_Main(CTX_Main)

/*$************** SCADE Macro wrapper *********************
** End of file Main_macro.h
***********************************************************$*/

#endif /* _MAIN_MACRO_H_ */
