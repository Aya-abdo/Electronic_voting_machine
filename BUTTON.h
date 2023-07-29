/*
 * BUTTON.h
 *
 * Created: 10/1/2021 2:46:19 PM
 *  Author: MSI
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

void button_init(unsigned char port,unsigned char pin);
unsigned char button_read(unsigned char port,unsigned char pin);



#endif /* BUTTON_H_ */