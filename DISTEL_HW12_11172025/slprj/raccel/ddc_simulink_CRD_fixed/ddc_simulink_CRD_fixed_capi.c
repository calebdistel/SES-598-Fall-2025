#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "ddc_simulink_CRD_fixed_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 36
#endif
#ifndef SS_INT64
#define SS_INT64 37
#endif
#else
#include "builtin_typeid_types.h"
#include "ddc_simulink_CRD_fixed.h"
#include "ddc_simulink_CRD_fixed_capi.h"
#include "ddc_simulink_CRD_fixed_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"ddc_simulink_CRD_fixed/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0
} , { 1 , 0 , TARGET_STRING ( "ddc_simulink_CRD_fixed/Downsample" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 2 , 1 } , { 2 , 0 , TARGET_STRING (
"ddc_simulink_CRD_fixed/Chirp/DTC_output_1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 1 , 0 } , { 3 , 0 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Sum14"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 2 , 0 } , { 4 , 0 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 ,
0 } , { 5 , 0 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 6 , 0 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay10" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1
, 0 } , { 7 , 0 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay11" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 8 , 0 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay12" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1
, 0 } , { 9 , 0 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay13" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 10 , 0 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1
, 0 } , { 11 , 0 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 12 , 0 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1
, 0 } , { 13 , 0 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 14 , 0 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay6" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1
, 0 } , { 15 , 0 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 16 , 0 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay8" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 1
, 0 } , { 17 , 0 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay9" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 1 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 18 , TARGET_STRING (
"ddc_simulink_CRD_fixed/Constant" ) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 }
, { 19 , TARGET_STRING ( "ddc_simulink_CRD_fixed/Chirp/ReplicaOfSource" ) ,
TARGET_STRING ( "f0" ) , 2 , 0 , 0 } , { 20 , TARGET_STRING (
"ddc_simulink_CRD_fixed/Chirp/ReplicaOfSource" ) , TARGET_STRING ( "f1" ) , 2
, 0 , 0 } , { 21 , TARGET_STRING (
"ddc_simulink_CRD_fixed/Chirp/ReplicaOfSource" ) , TARGET_STRING ( "t1" ) , 2
, 0 , 0 } , { 22 , TARGET_STRING (
"ddc_simulink_CRD_fixed/Chirp/ReplicaOfSource" ) , TARGET_STRING ( "Tsweep" )
, 2 , 0 , 0 } , { 23 , TARGET_STRING (
"ddc_simulink_CRD_fixed/Chirp/ReplicaOfSource" ) , TARGET_STRING ( "phase" )
, 2 , 0 , 0 } , { 24 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 3 } , { 25 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 4 } , { 26 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Constant10" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 5 } , { 27 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Constant11" ) , TARGET_STRING ( "Value" ) , 3 , 0
, 6 } , { 28 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Constant12" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 7 } , { 29 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Constant13" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 8 } , { 30 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Constant14" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 4 } , { 31 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Constant15" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 3 } , { 32 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 8 } , { 33 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 7 } , { 34 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Constant4" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 6 } , { 35 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Constant5" ) , TARGET_STRING ( "Value" ) , 3 , 0
, 5 } , { 36 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Constant6" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 9 } , { 37 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Constant7" ) , TARGET_STRING ( "Value" ) , 3 , 0
, 10 } , { 38 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Constant8" ) ,
TARGET_STRING ( "Value" ) , 3 , 0 , 10 } , { 39 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Constant9" ) , TARGET_STRING ( "Value" ) , 3 , 0
, 9 } , { 40 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 41 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay1" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 1 } , { 42 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay10" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 43 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay11" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 1 } , { 44 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay12" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 45 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay13" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 1 } , { 46 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay14" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 47 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay2" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 1 } , { 48 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay3" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 49 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay4" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 1 } , { 50 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay5" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 51 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay6" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 1 } , { 52 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay7" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 53 , TARGET_STRING (
"ddc_simulink_CRD_fixed/LPF/Delay8" ) , TARGET_STRING ( "InitialCondition" )
, 0 , 0 , 1 } , { 54 , TARGET_STRING ( "ddc_simulink_CRD_fixed/LPF/Delay9" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 1 } , { 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ;
static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] =
{ { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . knsbcf5qpe , & rtB . g2yfkoitpf ,
& rtB . mjkzsjgeec , & rtB . mnj1cr2sdw , & rtB . fb2e53f1hu , & rtB .
eumtvlnbas , & rtB . ff54tg0ppa , & rtB . k2dsokjuva , & rtB . lc3vw4nfwy , &
rtB . jxegr0dtp5 , & rtB . dzt0fkdi1h , & rtB . gesflnjcqt , & rtB .
hhqfek25ny , & rtB . jx3igz14sv , & rtB . lajctoqt5m , & rtB . dx3xz0ugf3 , &
rtB . ldvj0yw3k2 , & rtB . ffxarluydi , & rtP . Constant_Value_j05vdevbxa , &
rtP . ReplicaOfSource_f0 , & rtP . ReplicaOfSource_f1 , & rtP .
ReplicaOfSource_t1 , & rtP . ReplicaOfSource_Tsweep , & rtP .
ReplicaOfSource_phase , & rtP . Constant_Value , & rtP . Constant1_Value , &
rtP . Constant10_Value , & rtP . Constant11_Value , & rtP . Constant12_Value
, & rtP . Constant13_Value , & rtP . Constant14_Value , & rtP .
Constant15_Value , & rtP . Constant2_Value , & rtP . Constant3_Value , & rtP
. Constant4_Value , & rtP . Constant5_Value , & rtP . Constant6_Value , & rtP
. Constant7_Value , & rtP . Constant8_Value , & rtP . Constant9_Value , & rtP
. Delay_InitialCondition , & rtP . Delay1_InitialCondition , & rtP .
Delay10_InitialCondition , & rtP . Delay11_InitialCondition , & rtP .
Delay12_InitialCondition , & rtP . Delay13_InitialCondition , & rtP .
Delay14_InitialCondition , & rtP . Delay2_InitialCondition , & rtP .
Delay3_InitialCondition , & rtP . Delay4_InitialCondition , & rtP .
Delay5_InitialCondition , & rtP . Delay6_InitialCondition , & rtP .
Delay7_InitialCondition , & rtP . Delay8_InitialCondition , & rtP .
Delay9_InitialCondition , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "short" ,
"int16_T" , 0 , 0 , sizeof ( int16_T ) , ( uint8_T ) SS_INT16 , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } , { "double" , "real_T" , 0 , 0 , sizeof ( real_T )
, ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } , { "unsigned short" , "uint16_T" , 0 ,
0 , sizeof ( uint16_T ) , ( uint8_T ) SS_UINT16 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 ,
1.6666666666666667E-8 , 3.3333333333333334E-8 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 14 , ( boolean_T ) 1 } , { ( const void
* ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ]
, rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 16 , ( boolean_T ) 1 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 4 , ( boolean_T ) 1 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 25 , ( boolean_T ) 1 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 19 , ( boolean_T ) 0 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 23 , ( boolean_T ) 0 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 21 , ( boolean_T ) 1 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 22 , ( boolean_T ) 1 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 18 , ( boolean_T ) 0 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 17 , ( boolean_T ) 0 } } ; static
const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 3 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 1 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
18 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 37 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 180476997U , 1839515453U , 2396273719U , 3546387245U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * ddc_simulink_CRD_fixed_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void ddc_simulink_CRD_fixed_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void ddc_simulink_CRD_fixed_host_InitializeDataMapInfo (
ddc_simulink_CRD_fixed_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
