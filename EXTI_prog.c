/*
 * EXTI_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */
#include "StdTypes.h"
#include "EXTI_int.h"
#include "EXTI_reg.h"
#include "Utils.h"

void EXTI_Setinterrupt(u8 num,u8 trigger)
{
	GICR&=0b00011111;
	MCUCR&=0b11110000;
	CLR_BIT(MCUCSR,ISC2);
	SET_BIT(GICR,num);
	if(num!=INT2)
	{
		//if int0 no shift happens if int1 trigger is shifted 2 bits
		MCUCR|=(trigger<<((num-6)*2));
	}
	else{
		//if first bit of trigger is 1 this means user choose rising edge
		if(trigger&1)
		SET_BIT(MCUCSR,ISC2);
	}
}
