/*
 * EVM.c
 *
 * Created: 10/28/2021 12:49:36 PM
 *  Author: MSI
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "LCD.h"
#include "BUTTON.h"

int main(void)
{
	LCD_init();
	button_init('B',3);
	button_init('B',4);
    button_init('B',5);
    button_init('B',6);
	button_init('B',7);
	unsigned char counter1=0,counter2=0,counter3=0,counter4=0;
	unsigned char letter;

	
	
     while(1)
    {
		LCD_send_string("A=");
		LCD_send_char(counter1+48);
		LCD_move_cursor(1,12);
		LCD_send_string("B=");
		LCD_send_char(counter2+48);
		LCD_move_cursor(2,1);
		LCD_send_string("C=");
		LCD_send_char(counter3+48);
		LCD_move_cursor(2,12);
		LCD_send_string("D=");
		LCD_send_char(counter4+48);
		LCD_move_cursor(1,1);
        if (button_read('B',3)==1)
        {
			counter1++;
			
        }
		else if (button_read('B',4)==1)
		 {
			 counter2++;
			
		 }
		 else if (button_read('B',5)==1)
		 {
			 counter3++;
		 }
		 else if (button_read('B',6)==1)
		 {
			 counter4++;
		 }
		  else if (button_read('B',7)==1)
		  {
			  counter1=0,counter2=0,counter3=0,counter4=0;
		  }
		 _delay_ms(150);
    }
}