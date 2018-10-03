/*
 * main.c
 *
 *  Created on: Oct 2, 2018
 *      Author: RAZMI
 */

#include<avr\io.h>
#include<util\delay.h>
int main()
{
	DDRA = 0XFF;
	PORTA = 0XFF;
	while(1)
	{

		PORTA = ~ PORTA;
		_delay_ms(1000);
	}

	return 0;
}
