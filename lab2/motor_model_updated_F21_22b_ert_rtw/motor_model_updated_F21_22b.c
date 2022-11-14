#include "__cf_motor_model_updated_F21_22b.h"
#include "motor_model_updated_F21_22b.h"
#include "rtwtypes.h"
#include "motor_model_updated_F21_22b_private.h"
#include "motor_model_updated_F21_22b_types.h"
#include <math.h>
#include <string.h>
#include "rt_nonfinite.h"
p1j4infwxg p1j4infwxg1 ; gpxooyszxm gpxooyszxmc ; iyyoyzdncc iyyoyzdnccr ;
k50neeej04 iq2dr1fw0g ; static c5ve25ehtr lfrct2x5ld_ ; c5ve25ehtr * const
lfrct2x5ld = & lfrct2x5ld_ ; void MW_ISR_2 ( void ) { { srClearBC (
iyyoyzdnccr . p0ywykrqsq ) ; srClearBC ( iyyoyzdnccr . d1dq0jspng ) ;
srClearBC ( iyyoyzdnccr . gblxbfwzqo ) ; { boolean_T b_value ; switch (
lfrct2x5ld -> Timing . rtmDbBufWriteBuf2 ) { case _PIqWtbzrbQqv_KS_31HnE2 :
lfrct2x5ld -> Timing . rtmDbBufReadBuf2 = _QHNSjd8JBrVVYZAcs7Zm32 ; break ;
case _QHNSjd8JBrVVYZAcs7Zm32 : lfrct2x5ld -> Timing . rtmDbBufReadBuf2 =
_PIqWtbzrbQqv_KS_31HnE2 ; break ; default : lfrct2x5ld -> Timing .
rtmDbBufReadBuf2 = lfrct2x5ld -> Timing . rtmDbBufLastBufWr2 ; break ; }
lfrct2x5ld -> Timing . clockTick2 = lfrct2x5ld -> Timing . rtmDbBufClockTick2
[ lfrct2x5ld -> Timing . rtmDbBufReadBuf2 ] ; lfrct2x5ld -> Timing .
clockTickH2 = lfrct2x5ld -> Timing . rtmDbBufClockTickH2 [ lfrct2x5ld ->
Timing . rtmDbBufReadBuf2 ] ; lfrct2x5ld -> Timing . rtmDbBufReadBuf2 =
_7O6U2FsAWTyf_qMFaw_2L_ ; p1j4infwxg1 . ljuvph33nb = iyyoyzdnccr . oiuuqpk4fw
; if ( iyyoyzdnccr . gbpecw2hoa . SampleTime != gahslbsqom .
DigitalInput_SampleTime ) { iyyoyzdnccr . gbpecw2hoa . SampleTime =
gahslbsqom . DigitalInput_SampleTime ; } b_value = readDigitalPin (
_nfvdmbxYkVXzXnpHyWwmg2 ) ; if ( ! b_value ) { iyyoyzdnccr . oiuuqpk4fw +=
gahslbsqom . FixPtConstant_Value ; iyyoyzdnccr . p0ywykrqsq =
_g7WFphbd05O6bEjctOzUc1 ; } else { iyyoyzdnccr . oiuuqpk4fw -= gahslbsqom .
FixPtConstant_Value_bfmdjatjm4 ; iyyoyzdnccr . d1dq0jspng =
_g7WFphbd05O6bEjctOzUc1 ; } iyyoyzdnccr . gblxbfwzqo =
_g7WFphbd05O6bEjctOzUc1 ; } switch ( iyyoyzdnccr . fbpwcvy5dc ) { case
_PIqWtbzrbQqv_KS_31HnE2 : iyyoyzdnccr . hz4ffulwtk = _QHNSjd8JBrVVYZAcs7Zm32
; break ; case _QHNSjd8JBrVVYZAcs7Zm32 : iyyoyzdnccr . hz4ffulwtk =
_PIqWtbzrbQqv_KS_31HnE2 ; break ; default : iyyoyzdnccr . hz4ffulwtk = (
int8_T ) ( iyyoyzdnccr . bu3l04zmde == _PIqWtbzrbQqv_KS_31HnE2 ) ; break ; }
if ( iyyoyzdnccr . hz4ffulwtk != _PIqWtbzrbQqv_KS_31HnE2 ) { iyyoyzdnccr .
ar0xc4bj30 = p1j4infwxg1 . ljuvph33nb ; } else { iyyoyzdnccr . nwmsdrs2yw =
p1j4infwxg1 . ljuvph33nb ; } iyyoyzdnccr . bu3l04zmde = iyyoyzdnccr .
hz4ffulwtk ; iyyoyzdnccr . hz4ffulwtk = - _QHNSjd8JBrVVYZAcs7Zm32 ; } }
static void rt_ertODEUpdateContinuousStates ( RTWSolverInfo * si ) { time_T t
= rtsiGetT ( si ) ; time_T tnew = rtsiGetSolverStopTime ( si ) ; time_T h =
rtsiGetStepSize ( si ) ; real_T * x = rtsiGetContStates ( si ) ;
ODE4_IntgData * id = ( ODE4_IntgData * ) rtsiGetSolverData ( si ) ; real_T *
y = id -> y ; real_T * f0 = id -> f [ _PIqWtbzrbQqv_KS_31HnE2 ] ; real_T * f1
= id -> f [ _QHNSjd8JBrVVYZAcs7Zm32 ] ; real_T * f2 = id -> f [
_gN74BbsU5wqNjkJbC9b672 ] ; real_T * f3 = id -> f [ _nfvdmbxYkVXzXnpHyWwmg2 ]
; real_T temp ; int_T i ; int_T nXc = _QHNSjd8JBrVVYZAcs7Zm32 ;
rtsiSetSimTimeStep ( si , MINOR_TIME_STEP ) ; ( void ) memcpy ( y , x , (
uint_T ) nXc * sizeof ( real_T ) ) ; rtsiSetdX ( si , f0 ) ;
motor_model_updated_F21_22b_derivatives ( ) ; temp = _IE_h0ySUMKhEY_mtQbaOn_
* h ; for ( i = _PIqWtbzrbQqv_KS_31HnE2 ; i < nXc ; i ++ ) { x [ i ] = y [ i
] + ( temp * f0 [ i ] ) ; } rtsiSetT ( si , t + temp ) ; rtsiSetdX ( si , f1
) ; motor_model_updated_F21_22b_step ( ) ;
motor_model_updated_F21_22b_derivatives ( ) ; for ( i =
_PIqWtbzrbQqv_KS_31HnE2 ; i < nXc ; i ++ ) { x [ i ] = y [ i ] + ( temp * f1
[ i ] ) ; } rtsiSetdX ( si , f2 ) ; motor_model_updated_F21_22b_step ( ) ;
motor_model_updated_F21_22b_derivatives ( ) ; for ( i =
_PIqWtbzrbQqv_KS_31HnE2 ; i < nXc ; i ++ ) { x [ i ] = y [ i ] + ( h * f2 [ i
] ) ; } rtsiSetT ( si , tnew ) ; rtsiSetdX ( si , f3 ) ;
motor_model_updated_F21_22b_step ( ) ;
motor_model_updated_F21_22b_derivatives ( ) ; temp = h /
_j70tR3aLfEVetsFUXmWMd2 ; for ( i = _PIqWtbzrbQqv_KS_31HnE2 ; i < nXc ; i ++
) { x [ i ] = y [ i ] + temp * ( f0 [ i ] + _IfqgJOo_0kGGrK4yerXJx_ * f1 [ i
] + _IfqgJOo_0kGGrK4yerXJx_ * f2 [ i ] + f3 [ i ] ) ; } rtsiSetSimTimeStep (
si , MAJOR_TIME_STEP ) ; } void c20b45dunr ( c5ve25ehtr * const lfrct2x5ld ,
real_T * ou0r0gxidv , real_T * ldkziqdov0 , btdy4ybyxn * localP ) { if (
rtmIsMajorTimeStep ( lfrct2x5ld ) ) { * ou0r0gxidv = localP -> Constant_Value
; * ldkziqdov0 = localP -> Constant1_Value ; } } real_T rt_roundd_snf (
real_T u ) { real_T y ; if ( fabs ( u ) < _mf_qXIpI67Q5cqiNut81q2 ) { if ( u
>= _IE_h0ySUMKhEY_mtQbaOn_ ) { y = floor ( u + _IE_h0ySUMKhEY_mtQbaOn_ ) ; }
else if ( u > - _IE_h0ySUMKhEY_mtQbaOn_ ) { y = u * _Z77Ee2RGrs6HvPP38e_Kk_ ;
} else { y = ceil ( u - _IE_h0ySUMKhEY_mtQbaOn_ ) ; } } else { y = u ; }
return y ; } void motor_model_updated_F21_22b_step ( void ) { real_T
deeueshoer ; real_T hgsjdu0zw4 ; if ( rtmIsMajorTimeStep ( lfrct2x5ld ) ) {
if ( ! ( lfrct2x5ld -> Timing . clockTick0 + _QHNSjd8JBrVVYZAcs7Zm32 ) ) {
rtsiSetSolverStopTime ( & lfrct2x5ld -> solverInfo , ( ( lfrct2x5ld -> Timing
. clockTickH0 + _QHNSjd8JBrVVYZAcs7Zm32 ) * lfrct2x5ld -> Timing . stepSize0
* _Nn3DUUbvuyRrgaA48_gSO0 ) ) ; } else { rtsiSetSolverStopTime ( & lfrct2x5ld
-> solverInfo , ( ( lfrct2x5ld -> Timing . clockTick0 +
_QHNSjd8JBrVVYZAcs7Zm32 ) * lfrct2x5ld -> Timing . stepSize0 + lfrct2x5ld ->
Timing . clockTickH0 * lfrct2x5ld -> Timing . stepSize0 *
_Nn3DUUbvuyRrgaA48_gSO0 ) ) ; } } if ( rtmIsMinorTimeStep ( lfrct2x5ld ) ) {
lfrct2x5ld -> Timing . t [ _PIqWtbzrbQqv_KS_31HnE2 ] = rtsiGetT ( &
lfrct2x5ld -> solverInfo ) ; } { oksuujhotn * obj ; real_T csnddxunk4 ;
real_T hsv1xpdwst ; real_T * lastU ; uint8_T tmp ; srClearBC ( iyyoyzdnccr .
c20b45dunrd . pxi0cqx1iu ) ; if ( rtmIsMajorTimeStep ( lfrct2x5ld ) ) {
switch ( iyyoyzdnccr . hz4ffulwtk ) { case _PIqWtbzrbQqv_KS_31HnE2 :
iyyoyzdnccr . fbpwcvy5dc = _QHNSjd8JBrVVYZAcs7Zm32 ; break ; case
_QHNSjd8JBrVVYZAcs7Zm32 : iyyoyzdnccr . fbpwcvy5dc = _PIqWtbzrbQqv_KS_31HnE2
; break ; default : iyyoyzdnccr . fbpwcvy5dc = iyyoyzdnccr . bu3l04zmde ;
break ; } if ( iyyoyzdnccr . fbpwcvy5dc != _PIqWtbzrbQqv_KS_31HnE2 ) {
p1j4infwxg1 . n5b1c1nmh2 = iyyoyzdnccr . ar0xc4bj30 ; } else { p1j4infwxg1 .
n5b1c1nmh2 = iyyoyzdnccr . nwmsdrs2yw ; } iyyoyzdnccr . fbpwcvy5dc = -
_QHNSjd8JBrVVYZAcs7Zm32 ; p1j4infwxg1 . boyznkr11y = gahslbsqom .
angular_positionrelative_countC * p1j4infwxg1 . n5b1c1nmh2 ; iq2dr1fw0g .
pqqhujxqmf = p1j4infwxg1 . boyznkr11y ; p1j4infwxg1 . nbxlqdo2wt = gahslbsqom
. gain_Gain * gahslbsqom . desiredPosition_Value - p1j4infwxg1 . boyznkr11y ;
} csnddxunk4 = lfrct2x5ld -> Timing . t [ _PIqWtbzrbQqv_KS_31HnE2 ] ; if ( (
iyyoyzdnccr . dxqfyf2a04 >= csnddxunk4 ) && ( iyyoyzdnccr . hnogkeu1uy >=
csnddxunk4 ) ) { csnddxunk4 = _Z77Ee2RGrs6HvPP38e_Kk_ ; } else { hsv1xpdwst =
iyyoyzdnccr . dxqfyf2a04 ; lastU = & iyyoyzdnccr . abtfhezpmb ; if (
iyyoyzdnccr . dxqfyf2a04 < iyyoyzdnccr . hnogkeu1uy ) { if ( iyyoyzdnccr .
hnogkeu1uy < csnddxunk4 ) { hsv1xpdwst = iyyoyzdnccr . hnogkeu1uy ; lastU = &
iyyoyzdnccr . odeztticrj ; } } else if ( iyyoyzdnccr . dxqfyf2a04 >=
csnddxunk4 ) { hsv1xpdwst = iyyoyzdnccr . hnogkeu1uy ; lastU = & iyyoyzdnccr
. odeztticrj ; } csnddxunk4 = ( p1j4infwxg1 . nbxlqdo2wt - * lastU ) / (
csnddxunk4 - hsv1xpdwst ) ; } if ( rtmIsMajorTimeStep ( lfrct2x5ld ) ) {
p1j4infwxg1 . klb2tuuwle = gahslbsqom . Kp_Gain * p1j4infwxg1 . nbxlqdo2wt ;
} hsv1xpdwst = ( gahslbsqom . Kd_Gain * csnddxunk4 + p1j4infwxg1 . klb2tuuwle
) + gahslbsqom . Ki_Gain * gpxooyszxmc . n41xrs2krx ; if ( hsv1xpdwst >
gahslbsqom . Saturation_UpperSat ) { hsv1xpdwst = gahslbsqom .
Saturation_UpperSat ; } else if ( hsv1xpdwst < gahslbsqom .
Saturation_LowerSat ) { hsv1xpdwst = gahslbsqom . Saturation_LowerSat ; } if
( rtmIsMajorTimeStep ( lfrct2x5ld ) ) { p1j4infwxg1 . ck0hv4ipqq = fabs (
p1j4infwxg1 . nbxlqdo2wt ) ; } if ( rtsiIsModeUpdateTimeStep ( & lfrct2x5ld
-> solverInfo ) ) { if ( ( hsv1xpdwst > _Z77Ee2RGrs6HvPP38e_Kk_ ) && (
p1j4infwxg1 . ck0hv4ipqq > __HOkNYCCIgIkrPMzfarLc2 ) ) { iyyoyzdnccr .
galjvkvynf = _PIqWtbzrbQqv_KS_31HnE2 ; } else if ( ( hsv1xpdwst <
_Z77Ee2RGrs6HvPP38e_Kk_ ) && ( p1j4infwxg1 . ck0hv4ipqq >
__HOkNYCCIgIkrPMzfarLc2 ) ) { iyyoyzdnccr . galjvkvynf =
_QHNSjd8JBrVVYZAcs7Zm32 ; } else { iyyoyzdnccr . galjvkvynf =
_gN74BbsU5wqNjkJbC9b672 ; } } switch ( iyyoyzdnccr . galjvkvynf ) { case
_PIqWtbzrbQqv_KS_31HnE2 : c20b45dunr ( lfrct2x5ld , & deeueshoer , &
hgsjdu0zw4 , & gahslbsqom . c20b45dunrd ) ; if ( rtsiIsModeUpdateTimeStep ( &
lfrct2x5ld -> solverInfo ) ) { srUpdateBC ( iyyoyzdnccr . c20b45dunrd .
pxi0cqx1iu ) ; } break ; case _QHNSjd8JBrVVYZAcs7Zm32 : c20b45dunr (
lfrct2x5ld , & deeueshoer , & hgsjdu0zw4 , & gahslbsqom . feztlbl33z ) ; if (
rtsiIsModeUpdateTimeStep ( & lfrct2x5ld -> solverInfo ) ) { srUpdateBC (
iyyoyzdnccr . feztlbl33z . pxi0cqx1iu ) ; } break ; case
_gN74BbsU5wqNjkJbC9b672 : c20b45dunr ( lfrct2x5ld , & deeueshoer , &
hgsjdu0zw4 , & gahslbsqom . dy2bwzeyq4 ) ; if ( rtsiIsModeUpdateTimeStep ( &
lfrct2x5ld -> solverInfo ) ) { srUpdateBC ( iyyoyzdnccr . dy2bwzeyq4 .
pxi0cqx1iu ) ; } break ; } if ( rtmIsMajorTimeStep ( lfrct2x5ld ) ) {
csnddxunk4 = rt_roundd_snf ( deeueshoer ) ; if ( csnddxunk4 <
_mV7fMPW7aO3s7_nIRdzCv1 ) { if ( csnddxunk4 >= _Z77Ee2RGrs6HvPP38e_Kk_ ) {
tmp = ( uint8_T ) csnddxunk4 ; } else { tmp = _TPQ_vWWUSL7ze3htINC_W2 ; } }
else { tmp = MAX_uint8_T ; } writeDigitalPin ( _DAG_z8fBSYjaJVcUDUiMZ2 , tmp
) ; csnddxunk4 = rt_roundd_snf ( hgsjdu0zw4 ) ; if ( csnddxunk4 <
_mV7fMPW7aO3s7_nIRdzCv1 ) { if ( csnddxunk4 >= _Z77Ee2RGrs6HvPP38e_Kk_ ) {
tmp = ( uint8_T ) csnddxunk4 ; } else { tmp = _TPQ_vWWUSL7ze3htINC_W2 ; } }
else { tmp = MAX_uint8_T ; } writeDigitalPin ( _twekz_AtpqV2WHHkFFD642 , tmp
) ; } obj = & iyyoyzdnccr . nmfkanzkbq ; obj -> PWMDriverObj . MW_PWM_HANDLE
= MW_PWM_GetHandle ( _oho4IRBL1w96cw4aDL6ec2 ) ; csnddxunk4 = gahslbsqom .
Gain_Gain * fabs ( hsv1xpdwst ) ; if ( ! ( csnddxunk4 <=
_TX0w66L1XZtKXwhz3nT5Q0 ) ) { csnddxunk4 = _TX0w66L1XZtKXwhz3nT5Q0 ; } if ( !
( csnddxunk4 >= _Z77Ee2RGrs6HvPP38e_Kk_ ) ) { csnddxunk4 =
_Z77Ee2RGrs6HvPP38e_Kk_ ; } MW_PWM_SetDutyCycle ( iyyoyzdnccr . nmfkanzkbq .
PWMDriverObj . MW_PWM_HANDLE , csnddxunk4 ) ; } if ( rtmIsMajorTimeStep (
lfrct2x5ld ) ) { real_T * lastU ; if ( iyyoyzdnccr . dxqfyf2a04 == ( rtInf )
) { iyyoyzdnccr . dxqfyf2a04 = lfrct2x5ld -> Timing . t [
_PIqWtbzrbQqv_KS_31HnE2 ] ; lastU = & iyyoyzdnccr . abtfhezpmb ; } else if (
iyyoyzdnccr . hnogkeu1uy == ( rtInf ) ) { iyyoyzdnccr . hnogkeu1uy =
lfrct2x5ld -> Timing . t [ _PIqWtbzrbQqv_KS_31HnE2 ] ; lastU = & iyyoyzdnccr
. odeztticrj ; } else if ( iyyoyzdnccr . dxqfyf2a04 < iyyoyzdnccr .
hnogkeu1uy ) { iyyoyzdnccr . dxqfyf2a04 = lfrct2x5ld -> Timing . t [
_PIqWtbzrbQqv_KS_31HnE2 ] ; lastU = & iyyoyzdnccr . abtfhezpmb ; } else {
iyyoyzdnccr . hnogkeu1uy = lfrct2x5ld -> Timing . t [ _PIqWtbzrbQqv_KS_31HnE2
] ; lastU = & iyyoyzdnccr . odeztticrj ; } * lastU = p1j4infwxg1 . nbxlqdo2wt
; { extmodeErrorCode_T errorCode = EXTMODE_SUCCESS ; extmodeSimulationTime_T
currentTime = ( extmodeSimulationTime_T ) ( ( ( lfrct2x5ld -> Timing .
clockTick0 + lfrct2x5ld -> Timing . clockTickH0 * _Nn3DUUbvuyRrgaA48_gSO0 ) *
_QHNSjd8JBrVVYZAcs7Zm32 ) + _PIqWtbzrbQqv_KS_31HnE2 ) ; errorCode =
extmodeEvent ( _PIqWtbzrbQqv_KS_31HnE2 , currentTime ) ; if ( errorCode !=
EXTMODE_SUCCESS ) { } } if ( rtmIsMajorTimeStep ( lfrct2x5ld ) ) {
extmodeErrorCode_T errorCode = EXTMODE_SUCCESS ; extmodeSimulationTime_T
currentTime = ( extmodeSimulationTime_T ) ( ( ( lfrct2x5ld -> Timing .
clockTick1 + lfrct2x5ld -> Timing . clockTickH1 * _Nn3DUUbvuyRrgaA48_gSO0 ) *
_QHNSjd8JBrVVYZAcs7Zm32 ) + _PIqWtbzrbQqv_KS_31HnE2 ) ; errorCode =
extmodeEvent ( _QHNSjd8JBrVVYZAcs7Zm32 , currentTime ) ; if ( errorCode !=
EXTMODE_SUCCESS ) { } } } if ( rtmIsMajorTimeStep ( lfrct2x5ld ) ) {
rt_ertODEUpdateContinuousStates ( & lfrct2x5ld -> solverInfo ) ; if ( ! ( ++
lfrct2x5ld -> Timing . clockTick0 ) ) { ++ lfrct2x5ld -> Timing . clockTickH0
; } lfrct2x5ld -> Timing . t [ _PIqWtbzrbQqv_KS_31HnE2 ] =
rtsiGetSolverStopTime ( & lfrct2x5ld -> solverInfo ) ; { lfrct2x5ld -> Timing
. clockTick1 ++ ; if ( ! lfrct2x5ld -> Timing . clockTick1 ) { lfrct2x5ld ->
Timing . clockTickH1 ++ ; } } switch ( lfrct2x5ld -> Timing .
rtmDbBufReadBuf2 ) { case _PIqWtbzrbQqv_KS_31HnE2 : lfrct2x5ld -> Timing .
rtmDbBufWriteBuf2 = _QHNSjd8JBrVVYZAcs7Zm32 ; break ; case
_QHNSjd8JBrVVYZAcs7Zm32 : lfrct2x5ld -> Timing . rtmDbBufWriteBuf2 =
_PIqWtbzrbQqv_KS_31HnE2 ; break ; default : lfrct2x5ld -> Timing .
rtmDbBufWriteBuf2 = ! lfrct2x5ld -> Timing . rtmDbBufLastBufWr2 ; break ; }
lfrct2x5ld -> Timing . rtmDbBufClockTick2 [ lfrct2x5ld -> Timing .
rtmDbBufWriteBuf2 ] = lfrct2x5ld -> Timing . clockTick0 ; lfrct2x5ld ->
Timing . rtmDbBufClockTickH2 [ lfrct2x5ld -> Timing . rtmDbBufWriteBuf2 ] =
lfrct2x5ld -> Timing . clockTickH0 ; lfrct2x5ld -> Timing .
rtmDbBufLastBufWr2 = lfrct2x5ld -> Timing . rtmDbBufWriteBuf2 ; lfrct2x5ld ->
Timing . rtmDbBufWriteBuf2 = _7O6U2FsAWTyf_qMFaw_2L_ ; } } void
motor_model_updated_F21_22b_derivatives ( void ) { jxbpiq0ovx * _rtXdot ;
_rtXdot = ( ( jxbpiq0ovx * ) lfrct2x5ld -> derivs ) ; _rtXdot -> n41xrs2krx =
p1j4infwxg1 . nbxlqdo2wt ; } void motor_model_updated_F21_22b_initialize (
void ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void *
) lfrct2x5ld , _PIqWtbzrbQqv_KS_31HnE2 , sizeof ( c5ve25ehtr ) ) ; {
rtsiSetSimTimeStepPtr ( & lfrct2x5ld -> solverInfo , & lfrct2x5ld -> Timing .
simTimeStep ) ; rtsiSetTPtr ( & lfrct2x5ld -> solverInfo , & rtmGetTPtr (
lfrct2x5ld ) ) ; rtsiSetStepSizePtr ( & lfrct2x5ld -> solverInfo , &
lfrct2x5ld -> Timing . stepSize0 ) ; rtsiSetdXPtr ( & lfrct2x5ld ->
solverInfo , & lfrct2x5ld -> derivs ) ; rtsiSetContStatesPtr ( & lfrct2x5ld
-> solverInfo , ( real_T * * ) & lfrct2x5ld -> contStates ) ;
rtsiSetNumContStatesPtr ( & lfrct2x5ld -> solverInfo , & lfrct2x5ld -> Sizes
. numContStates ) ; rtsiSetNumPeriodicContStatesPtr ( & lfrct2x5ld ->
solverInfo , & lfrct2x5ld -> Sizes . numPeriodicContStates ) ;
rtsiSetPeriodicContStateIndicesPtr ( & lfrct2x5ld -> solverInfo , &
lfrct2x5ld -> periodicContStateIndices ) ; rtsiSetPeriodicContStateRangesPtr
( & lfrct2x5ld -> solverInfo , & lfrct2x5ld -> periodicContStateRanges ) ;
rtsiSetErrorStatusPtr ( & lfrct2x5ld -> solverInfo , ( & rtmGetErrorStatus (
lfrct2x5ld ) ) ) ; rtsiSetRTModelPtr ( & lfrct2x5ld -> solverInfo ,
lfrct2x5ld ) ; } rtsiSetSimTimeStep ( & lfrct2x5ld -> solverInfo ,
MAJOR_TIME_STEP ) ; lfrct2x5ld -> intgData . y = lfrct2x5ld -> odeY ;
lfrct2x5ld -> intgData . f [ _PIqWtbzrbQqv_KS_31HnE2 ] = lfrct2x5ld -> odeF [
_PIqWtbzrbQqv_KS_31HnE2 ] ; lfrct2x5ld -> intgData . f [
_QHNSjd8JBrVVYZAcs7Zm32 ] = lfrct2x5ld -> odeF [ _QHNSjd8JBrVVYZAcs7Zm32 ] ;
lfrct2x5ld -> intgData . f [ _gN74BbsU5wqNjkJbC9b672 ] = lfrct2x5ld -> odeF [
_gN74BbsU5wqNjkJbC9b672 ] ; lfrct2x5ld -> intgData . f [
_nfvdmbxYkVXzXnpHyWwmg2 ] = lfrct2x5ld -> odeF [ _nfvdmbxYkVXzXnpHyWwmg2 ] ;
lfrct2x5ld -> contStates = ( ( gpxooyszxm * ) & gpxooyszxmc ) ;
rtsiSetSolverData ( & lfrct2x5ld -> solverInfo , ( void * ) & lfrct2x5ld ->
intgData ) ; rtsiSetIsMinorTimeStepWithModeChange ( & lfrct2x5ld ->
solverInfo , false ) ; rtsiSetSolverName ( & lfrct2x5ld -> solverInfo ,
"ode4" ) ; rtmSetTPtr ( lfrct2x5ld , & lfrct2x5ld -> Timing . tArray [
_PIqWtbzrbQqv_KS_31HnE2 ] ) ; rtmSetTFinal ( lfrct2x5ld , -
_QHNSjd8JBrVVYZAcs7Zm32 ) ; lfrct2x5ld -> Timing . stepSize0 =
_ejJFkqxLkFf8z5s0UH9rX0 ; lfrct2x5ld -> Sizes . checksums [
_PIqWtbzrbQqv_KS_31HnE2 ] = ( _NIvxMkysKSTJT7Pk5mWa81 ) ; lfrct2x5ld -> Sizes
. checksums [ _QHNSjd8JBrVVYZAcs7Zm32 ] = ( _mbH5o_3nyR2mJcDPVl0aU_ ) ;
lfrct2x5ld -> Sizes . checksums [ _gN74BbsU5wqNjkJbC9b672 ] = (
_0sX69SHGz7XYup_u6hn8c1 ) ; lfrct2x5ld -> Sizes . checksums [
_nfvdmbxYkVXzXnpHyWwmg2 ] = ( _Qd3d7iCvsAz6x7r563S6S0 ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [
_9rHO1ek1Om1saeRq2pf3_0 ] ; lfrct2x5ld -> extModeInfo = ( & rt_ExtModeInfo )
; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ _PIqWtbzrbQqv_KS_31HnE2 ] = & rtAlwaysEnabled ; systemRan [
_QHNSjd8JBrVVYZAcs7Zm32 ] = ( sysRanDType * ) & iyyoyzdnccr . dy2bwzeyq4 .
pxi0cqx1iu ; systemRan [ _gN74BbsU5wqNjkJbC9b672 ] = ( sysRanDType * ) &
iyyoyzdnccr . d1dq0jspng ; systemRan [ _nfvdmbxYkVXzXnpHyWwmg2 ] = (
sysRanDType * ) & iyyoyzdnccr . gblxbfwzqo ; systemRan [
_g7WFphbd05O6bEjctOzUc1 ] = ( sysRanDType * ) & iyyoyzdnccr . p0ywykrqsq ;
systemRan [ _KYlcoOk9rSSGYswizhYqZ2 ] = ( sysRanDType * ) & iyyoyzdnccr .
gblxbfwzqo ; systemRan [ _RAQgyWVtpyqfEVcLRZFTL_ ] = & rtAlwaysEnabled ;
systemRan [ _2KXuAphrqc_TLcinUGD4E1 ] = & rtAlwaysEnabled ; systemRan [
_hCXUd_x6pbKZfXtyKXEw82 ] = & rtAlwaysEnabled ; systemRan [
_aoel664zPcTjzpXADn7l40 ] = ( sysRanDType * ) & iyyoyzdnccr . feztlbl33z .
pxi0cqx1iu ; systemRan [ _IjHdoOm5hGk4VAbwwsvcL1 ] = ( sysRanDType * ) &
iyyoyzdnccr . c20b45dunrd . pxi0cqx1iu ; rteiSetModelMappingInfoPtr (
lfrct2x5ld -> extModeInfo , & lfrct2x5ld -> SpecialInfo . mappingInfo ) ;
rteiSetChecksumsPtr ( lfrct2x5ld -> extModeInfo , lfrct2x5ld -> Sizes .
checksums ) ; rteiSetTPtr ( lfrct2x5ld -> extModeInfo , rtmGetTPtr (
lfrct2x5ld ) ) ; } ( void ) memset ( ( ( void * ) & p1j4infwxg1 ) ,
_PIqWtbzrbQqv_KS_31HnE2 , sizeof ( p1j4infwxg ) ) ; { ( void ) memset ( (
void * ) & gpxooyszxmc , _PIqWtbzrbQqv_KS_31HnE2 , sizeof ( gpxooyszxm ) ) ;
} ( void ) memset ( ( void * ) & iyyoyzdnccr , _PIqWtbzrbQqv_KS_31HnE2 ,
sizeof ( iyyoyzdncc ) ) ; iq2dr1fw0g . pqqhujxqmf = _Z77Ee2RGrs6HvPP38e_Kk_ ;
{ oksuujhotn * obj ; iyyoyzdnccr . gbpecw2hoa . matlabCodegenIsDeleted =
false ; iyyoyzdnccr . dv5mitjrtj = true ; iyyoyzdnccr . gbpecw2hoa .
SampleTime = gahslbsqom . DigitalInput_SampleTime ; iyyoyzdnccr . gbpecw2hoa
. isInitialized = _mR8zwDRVQf6fD24pj1BlT1 ; digitalIOSetup (
_nfvdmbxYkVXzXnpHyWwmg2 , _PIqWtbzrbQqv_KS_31HnE2 ) ; iyyoyzdnccr .
gbpecw2hoa . isSetupComplete = true ; pinMode ( _gN74BbsU5wqNjkJbC9b672 ,
INPUT_PULLUP ) ; attachInterrupt ( digitalPinToInterrupt (
_gN74BbsU5wqNjkJbC9b672 ) , & MW_ISR_2 , RISING ) ; iyyoyzdnccr . galjvkvynf
= - _QHNSjd8JBrVVYZAcs7Zm32 ; iyyoyzdnccr . cxlgsor3xt .
matlabCodegenIsDeleted = false ; iyyoyzdnccr . dzez4uigql = true ;
iyyoyzdnccr . cxlgsor3xt . isInitialized = _mR8zwDRVQf6fD24pj1BlT1 ;
digitalIOSetup ( _DAG_z8fBSYjaJVcUDUiMZ2 , _QHNSjd8JBrVVYZAcs7Zm32 ) ;
iyyoyzdnccr . cxlgsor3xt . isSetupComplete = true ; iyyoyzdnccr . ma5tkldzhd
. matlabCodegenIsDeleted = false ; iyyoyzdnccr . o5ztmkhxun = true ;
iyyoyzdnccr . ma5tkldzhd . isInitialized = _mR8zwDRVQf6fD24pj1BlT1 ;
digitalIOSetup ( _twekz_AtpqV2WHHkFFD642 , _QHNSjd8JBrVVYZAcs7Zm32 ) ;
iyyoyzdnccr . ma5tkldzhd . isSetupComplete = true ; iyyoyzdnccr . nmfkanzkbq
. matlabCodegenIsDeleted = false ; iyyoyzdnccr . b0dedfwlxz = true ; obj = &
iyyoyzdnccr . nmfkanzkbq ; iyyoyzdnccr . nmfkanzkbq . isInitialized =
_mR8zwDRVQf6fD24pj1BlT1 ; obj -> PWMDriverObj . MW_PWM_HANDLE = MW_PWM_Open (
_oho4IRBL1w96cw4aDL6ec2 , _Z77Ee2RGrs6HvPP38e_Kk_ , _Z77Ee2RGrs6HvPP38e_Kk_ )
; iyyoyzdnccr . nmfkanzkbq . isSetupComplete = true ; iyyoyzdnccr .
oiuuqpk4fw = gahslbsqom . DataStoreMemory_InitialValue ; } lfrct2x5ld ->
Timing . rtmDbBufReadBuf2 = _7O6U2FsAWTyf_qMFaw_2L_ ; lfrct2x5ld -> Timing .
rtmDbBufWriteBuf2 = _7O6U2FsAWTyf_qMFaw_2L_ ; lfrct2x5ld -> Timing .
rtmDbBufLastBufWr2 = _PIqWtbzrbQqv_KS_31HnE2 ; iyyoyzdnccr . nwmsdrs2yw =
gahslbsqom . RateTransition1_InitialConditio ; iyyoyzdnccr . hz4ffulwtk = -
_QHNSjd8JBrVVYZAcs7Zm32 ; iyyoyzdnccr . fbpwcvy5dc = -
_QHNSjd8JBrVVYZAcs7Zm32 ; iyyoyzdnccr . dxqfyf2a04 = ( rtInf ) ; iyyoyzdnccr
. hnogkeu1uy = ( rtInf ) ; gpxooyszxmc . n41xrs2krx = gahslbsqom .
Integrator1_IC ; } void motor_model_updated_F21_22b_terminate ( void ) {
oksuujhotn * obj ; if ( ! iyyoyzdnccr . gbpecw2hoa . matlabCodegenIsDeleted )
{ iyyoyzdnccr . gbpecw2hoa . matlabCodegenIsDeleted = true ; } if ( !
iyyoyzdnccr . cxlgsor3xt . matlabCodegenIsDeleted ) { iyyoyzdnccr .
cxlgsor3xt . matlabCodegenIsDeleted = true ; } if ( ! iyyoyzdnccr .
ma5tkldzhd . matlabCodegenIsDeleted ) { iyyoyzdnccr . ma5tkldzhd .
matlabCodegenIsDeleted = true ; } obj = & iyyoyzdnccr . nmfkanzkbq ; if ( !
iyyoyzdnccr . nmfkanzkbq . matlabCodegenIsDeleted ) { iyyoyzdnccr .
nmfkanzkbq . matlabCodegenIsDeleted = true ; if ( ( iyyoyzdnccr . nmfkanzkbq
. isInitialized == _mR8zwDRVQf6fD24pj1BlT1 ) && iyyoyzdnccr . nmfkanzkbq .
isSetupComplete ) { obj -> PWMDriverObj . MW_PWM_HANDLE = MW_PWM_GetHandle (
_oho4IRBL1w96cw4aDL6ec2 ) ; MW_PWM_SetDutyCycle ( iyyoyzdnccr . nmfkanzkbq .
PWMDriverObj . MW_PWM_HANDLE , _Z77Ee2RGrs6HvPP38e_Kk_ ) ; obj ->
PWMDriverObj . MW_PWM_HANDLE = MW_PWM_GetHandle ( _oho4IRBL1w96cw4aDL6ec2 ) ;
MW_PWM_Close ( iyyoyzdnccr . nmfkanzkbq . PWMDriverObj . MW_PWM_HANDLE ) ; }
} }
