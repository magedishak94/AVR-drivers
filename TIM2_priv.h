/*
 * TIM2_priv.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef TIM2_PRIV_H_
#define TIM2_PRIV_H_

#define NORMAL_MODE 0x00
#define PWM_PHASE_CORRECT 0x40
#define CTC_MODE 0x08
#define PWM_FAST 0x48


#define NORMAL 0x00
#define COM1 0x10
#define COM2 0x20
#define COM3 0x30

#define PRESCALER_1 0x01
#define PRESCALER_8 0x02
#define PRESCALER_32 0x03
#define PRESCALER_64 0x04
#define PRESCALER_128 0x05
#define PRESCALER_256 0x06
#define PRESCALER_1024 0x07

#define TCNT2 *((volatile u8*)0x44)
#define OCR2 *((volatile u8*)0x43)
#define TCCR2 *((volatile u8*)0x45)
#define TIMSK *((volatile u8*)0x59)
#define SREG *((volatile u8*)0x5f)

#define WGM20 6
#define WGM21 3
#define TOIE2 6
#define OCIE2 7

#endif /* TIM2_PRIV_H_ */
