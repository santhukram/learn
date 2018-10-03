/*
 * blink.c
 *
 *  Created on: Oct 3, 2018
 *      Author: RAZMI
 */

#include<avr\io.h>
#include<util\delay.h>
#include "blink.h"

void blink(void)

{

	PORTA = ~ PORTA;
	_delay_ms(500);

}
