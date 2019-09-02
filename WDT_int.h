/*
 * WDT.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef WDT_INT_H_
#define WDT_INT_H_

//watch dog time to reset a 5V:
#define WDT_16_3_ms 0
#define WDT_32_5_ms 1
#define WDT_65_ms 2
#define WDT_0_13_s 3
#define WDT_0_26_s 4
#define WDT_0_52_s 5
#define WDT_1_s 6
#define WDT_2_1_s 7

extern void WDT_set(u8 time);
extern void WDT_off(void);

#endif /* WDT_INT_H_ */
