/*
 * EEPROM.c
 *
 * Created: 10/7/2022 6:00:37 PM
 *  Author: TopTechnology
 */ 
#include <avr/io.h>
#include "std_macros.h"

void EEPROM_write(unsigned short adress,unsigned char data)
{
	/*set the first 8 bits in low register*/
	EEARL = (char)adress;
	/*set the second 8 bits in high register*/
	EEARH = (char)(adress>>8);
	/*put the data in data register*/
	EEDR = data;
	/*enable must right bit*/
	SET_BIT(EECR,EEMWE);
	/*start writing*/
	SET_BIT(EECR,EEWE);
	
	while(READ_BIT(EECR,EEWE)==1);
}


unsigned char EEPROM_read(unsigned short adress)
{
	/*put the data (1st 8 data) we want to access in low register*/
	EEARL = (char)adress;
	
	/*put the data (second 8 bit) we want to access in high register*/
	
	EEARH = (char)(adress>>8);
	/*set the read bit in control register*/
	SET_BIT(EECR,EERE);
	/*return the data*/
	return EEDR;
}