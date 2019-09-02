/*
 * UART_reg.h
 *
 *  Created on: 6 Jul 2019
 *      Author: maged
 */

#ifndef UART_REG_H_
#define UART_REG_H_

#define UDR (*(volatile u8*)(0x2c))
#define UCSRA (*(volatile u8*)(0x2b))
#define UCSRB (*(volatile u8*)(0x2a))
#define UCSRC (*(volatile u8*)(0x40))
#define UBRRH (*(volatile u8*)(0x40))
#define UBRRL (*(volatile u8*)(0x29))
/*bits of UCSRB*/
#define RXEN 4
#define TXEN 3

#define UDRE 5
#define RXC 7
#endif /* UART_REG_H_ */
