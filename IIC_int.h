/*
 * IIC_int.h
 *
 *  Created on: 13 Jul 2019
 *      Author: maged
 */

#ifndef IIC_INT_H_
#define IIC_INT_H_
/*operations*/
#define READ 1
#define WRITE 0
/* ACK condition*/
#define SEND_ACK 1
#define SEND_NACK 0
/*status*/
#define IIC_OK 1
#define IIC_NOK 0
/*common status code*/
#define IIC_START 0x08
#define IIC_REP_START 0x10
/*Master transimitter status code*/
#define IIC_MT_SLA_ACK  0x18
#define IIC_MT_SLA_NOT_ACK 0x20
#define IIC_MT_DATA_ACK 0x28
#define IIC_MT_DATA_NOT_ACK 0x30
#define IIC_MT_ARB_LOST 0x38
/*MASTER reciver status code*/
#define IIC_MR_ARB_LOST 0x38
#define IIC_MR_SLA_ACK 0x40
#define IIC_MR_SLA_NOT_ACK 0x48
#define IIC_MR_DATA_ACK 0x50
#define IIC_MR_DATA_NOT_ACK 0x58

void IIC_vidInit(void);
void IIC_vidSendstart(void);
void IIC_vidSendstop(void);
void IIC_vidsendSLA(u8 u8SLAdd,u8 u8operation);
void IIC_vidsendData(u8 u8data);

u8 IIC_u8RecieveData(u8 u8ACKcond);
u8 IIC_u8CheckStatus(u8 u8statues);

#endif /* IIC_INT_H_ */
