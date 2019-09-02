/*
 * UART_INT.h
 *
 *  Created on: 6 Jul 2019
 *      Author: maged
 */

#ifndef UART_INT_H_
#define UART_INT_H_

void UART_vidInit(void);
void UART_vidsendData(u8 u8data);
u8 UART_vidRecieveData(void);
#endif /* UART_INT_H_ */
