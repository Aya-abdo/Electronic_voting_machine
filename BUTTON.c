/*
 * BUTTON.c
 *
 * Created: 10/1/2021 2:46:40 PM
 *  Author: MSI
 */ 

#include "DIO.h"

void button_init(unsigned char port,unsigned char pin)
{
	DIO_SET_DIR(port,pin,0);
}
unsigned char button_read(unsigned char port,unsigned char pin)
{
	return DIO_READ(port,pin);
}