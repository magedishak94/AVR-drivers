/*
 * EXTI_int.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef EXTI_INT_H_
#define EXTI_INT_H_
//interrupt Triggers
#define LOW_LEVEL 0
#define LOGICAL_CHANGE 1
#define FALLING_EDGE 2
#define RISING_EDGE 3
//interrupt num
#define INT1 7
#define INT0 6
#define INT2 5

void EXTI_Setinterrupt(u8 num,u8 trigger);

#endif /* EXTI_INT_H_ */
