#ifndef RTW_HEADER_ddc_simulink_CRD_fixed_h_
#define RTW_HEADER_ddc_simulink_CRD_fixed_h_
#ifndef ddc_simulink_CRD_fixed_COMMON_INCLUDES_
#define ddc_simulink_CRD_fixed_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "ddc_simulink_CRD_fixed_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME ddc_simulink_CRD_fixed
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (20) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int16_T mnj1cr2sdw ; int16_T g2yfkoitpf ; int16_T mjkzsjgeec
; int16_T jxegr0dtp5 ; int16_T lc3vw4nfwy ; int16_T k2dsokjuva ; int16_T
ff54tg0ppa ; int16_T ffxarluydi ; int16_T ldvj0yw3k2 ; int16_T dx3xz0ugf3 ;
int16_T lajctoqt5m ; int16_T jx3igz14sv ; int16_T hhqfek25ny ; int16_T
gesflnjcqt ; int16_T dzt0fkdi1h ; int16_T eumtvlnbas ; int16_T fb2e53f1hu ;
int16_T knsbcf5qpe ; } B ; typedef struct { c4iccjifpg ogwdqz3h4t ; real_T
pn04q5tgng ; real_T et2gmgldr0 ; real_T fhxfraos51 ; real_T p20v2mdxvg ;
real_T i0vah4lv4r ; int16_T l04w5fylym ; int16_T hj0brfrmal ; int16_T
now0j3rdp1 ; int16_T j3z2ky4pxw ; int16_T hwjbuwnct0 ; int16_T haf1cko3oz ;
int16_T misk5c5smq ; int16_T oxgrzeodbl ; int16_T bjtcjrr0px ; int16_T
bdb1hss1l4 ; int16_T fa0tpgsmzm ; int16_T baxe3vvxdd ; int16_T dcz11uc5ku ;
int16_T k0ptagxunv ; int16_T gojt53qwra ; boolean_T of33ghfh4k ; boolean_T
laj4arto4x ; } DW ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T ReplicaOfSource_Tsweep ; real_T
ReplicaOfSource_f0 ; real_T ReplicaOfSource_f1 ; real_T ReplicaOfSource_phase
; real_T ReplicaOfSource_t1 ; int16_T Delay14_InitialCondition ; int16_T
Delay13_InitialCondition ; int16_T Delay12_InitialCondition ; int16_T
Delay11_InitialCondition ; int16_T Delay10_InitialCondition ; int16_T
Delay9_InitialCondition ; int16_T Delay8_InitialCondition ; int16_T
Delay7_InitialCondition ; int16_T Delay6_InitialCondition ; int16_T
Delay5_InitialCondition ; int16_T Delay4_InitialCondition ; int16_T
Delay3_InitialCondition ; int16_T Delay2_InitialCondition ; int16_T
Delay1_InitialCondition ; int16_T Delay_InitialCondition ; int16_T
Constant12_Value ; int16_T Constant3_Value ; int16_T Constant13_Value ;
int16_T Constant2_Value ; int16_T Constant1_Value ; int16_T Constant14_Value
; int16_T Constant_Value ; int16_T Constant15_Value ; uint16_T
Constant7_Value ; uint16_T Constant8_Value ; uint16_T Constant6_Value ;
uint16_T Constant9_Value ; uint16_T Constant10_Value ; uint16_T
Constant5_Value ; uint16_T Constant11_Value ; uint16_T Constant4_Value ;
boolean_T Constant_Value_j05vdevbxa ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_ddc_simulink_CRD_fixed_GetDWork ( ) ; extern void
mr_ddc_simulink_CRD_fixed_SetDWork ( const mxArray * ssDW ) ; extern mxArray
* mr_ddc_simulink_CRD_fixed_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * ddc_simulink_CRD_fixed_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
