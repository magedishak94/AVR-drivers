/*
 * WDT_priv.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef WDT_PRIV_H_
#define WDT_PRIV_H_


#define WDTCR (*(volatile u8*)0x41)
//WDTCR bits
#define WDE 3
#define WDTOE 4

#endif /* WDT_PRIV_H_ */
