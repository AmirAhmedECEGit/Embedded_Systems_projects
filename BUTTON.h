/*
 * BUTTON.h
 *
 * Created: 9/20/2022 9:34:04 PM
 *  Author: TopTechnology
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
void BUTTON_init(char port,char pin);
char BUTTON_read(char port,char bit);
#endif /* BUTTON_H_ */