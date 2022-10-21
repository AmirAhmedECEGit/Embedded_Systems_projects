/*
 * LED.c
 *
 * Created: 9/18/2022 7:50:24 PM
 *  Author: Ahmed khaled
 */ 
#include "DIO.h"
void LED_init(char port,char pin)
{
	DIO_vset_pindir(port,pin,1);
}
void LED_on(char port,char pin)
{
	DIO_vwrite_pin(port,pin,1);
}
void LED_off(char port,char pin)
{
	DIO_vwrite_pin(port,pin,0);
}
void LED_tog(char port,char pin)
{
	DIO_vTOG_PIN(port,pin);
}













