#include "__cf_motor_model_updated_F21_22b.h"
#ifndef RTW_HEADER_motor_model_updated_F21_22b_private_h_
#define RTW_HEADER_motor_model_updated_F21_22b_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "motor_model_updated_F21_22b.h"
#include "motor_model_updated_F21_22b_types.h"
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm) (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif
#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm) (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val) ((rtm)->Timing.tFinal = (val))
#endif
#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val) ((rtm)->Timing.t = (val))
#endif
extern real_T rt_roundd_snf ( real_T u ) ; void MW_ISR_2 ( void ) ; extern
void c20b45dunr ( c5ve25ehtr * const lfrct2x5ld , real_T * ou0r0gxidv ,
real_T * ldkziqdov0 , btdy4ybyxn * localP ) ; extern void
motor_model_updated_F21_22b_derivatives ( void ) ;
#endif
