#include "__cf_motor_model_updated_F21_22b.h"
#include "motor_model_updated_F21_22b.h"
#include "rtwtypes.h"
#include "xcp.h"
#include "ext_mode.h"
#include "MW_target_hardware_resources.h"
volatile int IsrOverrun = _PIqWtbzrbQqv_KS_31HnE2 ; static boolean_T
OverrunFlag = _PIqWtbzrbQqv_KS_31HnE2 ; void rt_OneStep ( void ) { if (
OverrunFlag ++ ) { IsrOverrun = _QHNSjd8JBrVVYZAcs7Zm32 ; OverrunFlag -- ;
return ; }
#ifndef _MW_ARDUINO_LOOP_ 
sei ( ) ;
#endif
; motor_model_updated_F21_22b_step ( ) ;
#ifndef _MW_ARDUINO_LOOP_ 
cli ( ) ;
#endif
; OverrunFlag -- ; } extern void rtIOStreamResync ( ) ; volatile boolean_T
stopRequested ; volatile boolean_T runModel ; int main ( void ) { float
modelBaseRate = _ejJFkqxLkFf8z5s0UH9rX0 ; float systemClock =
_PIqWtbzrbQqv_KS_31HnE2 ; extmodeErrorCode_T errorCode = EXTMODE_SUCCESS ;
stopRequested = false ; runModel = false ; init ( ) ; MW_Arduino_Init ( ) ;
rtmSetErrorStatus ( lfrct2x5ld , _PIqWtbzrbQqv_KS_31HnE2 ) ; errorCode =
extmodeSetFinalSimulationTime ( ( extmodeSimulationTime_T ) -
_QHNSjd8JBrVVYZAcs7Zm32 ) ; errorCode = extmodeParseArgs (
_PIqWtbzrbQqv_KS_31HnE2 , NULL ) ; if ( errorCode != EXTMODE_SUCCESS ) {
return ( errorCode ) ; } motor_model_updated_F21_22b_initialize ( ) ; cli ( )
; sei ( ) ; errorCode = extmodeInit ( lfrct2x5ld -> extModeInfo , &
rtmGetTFinal ( lfrct2x5ld ) ) ; if ( errorCode != EXTMODE_SUCCESS ) { } if (
errorCode == EXTMODE_SUCCESS ) { extmodeWaitForHostRequest (
EXTMODE_WAIT_FOREVER ) ; if ( extmodeStopRequested ( ) ) {
rtmSetStopRequested ( lfrct2x5ld , true ) ; } } cli ( ) ;
configureArduinoAVRTimer ( ) ; runModel = ! extmodeSimulationComplete ( ) &&
! extmodeStopRequested ( ) && ! rtmGetStopRequested ( lfrct2x5ld ) ;
#ifndef _MW_ARDUINO_LOOP_ 
sei ( ) ;
#endif
; XcpStatus lastXcpState = xcpStatusGet ( ) ; sei ( ) ; while ( runModel ) {
errorCode = extmodeBackgroundRun ( ) ; if ( errorCode != EXTMODE_SUCCESS ) {
} stopRequested = ! ( ! extmodeSimulationComplete ( ) && !
extmodeStopRequested ( ) && ! rtmGetStopRequested ( lfrct2x5ld ) ) ; runModel
= ! ( stopRequested ) ; if ( stopRequested ) disable_rt_OneStep ( ) ; if (
lastXcpState == XCP_CONNECTED && xcpStatusGet ( ) == XCP_DISCONNECTED )
rtIOStreamResync ( ) ; lastXcpState = xcpStatusGet ( ) ; MW_Arduino_Loop ( )
; } motor_model_updated_F21_22b_terminate ( ) ; extmodeReset ( ) ; cli ( ) ;
return _PIqWtbzrbQqv_KS_31HnE2 ; }
