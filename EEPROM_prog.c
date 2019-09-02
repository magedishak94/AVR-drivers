/*
 * EEPROM_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#include "StdTypes.h"
#include "DIO_Interface.h"
#include "DIO_MemMap.h"
#include "Utils.h"
#include "IIC_int.h"
#include "EEPROM_int.h"

u8 EEPORM_u8WriteByte(u8 u8block,u8 u8location,u8 u8data)
{

	IIC_vidSendstart();
	if(IIC_u8CheckStatus(IIC_START)==IIC_NOK)
	{
		return 1;
	}
	IIC_vidsendSLA(0x50|u8block,WRITE);
	if(IIC_u8CheckStatus(IIC_MT_SLA_ACK)==IIC_NOK)
	{
		return 2;
	}
	IIC_vidsendData(u8location);
	if(IIC_u8CheckStatus(IIC_MT_DATA_ACK)==IIC_NOK)
	{
		return 3;
	}
	IIC_vidsendData(u8data);
	if(IIC_u8CheckStatus(IIC_MT_DATA_ACK)==IIC_NOK)
	{
		return 4;
	}
	IIC_vidSendstop();
	return 0;
}
u8 EEPROM_u8ReadByte(u8 u8block,u8 u8location,u8*pu8data)
{
	IIC_vidSendstart();
		if(IIC_u8CheckStatus(IIC_START)==IIC_NOK)
		{
			return 1;
		}
    IIC_vidsendSLA(0x50|u8block,WRITE);
		if(IIC_u8CheckStatus(IIC_MT_SLA_ACK)==IIC_NOK)
		{
			return 2;
		}
	IIC_vidsendData(u8location);
		if(IIC_u8CheckStatus(IIC_MT_DATA_ACK)==IIC_NOK)
		{
			return 3;
		}
	IIC_vidSendstart();
		if(IIC_u8CheckStatus(IIC_REP_START)==IIC_NOK)
		{
			return 4;
		}
	IIC_vidsendSLA(0x50|u8block,READ);
		if(IIC_u8CheckStatus(IIC_MT_SLA_ACK)==IIC_NOK)
		{
			return 5;
		}
	*pu8data=IIC_u8RecieveData(SEND_NACK);
	if(IIC_u8CheckStatus(IIC_MR_DATA_NOT_ACK)==IIC_NOK)
	{
		return 6;
	}
	IIC_vidSendstop();
	return 0;
}
