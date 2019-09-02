/*
 * EEPROM_int.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: sa
 */

#ifndef EEPROM_INT_H_
#define EEPROM_INT_H_

#define BLOCK0 0
#define BLOCK1 1
#define BLOCK2 2
#define BLOCK3 3
//all 256 locaitons should also be defined
u8 EEPORM_u8WriteByte(u8 u8block,u8 u8location,u8 u8data);
u8 EEPROM_u8ReadByte(u8 u8block,u8 u8location,u8*pu8data);

#endif /* EEPROM_INT_H_ */
