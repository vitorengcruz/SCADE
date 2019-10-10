/*********************************************************
 **
 ** File  project1_UA_1_LAY_1.c
 **
 ** Automatically generated by SCADE Suite UA Adaptor
 ** Version R17 (build i15)
 ** 
 ** Date of generation: 2016-08-23T00:15:16
 ** Command line: C:/Program Files/Esterel Technologies/SCADE R17/SCADE/bin/uaadaptor.exe -sdy C:\Listex_2\Team1\UserApplication\project1.sdy -n C:\Program Files\Esterel Technologies\SCADE R17\SCADE Display\config\a661_description\a661.xml -outdir C:/Listex_2/Team1/UserApplication/Simulation -k C:/Listex_2/Team1/UserApplication/Simulation/kcg_trace.xml -o project1_UA_1 -i project1_interface.h -encoding ASCII C:\Listex_2\Team1\DefinitionFile\project1.sgfx
 *********************************************************/
#include "kcg_sensors.h"
#include "project1_UA_1.h"
#include "project1_UA_1_constants.h"
#include "project1_UA_1_private.h"

/* Perform UA Request for layer 1 */
A661_INTERNAL uaa_size a661_com_A661_CMD_UA_REQUEST_layer_1(buffer_el msg[], 
  outC_project1* scade_ctx,  extern_out_ctx_t * extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->ReqLayerVisible ||
  scade_ctx->ReqLayerActive){
    
    if (scade_ctx->ReqLayerVisible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_VISIBLE, 0);
    }
    if (scade_ctx->ReqLayerActive){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_ACTIVE, 0);
    }
  }
  return offset ;
}

/* Pack messages for layer 1 */
 uaa_size a661_com_layer_1(buffer_el msg[], 
  outC_project1* scade_ctx,  extern_out_ctx_t* extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->EmitToCDS ||
  scade_ctx->ReqLayerActive ||
  scade_ctx->ReqLayerVisible){
    LAYER("a661_layer#1");
    offset = 8;
    a661_msg_cmd_header(msg, 1, project1_UA_1_DEFAULT_CONTEXT_NUMBER);
    if (scade_ctx->EmitToCDS){
      WIDGET("GpArcCircle#2");
      offset = offset + a661_com_csp_widget_GpArcCircle(msg + offset, 2,
        scade_ctx->EmitToCDS, scade_ctx->SignalToLED);
    }
    if (scade_ctx->ReqLayerActive ||
    scade_ctx->ReqLayerVisible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_layer_1(msg + offset,
        scade_ctx, extern_ctx);
    }
    WRITE_ULONG(msg + offset, A661_END_BLOCK);
    offset = offset + 4;
    WRITE_ULONG(msg + 4, offset);
  }
  return offset ;
}

/*********************************************************
 ** End of file
 ** End of generation: 2016-08-23T00:15:16
 *********************************************************/
