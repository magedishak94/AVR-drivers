/*
 * TIM1_cfg.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef TIM1_CFG_H_
#define TIM1_CFG_H_
/*
 Timer1 Modes of operation :

Mode Timer/Counter Mode of                     TOP    Update of  TOV1 Flag Set
            Operation                                   OCR1x       on
-----------------------------------------------------------------------------------
0    Normal                                    0xFFFF  Immediate     MAX
1    PWM, Phase Correct, 8-bit                 0x00FF  TOP           BOTTOM
2    PWM, Phase Correct, 9-bit                 0x01FF  TOP           BOTTOM
3    PWM, Phase Correct, 10-bit                0x03FF  TOP           BOTTOM
4    CTC                                       OCR1A   Immediate     MAX
5    Fast PWM, 8-bit                           0x00FF  TOP           TOP
6    Fast PWM, 9-bit                           0x01FF  TOP           TOP
7    Fast PWM, 10-bit                          0x03FF  TOP           TOP
8    PWM, Phase and Frequency Correct          ICR1    BOTTOM        BOTTOM
9    PWM, Phase and Frequency Correct          OCR1A   BOTTOM        BOTTOM
10   PWM, Phase Correct                        ICR1    TOP           BOTTOM
11   PWM, Phase Correct                        OCR1A   TOP           BOTTOM
12   CTC                                       ICR1    Immediate     MAX
13   Reserved                                   –        –           –
14   Fast PWM                                  ICR1    TOP           TOP
15   Fast PWM                                  OCR1A   TOP           TOP
---------------------------------------------------------------------------------*/

//values accepted TIMER1_MODE0-->TIMER1_MODE15
#define TIMER_MODE TIMER1_MODE0
//values accepted 1 8 64 256 1024
#define PRESCALER_SELECT PRESCALER_8
//values accepted COM0A,COM1A,COM2A,COM3A
#define COM_MODE_A COM0A
//values accepted COM0B,COM1B,COM2B,COM3B
#define COM_MODE_B COM0B
//enable interrupts ->1     disable interrupts ->0
#define TIM1_OVF_INT 0
#define TIM1_COMPMATCHA_INT 0
#define TIM1_COMPMATCHB_INT 0
#define TIM1_INPUT_CAP_INT 1

#endif /* TIM1_CFG_H_ */
