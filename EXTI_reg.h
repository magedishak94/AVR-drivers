/*
 * EXTI_reg.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef EXTI_REG_H_
#define EXTI_REG_H_

#define GICR (*((volatile u8*)0x5b))
#define GIFR (*((volatile u8*)0x5a))
#define MCUCR (*((volatile u8*)0x55))
#define MCUCSR (*((volatile u8*)0x54))
//GICR bits
/*
#define INT1 7
#define INT0 6
#define INT2 5
*/
//GIFR bits
#define INTF1 7
#define INTF0 6
#define INTF2 5
//MCUCR bits
#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3
//MCUCSR bits
#define ISC2 6


#endif /* EXTI_REG_H_ */
