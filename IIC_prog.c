/*
 * IIC_prog.c
 *
 *  Created on: 13 Jul 2019
 *      Author: maged
 */
#include "Utils.h"
#include "StdTypes.h"
#include "IIC_int.h"
#include "IIC_reg.h"

void IIC_vidInit(void)
{
	/*select prescaler 1*/
	CLR_BIT(TWSR,TWPS0);
	CLR_BIT(TWSR,TWPS1);
	/*set bit rate register to selsct BR=250k */
	TWBR=8;
	/* set slave address*/
	TWAR=6;
	/* enable TWI */
	SET_BIT(TWCR,TWEN);
}
void IIC_vidSendstart(void)
{
	TWCR=(1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
	while(GET_BIT(TWCR,TWINT)==0);
}
void IIC_vidSendstop(void)
{
	TWCR=(1<<TWINT)|(1<<TWSTO)|(1<<TWEN);
}
void IIC_vidsendSLA(u8 u8SLAdd,u8 u8operation)
{
	TWDR=((u8SLAdd<<1)|u8operation);
	TWCR=(1<<TWINT)|(1<<TWEN);
	while(GET_BIT(TWCR,TWINT)==0);
}
void IIC_vidsendData(u8 u8data)
{
	TWDR=u8data;
	TWCR=(1<<TWINT)|(1<<TWEN);
	while(GET_BIT(TWCR,TWINT)==0);
}
u8 IIC_u8RecieveData(u8 u8ACKcond)
{
	if(u8ACKcond==SEND_ACK)
	{
	  TWCR=(1<<TWINT)|(1<<TWEN)|(1<<TWEA);
	}
	else if(u8ACKcond==SEND_NACK)
	{
		TWCR=((1<<TWINT)|(1<<TWEN)) &(~(1<<TWEA));
	}
	while(GET_BIT(TWCR,TWINT)==0);
	return TWDR;
}
u8 IIC_u8CheckStatus(u8 u8statues)
{
	if((TWSR & STATUS_MASK)==u8statues)
	{
		return IIC_OK;
	}
	else return IIC_NOK;
}
