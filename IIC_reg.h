/*
 * IIC_reg.h
 *
 *  Created on: 13 Jul 2019
 *      Author: maged
 */

#ifndef IIC_REG_H_
#define IIC_REG_H_

#define TWCR (*(volatile u8*)0x56)
#define TWBR (*(volatile u8*)0x20)
#define TWAR (*(volatile u8*)0x22)
#define TWDR (*(volatile u8*)0x23)
#define TWSR (*(volatile u8*)0x21)

/* TWCR register*/
#define TWINT 7
#define TWEA 6
#define TWSTA 5
#define TWSTO 4
#define TWEN 2
/* TWSR register*/
#define TWPS0 0
#define TWPS1 1
#define STATUS_MASK 0xf8
#endif /* IIC_REG_H_ */
