/*
 * SPI_prog.c
 *
 *  Created on: 12 Jul 2019
 *      Author: maged
 */
#include "StdTypes.h"
#include "SPI_priv.h"
#include "SPI_cfg.h"
#include "SPI_int.h"
#include "Utils.h"

void SPI_vidInit()
{
	CLR_BIT(SPCR,DORD);
	if(OPER_MODE==MASTER)
	{
		SET_BIT(SPCR,MSTR);
		CLR_BIT(SPCR,CPOL);
		SET_BIT(SPCR,CPHA);
		CLR_BIT(SPCR,SPR1);
		CLR_BIT(SPCR,SPR0);
		CLR_BIT(SPSR,SPI2X);
	}
	else if(OPER_MODE==SLAVE)
	{
		CLR_BIT(SPCR,MSTR);
	}
	else{//do nothing
		}
	SET_BIT(SPCR,SPE);

}
u8 SPI_u8SendRecData(u8 u8data)
{
	SPDR=u8data;
	while(GET_BIT(SPSR,SPIF)==0);
	return SPDR;
}
