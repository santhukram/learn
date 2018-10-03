/*
 * main.c
 *
 *  Created on: Oct 2, 2018
 *      Author: RAZMI
 */

#include<avr\io.h>
#include<util\delay.h>
#define SW PIND & 0X02
int main()
{
	DDRD &= ~(1<<2);
	DDRA = 0XFF;
	PORTA = 0XFF;
	while(1)
	{
		if (!SW)
		{
		PORTA = ~ PORTA;
		_delay_ms(1000);
		}

	}

	return 0;
}
