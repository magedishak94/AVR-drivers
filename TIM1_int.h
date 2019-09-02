/*
 * TIM1_int.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef TIM1_INT_H_
#define TIM1_INT_H_

void TIM1_vidInit(void);
void TIM1_vidSetTimerval(u16 u16CNT);
void TIM1_vidSetTimerCmpVal_A(u16 u16CNT);
void TIM1_vidSetTimerCmpVal_B(u16 u16CNT);
void TIM1_vidsetICR1val(u16 u16CNT);

#define TIM1_INCAP_RISING SET_BIT(TCCR1B,6)
#define TIM1_INCAP_FALLING CLR_BIT(TCCR1B,6)
#endif /* TIM1_INT_H_ */
