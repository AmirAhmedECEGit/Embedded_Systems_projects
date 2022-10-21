/*
 * Key_bad.h
 *
 * Created: 10/21/2022 6:43:13 PM
 *  Author: TopTechnology
 */ 
#define keybad_port       'c'
#define Notpressed     0xff
#ifndef KEY_BAD_H_
#define KEY_BAD_H_

void Key_bad_init();			/*initialize the keybad by select the keybad port*/
char Key_bad_u8_check_press();  /*check if there a botton is pressed or not      */
#endif /* KEY_BAD_H_ */