/*
 * TIM1_priv.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef TIM1_PRIV_H_
#define TIM1_PRIV_H_

#define COM0A 0x00
#define COM1A 0x40
#define COM2A 0x80
#define COM3A 0xc0

#define COM0B 0x00
#define COM1B 0x10
#define COM2B 0x20
#define COM3B 0x30

#define TIMER1_MODE0 0
#define TIMER1_MODE1 1
#define TIMER1_MODE2 2
#define TIMER1_MODE3 3
#define TIMER1_MODE4 4
#define TIMER1_MODE5 5
#define TIMER1_MODE6 6
#define TIMER1_MODE7 7
#define TIMER1_MODE8 8
#define TIMER1_MODE9 9
#define TIMER1_MODE10 10
#define TIMER1_MODE11 11
#define TIMER1_MODE12 12
#define TIMER1_MODE13 13
#define TIMER1_MODE14 14
#define TIMER1_MODE15 15

#define PRESCALER_1 0x01
#define PRESCALER_8 0x02
#define PRESCALER_64 0x03
#define PRESCALER_256 0x04
#define PRESCALER_1024 0x05
#define PRESCALER_EXT_CLK_F 0x06
#define PRESCALER_EXT_CLK_R 0x07



#define TCNT1 *((volatile u16*)0x4c)
#define OCR1A *((volatile u16*)0x4a)
#define OCR1B *((volatile u16*)0x48)
#define ICR1 *((volatile u16*)0x46)
#define TCCR1A *((volatile u8*)0x4f)
#define TCCR1B *((volatile u8*)0x4e)
#define TIMSK *((volatile u8*)0x59)
#define SREG *((volatile u8*)0x5f)

//TIMSK bits
#define TOIE1 2
#define TICIE1 5
#define OCIE1A 4
#define OCIE1B 3

#endif /* TIM1_PRIV_H_ */
