#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "int16_T" , 17 , 2 } , {
"int16_T" , 18 , 2 } , { "int16_T" , 19 , 2 } , { "uint16_T" , 20 , 2 } , {
"uint16_T" , 21 , 2 } , { "int16_T" , 22 , 2 } , { "int16_T" , 23 , 2 } , {
"uint16_T" , 24 , 2 } , { "uint16_T" , 25 , 2 } , { "int16_T" , 26 , 2 } , {
"int16_T" , 27 , 2 } , { "int16_T" , 28 , 2 } , { "int32_T" , 29 , 4 } , {
"int32_T" , 30 , 4 } , { "int32_T" , 31 , 4 } , { "int32_T" , 32 , 4 } , {
"int32_T" , 33 , 4 } , { "int32_T" , 34 , 4 } , { "c4iccjifpg" , 35 , 232 } ,
{ "uint64_T" , 36 , 8 } , { "int64_T" , 37 , 8 } , { "uint_T" , 38 , 32 } , {
"char_T" , 39 , 8 } , { "uchar_T" , 40 , 8 } , { "time_T" , 41 , 8 } } ;
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T
) , sizeof ( uint64_T ) , sizeof ( int16_T ) , sizeof ( int16_T ) , sizeof (
int16_T ) , sizeof ( uint16_T ) , sizeof ( uint16_T ) , sizeof ( int16_T ) ,
sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( uint16_T ) , sizeof (
int16_T ) , sizeof ( int16_T ) , sizeof ( int16_T ) , sizeof ( int32_T ) ,
sizeof ( int32_T ) , sizeof ( int32_T ) , sizeof ( int32_T ) , sizeof (
int32_T ) , sizeof ( int32_T ) , sizeof ( c4iccjifpg ) , sizeof ( uint64_T )
, sizeof ( int64_T ) , sizeof ( uint_T ) , sizeof ( char_T ) , sizeof (
uchar_T ) , sizeof ( time_T ) } ; static const char_T * rtDataTypeNames [ ] =
{ "real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" ,
"int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" ,
"action_T" , "timer_uint32_pair_T" , "physical_connection" , "int64_T" ,
"uint64_T" , "int16_T" , "int16_T" , "int16_T" , "uint16_T" , "uint16_T" ,
"int16_T" , "int16_T" , "uint16_T" , "uint16_T" , "int16_T" , "int16_T" ,
"int16_T" , "int32_T" , "int32_T" , "int32_T" , "int32_T" , "int32_T" ,
"int32_T" , "c4iccjifpg" , "uint64_T" , "int64_T" , "uint_T" , "char_T" ,
"uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions [ ] = { { (
char_T * ) ( & rtB . mnj1cr2sdw ) , 28 , 0 , 18 } , { ( char_T * ) ( & rtDW .
ogwdqz3h4t ) , 35 , 0 , 1 } , { ( char_T * ) ( & rtDW . pn04q5tgng ) , 0 , 0
, 5 } , { ( char_T * ) ( & rtDW . l04w5fylym ) , 17 , 0 , 15 } , { ( char_T *
) ( & rtDW . of33ghfh4k ) , 8 , 0 , 2 } } ; static DataTypeTransitionTable
rtBTransTable = { 5U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . ReplicaOfSource_Tsweep ) , 0
, 0 , 5 } , { ( char_T * ) ( & rtP . Delay14_InitialCondition ) , 17 , 0 , 23
} , { ( char_T * ) ( & rtP . Constant7_Value ) , 25 , 0 , 8 } , { ( char_T *
) ( & rtP . Constant_Value_j05vdevbxa ) , 8 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 4U , rtPTransitions } ;
