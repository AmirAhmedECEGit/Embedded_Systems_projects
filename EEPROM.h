/*
 * EEPROM.h
 *
 * Created: 10/7/2022 6:01:13 PM
 *  Author: TopTechnology
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_

/*write on EEPROM function*/

void EEPROM_write(unsigned short adress,unsigned char data);

/*EEPROM read function */

unsigned char EEPROM_read(unsigned short adress);

#endif /* EEPROM_H_ */