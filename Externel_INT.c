/*
 * Externel_INT.c
 *
 * Created: 10/14/2022 4:50:12 PM
 *  Author: Ahemd kahled
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>
#include "std_macros.h"
#include "LED.h"
#include <avr/interrupt.h>

/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/





ISR(INT0_vect)
{
	LED_off('d',7);
	_delay_ms(500);
	for(int i=0;i<=3;i++)
	{
		LED_init('a',i);
	}
	for(int i=0;i<=3;i++)
	{
		LED_on('a',i);
		_delay_ms(500);
		LED_off('a',i);
	}
}


/***********************************************************/
/***********************************************************/
/***********************************************************/
/***********************************************************/
