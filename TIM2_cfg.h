/*
 * TIM2_cfg.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef TIM2_CFG_H_
#define TIM2_CFG_H_

//values accepted NORMAL_MODE ,CTC_MODE,PWM_PHASE_CORRECT,PWM_FAST
#define TIMER_MODE PWM_FAST
//values accepted 1 8 32 64 256 1024
#define PRESCALER_SELECT PRESCALER_1
//values accepted NORMAL,COM1,COM2,COM3
#define COM_MODE COM2
//enable interrupts ->1     disable interrupts ->0
#define TIM2_OVF_INT 0
#define TIM2_COMPMATCH_INT 0

#endif /* TIM2_CFG_H_ */
