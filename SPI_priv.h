/*
 * SPI_priv.h
 *
 *  Created on: 12 Jul 2019
 *      Author: maged
 */

#ifndef SPI_PRIV_H_
#define SPI_PRIV_H_

#define SPDR (*(volatile u8*)0x2f)
#define SPSR (*(volatile u8*)0x2e)
#define SPCR (*(volatile u8*)0x2d)
//SPSR register
#define SPIF 7
#define SPI2X 0
//SPCR register
#define SPE 6
#define DORD 5
#define MSTR 4
#define CPOL 3
#define CPHA 2
#define SPR1 1
#define SPR0 0

#define MASTER 1
#define SLAVE 0
#endif /* SPI_PRIV_H_ */
