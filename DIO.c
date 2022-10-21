/*
 * DIO.c
 *
 * Created: 9/14/2022 4:01:08 AM
 *  Author: ahmed khaled
 */ 

#include <avr/io.h>
void DIO_vset_pindir(unsigned char port ,unsigned char pin,unsigned char dir)
{
	
	switch(port)
	{
		case 'A':         /*for port A*/
		case 'a':
		if(dir ==1)
		DDRA |= (1<<pin);
		else
		DDRA &=~(1<<pin);
		break;
		case 'B':         /*for port B*/
		case 'b':
		if(dir ==1)
		DDRB |= (1<<pin); 
		else
		DDRB &=~(1<<pin);
		break;
		case 'C':         /*for port C*/
		case 'c':
		if(dir ==1)
		DDRC |= (1<<pin);
		else
		DDRC &=~(1<<pin);
		break;
		case 'D':         /*for port D*/
		case 'd':
		if(dir ==1)
		DDRD |= (1<<pin);
		else
		DDRD &=~(1<<pin);
		break;
	}
}

void DIO_vwrite_pin(char port,char pin,char val)
{
	switch(port)
	{
		case 'A':         /*for port A*/
		case 'a':
		if(val==1)
		PORTA |= (1<<pin);
		else
		PORTA &=~(1<<pin);
		break;
		case 'B':         /*for port B*/
		case 'b':
		if(val==1)
		PORTB |= (1<<pin);
		else
		PORTB &=~(1<<pin);
		break;
		case 'C':         /*for port C*/
		case 'c':
		if(val==1)
		PORTC |= (1<<pin);
		else
		PORTC &=~(1<<pin);
		break;
		case 'D':         /*for port D*/
		case 'd':
		if(val==1)
		PORTD |= (1<<pin);
		else
		PORTD &=~(1<<pin);
		break;
	}
}

void DIO_vTOG_PIN(char port,char pin)
{
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA ^=(1<<pin);
		break;
		case 'B':
		case 'b':
		PORTB ^=(1<<pin);
		break;
		case 'C':
		case 'c':
		PORTC ^=(1<<pin);
		break;
		case 'D':
		case 'd':
		PORTD ^=(1<<pin);
		break;
	}
}
unsigned char DIO_u8READ_PIN(char port,char bit)
{
	unsigned char value='\0';
	switch(port)
	{
		case 'A':
		case 'a':
		value=((PINA&(1<<bit))>>bit);
		break;
		case 'B':
		case 'b':
		value=((PINB&(1<<bit))>>bit);
		break;
		case 'C':
		case 'c':
		value=((PINC&(1<<bit))>>bit);
		break;
		case 'D':
		case 'd':
		value=((PIND&(1<<bit))>>bit);
		break;
	}
	return (value);
}
void DIO_vset_portdir(char port,char dir)
{
	switch(port)
	{
		case 'A':
		case 'a':
		DDRA = dir;
		break;
		case 'B':
		case 'b':
		DDRB = dir;
		break;
		case 'C':
		case 'c':
		DDRC = dir;
		break;
		case 'D':
		case 'd':
		DDRD = dir;
		break;
	}
}
void DIO_Vwrite_port(unsigned char port,unsigned char val)
{
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA = val;
		break;
		case 'B':
		case 'b':
		PORTB = val;
		break;
		case 'C':
		case 'c':
		PORTC = val;
		break;
		case 'D':
		case 'd':
		PORTD = val;
		break;
	}
}
char DIO_u8READ_PORT(char port)
{
	char val='\0';
	switch(port)
	{
		case 'A':
		case 'a':
		val = PINA;
		break;
		case 'B':
		case 'b':
		val=PINB;
		break;
		case 'C':
		case 'c':
		val =PINC;
		break;
		case 'D':
		case 'd':
		val=PIND;
		break;
	}
	return val;
}
void DIO_vTOG_PORT(char port)
{
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA =~PORTA;
		break;
		case 'B':
		case 'b':
		PORTB =~PORTB;
		break;
		case 'C':
		case 'c':
		PORTC =~PORTC;
		break;
		case 'D':
		case 'd':
		PORTD =~PORTD;
		break;
	}
}

void DIO_pull_up_enable(char port,char pin,char enable)
{
	switch(port)
	{
		case 'A':         /*for port A*/
		case 'a':
		if(enable==1)
		PORTA |= (1<<pin); /*pull up enable*/
		else
		PORTA &=~(1<<pin); /*pull up disable*/
		break;
		case 'B':         /*for port B*/
		case 'b':
		if(enable==1)
		PORTB |= (1<<pin);
		else
		PORTB &=~(1<<pin);
		break;
		case 'C':         /*for port C*/
		case 'c':
		if(enable==1)
		PORTC |= (1<<pin);
		else
		PORTC &=~(1<<pin);
		break;
		case 'D':         /*for port D*/
		case 'd':
		if(enable==1)
		PORTD |= (1<<pin);
		else
		PORTD &=~(1<<pin);
		break;
	}
}


void write_high_nibble(char port,char data)
{
	data <<=4; 
	switch(port)
	{ 
		case 'A':
		case 'a':
		PORTA &= 0x0f;
		PORTA |= data;
		break;
		case 'B':
		case 'b':
		PORTA &= 0x0f;
		PORTA |= data;
		break;
		case 'C':
		case 'c':
		PORTA &= 0x0f;
		PORTA |= data;
		break;
		case 'D':
		case 'd':
		PORTA &= 0x0f;
		PORTA |= data;
		break;
		
		
	}
}

void write_low_nibble(char port,char data)
{
	data &= 0x0f;
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA &= 0xf0;
		PORTA |= data;
		break;
		case 'B':
		case 'b':
		PORTA &= 0xf0;
		PORTA |= data;
		break;
		case 'C':
		case 'c':
		PORTA &= 0xf0;
		PORTA |= data;
		break;
		case 'D':
		case 'd':
		PORTA &= 0xf0;
		PORTA |= data;
		break;
		
	}
}





