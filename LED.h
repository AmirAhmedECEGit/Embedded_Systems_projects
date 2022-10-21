/*
 * LED.h
 *
 * Created: 9/18/2022 7:50:53 PM
 *  Author: Ahmed khaled
 */ 


#ifndef LED_H_
#define LED_H_
void LED_init(char port,char pin);
void LED_on(char port,char pin);
void LED_off(char port,char pin);
void LED_tog(char port,char pin);
#endif /* LED_H_ */