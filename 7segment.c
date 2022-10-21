/*
 * _7segment.c
 *
 * Created: 9/30/2022 8:18:25 PM
 *  Author: Ahmed khaled
 */ 
#include "DIO.h"
#include "std_macros.h"
void sevensef_init(char port)
{
	DIO_vset_portdir(port,0xff);
}
void sevenseg_write(char port ,char number)
{
	char arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
	DIO_Vwrite_port(port,arr[number]);
}
void sevenseg_init_BCD(char port)
{
	DIO_vset_pindir(port,0,1);
	DIO_vset_pindir(port,1,1);
	DIO_vset_pindir(port,2,1);
	DIO_vset_pindir(port,3,1);
}

void sevenseg_write_BCD(char port,char val)
{
	DIO_vwrite_pin(port,0,READ_BIT(val,0));
	DIO_vwrite_pin(port,1,READ_BIT(val,1));
	DIO_vwrite_pin(port,2,READ_BIT(val,2));
	DIO_vwrite_pin(port,3,READ_BIT(val,3));
}












