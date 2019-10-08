/*********************************************************
 **
 ** File  project1_UA_1.h
 **
 ** Automatically generated by SCADE Suite UA Adaptor
 ** Version 2019 R2a (build 20190702)
 ** 
 ** Date of generation: 2019-10-07T16:33:47
 ** Command line: C:/Program Files/ANSYS Inc/v194/SCADE/SCADE/bin/uaadaptor.exe -sdy C:\Repositorio_ITA\SCADE\ExLab3\Team1\UserApplication\project1\project1.sdy -n C:\Program Files\ANSYS Inc\v194\SCADE\SCADE Display\config\a661_description\a661.xml -outdir C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/Simulation -k C:/Repositorio_ITA/SCADE/ExLab3/Team1/UserApplication/project1/Simulation/kcg_trace.xml -o project1_UA_1 -i project1_interface.h -encoding UTF-8 C:\Repositorio_ITA\SCADE\ExLab3\Team1\DefinitionFile\project1.sgfx
 *********************************************************/
#ifndef _PROJECT1_UA_1_H_
#define _PROJECT1_UA_1_H_ 

#include "project1.h"
#include "stddef.h"

/* UA Adaptor Types Definitions */
#ifndef uaa_bool
#define uaa_bool uaa_bool
typedef unsigned char uaa_bool;
#endif /* uaa_bool */

#ifndef uaa_float32
#define uaa_float32 uaa_float32
typedef float uaa_float32;
#endif /* uaa_float32 */

#ifndef uaa_float64
#define uaa_float64 uaa_float64
typedef double uaa_float64;
#endif /* uaa_float64 */

#ifndef uaa_size
#define uaa_size uaa_size
typedef ptrdiff_t uaa_size;
#endif /* uaa_size */

#ifndef uaa_uint8
#define uaa_uint8 uaa_uint8
typedef unsigned char uaa_uint8;
#endif /* uaa_uint8 */

#ifndef uaa_uint16
#define uaa_uint16 uaa_uint16
typedef unsigned short uaa_uint16;
#endif /* uaa_uint16 */

#ifndef uaa_uint32
#define uaa_uint32 uaa_uint32
typedef unsigned long uaa_uint32;
#endif /* uaa_uint32 */

#if defined(_MSC_VER)
#ifndef uaa_uint64
#define uaa_uint64 uaa_uint64
typedef unsigned __int64 uaa_uint64;
#endif /* uaa_uint64 */
#elif defined(__GNUC__) && !defined(__STRICT_ANSI__)
#ifndef uaa_uint64
#define uaa_uint64 uaa_uint64
typedef unsigned long long uaa_uint64;
#endif /* uaa_uint64 */
#endif

#ifndef uaa_int8
#define uaa_int8 uaa_int8
typedef signed char uaa_int8;
#endif /* uaa_int8 */

#ifndef uaa_int16
#define uaa_int16 uaa_int16
typedef signed short uaa_int16;
#endif /* uaa_int16 */

#ifndef uaa_int32
#define uaa_int32 uaa_int32
typedef signed long uaa_int32;
#endif /* uaa_int32 */

#if defined(_MSC_VER)
#ifndef uaa_int64
#define uaa_int64 uaa_int64
typedef __int64 uaa_int64;
#endif /* uaa_int64 */
#elif defined(__GNUC__) && !defined(__STRICT_ANSI__)
#ifndef uaa_int64
#define uaa_int64 uaa_int64
typedef signed long long uaa_int64;
#endif /* uaa_int64 */
#endif

/* Default Context Number when not mapped */
#ifndef project1_UA_1_DEFAULT_CONTEXT_NUMBER
#define project1_UA_1_DEFAULT_CONTEXT_NUMBER 0xDEFA
#endif

/* Input Buffer size (bytes) for data from the server */
#ifndef project1_UA_1_MAX_SIZE_INPUT_BUFFER
#define project1_UA_1_MAX_SIZE_INPUT_BUFFER 1000000UL
#endif

/* Output Buffer size (bytes) for data to send to the server */
#ifndef project1_UA_1_MAX_SIZE_OUTPUT_BUFFER
#define project1_UA_1_MAX_SIZE_OUTPUT_BUFFER 1000000UL
#endif

/* Buffer Element type definition */
#ifndef BUFFER_EL
#define BUFFER_EL
typedef unsigned char buffer_el;
#endif

/* Extern Output Context type definition */
#ifndef EXTERN_OUT_CTX_T
#define extern_out_ctx_t void*
#endif

/* Extern Input Context type definition */
#ifndef EXTERN_IN_CTX_T
#define extern_in_ctx_t void*
#endif


/* Send messages to the A661 server */
extern uaa_size project1_UA_1_send(buffer_el msg[], outC_project1* scade_ctx,
  extern_out_ctx_t* extern_out_ctx);

/* Receive notifications from the A661 server */
extern uaa_size project1_UA_1_receive(buffer_el buffer[], uaa_size buffer_size,
  inC_project1* scade_ctx, extern_in_ctx_t* extern_in_ctx);

/* Clear notifications */
extern void project1_UA_1_receive_clear(inC_project1* scade_ctx,
  extern_in_ctx_t* extern_in_ctx);


#endif /* _PROJECT1_UA_1_H_ */

/*********************************************************
 ** End of file
 ** End of generation: 2019-10-07T16:33:47
 *********************************************************/
