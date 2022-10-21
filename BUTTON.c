/*
 * BUTTON.c
 *
 * Created: 9/20/2022 9:33:43 PM
 *  Author: TopTechnology
 */ 
#include "DIO.h"
void BUTTON_init(char port,char pin)
{
	DIO_vset_pindir(port,pin,0);
	DIO_pull_up_enable(port ,pin ,1);
}
char BUTTON_read(char port,char bit)
{
	char return_val = DIO_u8READ_PIN(port,bit);
	return return_val;
}