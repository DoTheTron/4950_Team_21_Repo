#include "__cf_motor_model_updated_F21_22b.h"
#ifndef RTW_HEADER_motor_model_updated_F21_22b_h_
#define RTW_HEADER_motor_model_updated_F21_22b_h_
#ifndef motor_model_updated_F21_22b_COMMON_INCLUDES_
#define motor_model_updated_F21_22b_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ext_mode.h"
#include "MW_arduinoextint.h"
#include "MW_arduino_digitalio.h"
#include "MW_PWM.h"
#endif
#include "motor_model_updated_F21_22b_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "MW_target_hardware_resources.h"
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm) ((rtm)->contStateDisabled)
#endif
#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif
#ifndef rtmGetContStates
#define rtmGetContStates(rtm) ((rtm)->contStates)
#endif
#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val) ((rtm)->contStates = (val))
#endif
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif
#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif
#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif
#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm) ((rtm)->Timing.tFinal)
#endif
#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm) ((rtm)->intgData)
#endif
#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val) ((rtm)->intgData = (val))
#endif
#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm) ((rtm)->odeF)
#endif
#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val) ((rtm)->odeF = (val))
#endif
#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm) ((rtm)->odeY)
#endif
#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val) ((rtm)->odeY = (val))
#endif
#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif
#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif
#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif
#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif
#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm) ((rtm)->extModeInfo)
#endif
#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm) ((rtm)->zCCacheNeedsReset)
#endif
#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif
#ifndef rtmGetdX
#define rtmGetdX(rtm) ((rtm)->derivs)
#endif
#ifndef rtmSetdX
#define rtmSetdX(rtm, val) ((rtm)->derivs = (val))
#endif
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm) ((rtm)->errorStatus)
#endif
#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val) ((rtm)->errorStatus = (val))
#endif
#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm) ((rtm)->Timing.stopRequestedFlag)
#endif
#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif
#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm) (&((rtm)->Timing.stopRequestedFlag))
#endif
#ifndef rtmGetT
#define rtmGetT(rtm) (rtmGetTPtr((rtm))[_PIqWtbzrbQqv_KS_31HnE2])
#endif
#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm) ((rtm)->Timing.tFinal)
#endif
#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm) ((rtm)->Timing.t)
#endif
#define motor_model_updated_F21_22b_M (lfrct2x5ld)
typedef struct { int8_T pxi0cqx1iu ; } jx1r0yxak5 ; typedef struct { real_T
n5b1c1nmh2 ; real_T boyznkr11y ; real_T nbxlqdo2wt ; real_T klb2tuuwle ;
real_T ck0hv4ipqq ; real_T ljuvph33nb ; } p1j4infwxg ; typedef struct {
azmrjhajcr gbpecw2hoa ; hyi2xb4te3 ma5tkldzhd ; hyi2xb4te3 cxlgsor3xt ;
oksuujhotn nmfkanzkbq ; volatile real_T nwmsdrs2yw ; volatile real_T
ar0xc4bj30 ; real_T dxqfyf2a04 ; real_T abtfhezpmb ; real_T hnogkeu1uy ;
real_T odeztticrj ; real_T oiuuqpk4fw ; struct { void * LoggedData ; }
lkyr0khhkf ; volatile int8_T hz4ffulwtk ; volatile int8_T fbpwcvy5dc ;
volatile int8_T bu3l04zmde ; int8_T galjvkvynf ; int8_T gblxbfwzqo ; int8_T
d1dq0jspng ; int8_T p0ywykrqsq ; boolean_T dv5mitjrtj ; boolean_T b0dedfwlxz
; boolean_T o5ztmkhxun ; boolean_T dzez4uigql ; jx1r0yxak5 dy2bwzeyq4 ;
jx1r0yxak5 feztlbl33z ; jx1r0yxak5 c20b45dunrd ; } iyyoyzdncc ; typedef
struct { real_T n41xrs2krx ; } gpxooyszxm ; typedef struct { real_T
n41xrs2krx ; } jxbpiq0ovx ; typedef struct { boolean_T n41xrs2krx ; }
oxe4mwjsdi ;
#ifndef ODE4_INTG
#define ODE4_INTG
typedef struct { real_T * y ; real_T * f [ _g7WFphbd05O6bEjctOzUc1 ] ; }
ODE4_IntgData ;
#endif
typedef struct { real_T pqqhujxqmf ; } k50neeej04 ; struct btdy4ybyxn_ {
real_T Constant_Value ; real_T Constant1_Value ; } ; struct gahslbsqoms_ {
real_T DigitalInput_SampleTime ; real_T FixPtConstant_Value ; real_T
FixPtConstant_Value_bfmdjatjm4 ; real_T RateTransition1_InitialConditio ;
real_T angular_positionrelative_countC ; real_T desiredPosition_Value ;
real_T gain_Gain ; real_T Integrator1_IC ; real_T Kd_Gain ; real_T Ki_Gain ;
real_T Kp_Gain ; real_T Saturation_UpperSat ; real_T Saturation_LowerSat ;
real_T Gain_Gain ; real_T DataStoreMemory_InitialValue ; btdy4ybyxn
dy2bwzeyq4 ; btdy4ybyxn feztlbl33z ; btdy4ybyxn c20b45dunrd ; } ; struct
azumcfepkk { const char_T * errorStatus ; RTWExtModeInfo * extModeInfo ;
RTWSolverInfo solverInfo ; gpxooyszxm * contStates ; int_T *
periodicContStateIndices ; real_T * periodicContStateRanges ; real_T * derivs
; oxe4mwjsdi * contStateDisabled ; boolean_T zCCacheNeedsReset ; boolean_T
derivCacheNeedsReset ; boolean_T CTOutputIncnstWithState ; real_T odeY [
_QHNSjd8JBrVVYZAcs7Zm32 ] ; real_T odeF [ _g7WFphbd05O6bEjctOzUc1 ] [
_QHNSjd8JBrVVYZAcs7Zm32 ] ; ODE4_IntgData intgData ; struct { uint32_T
checksums [ _g7WFphbd05O6bEjctOzUc1 ] ; int_T numContStates ; int_T
numPeriodicContStates ; int_T numSampTimes ; } Sizes ; struct { const void *
mappingInfo ; } SpecialInfo ; struct { uint32_T clockTick0 ; uint32_T
clockTickH0 ; time_T stepSize0 ; uint32_T clockTick1 ; uint32_T clockTickH1 ;
uint32_T clockTick2 ; uint32_T clockTickH2 ; uint8_T rtmDbBufReadBuf2 ;
uint8_T rtmDbBufWriteBuf2 ; boolean_T rtmDbBufLastBufWr2 ; uint32_T
rtmDbBufClockTick2 [ _gN74BbsU5wqNjkJbC9b672 ] ; uint32_T rtmDbBufClockTickH2
[ _gN74BbsU5wqNjkJbC9b672 ] ; time_T tFinal ; SimTimeStep simTimeStep ;
boolean_T stopRequestedFlag ; time_T * t ; time_T tArray [
_nfvdmbxYkVXzXnpHyWwmg2 ] ; } Timing ; } ; extern gahslbsqoms gahslbsqom ;
extern p1j4infwxg p1j4infwxg1 ; extern gpxooyszxm gpxooyszxmc ; extern
iyyoyzdncc iyyoyzdnccr ; extern k50neeej04 iq2dr1fw0g ; extern void
motor_model_updated_F21_22b_initialize ( void ) ; extern void
motor_model_updated_F21_22b_step ( void ) ; extern void
motor_model_updated_F21_22b_terminate ( void ) ; extern c5ve25ehtr * const
lfrct2x5ld ; extern volatile boolean_T stopRequested ; extern volatile
boolean_T runModel ;
#endif
