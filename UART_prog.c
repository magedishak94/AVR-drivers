/*
 * UART_prog.c
 *
 *  Created on: 6 Jul 2019
 *      Author: maged
 */
#include "StdTypes.h"
#include "DIO_MemMap.h"
#include "Utils.h"
#include "UART_reg.h"
#include "UART_INT.h"


void UART_vidInit(void)
{
	UCSRA=0;
	UCSRB=0;
	UCSRC=0b10000110;
	UBRRH=0;
	UBRRL=51;
	SET_BIT(UCSRB,TXEN);
	SET_BIT(UCSRB,RXEN);

}
void UART_vidsendData(u8 u8data)
{
	while(GET_BIT(UCSRA,UDRE)==0);
UDR=u8data;

}
u8 UART_vidRecieveData(void)
{
	while(GET_BIT(UCSRA,RXC)==0);
	return UDR;
}
