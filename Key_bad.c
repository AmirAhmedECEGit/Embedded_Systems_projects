/*
 * Key_bad.c
 *
 * Created: 10/21/2022 6:42:40 PM
 *  Author: TopTechnology
 */ 


#include "DIO.h"
#include "Key_bad.h"

void Key_bad_init()                          /* makes first 4 bits in port output */
{
	for(int i=0;i<4;i++)
	{
		DIO_vset_pindir(keybad_port,i,1);
	}
	
	for(int i=4;i<8;i++)                      /* makes last 4 bits in port input */
	{
		DIO_vset_pindir(keybad_port,i,0);
	}
	for(int i=4;i<8;i++)                      /*      internal pull up enable    */
	{
		DIO_pull_up_enable(keybad_port,i,1);
	}
}

char Key_bad_u8_check_press()
{
	char arr[4][4]  =  {{'7','8','9','/'},{'4','5','6','*'},{'1','2','3','-'},{'A','B','=','+'}};
		char row ,col,x;
		char return_val = Notpressed;
		for(row = 0;row<4;row++)
		{
			DIO_vwrite_pin(keybad_port,0,1);
			DIO_vwrite_pin(keybad_port,1,1);
			DIO_vwrite_pin(keybad_port,2,1);
			DIO_vwrite_pin(keybad_port,3,1);
			DIO_vwrite_pin(keybad_port,row,0);
			for(col = 0;col<4;col++)
			{
				x= DIO_u8READ_PIN(keybad_port,(col+4));
				if(x==0)
				{
					return_val = arr[row][col];
					break;
				}
			}
			if(x == 0)
			{
				break;
			}
		}
	return return_val;
	
}