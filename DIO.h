/*
 * IncFile1.h
 *
 * Created: 9/14/2022 4:01:23 AM
 *  Author: ahmed khaled
 */ 


#ifndef DIO_H_
#define DIO_H_
void DIO_vset_pindir(unsigned char port ,unsigned char pin,unsigned char dir);
void DIO_vwrite_pin(char port,char pin,char val);
void DIO_vTOG_PIN(char port,char pin);
unsigned char DIO_u8READ_PIN(char port,char bit);
void DIO_vset_portdir(char port,char dir);
void DIO_Vwrite_port(unsigned char port,unsigned char val);
char DIO_u8READ_PORT(char port);
void DIO_pull_up_enable(char port,char pin,char enable);
void DIO_vTOG_PORT(char port);
void write_high_nibble(char port,char data);
void write_low_nibble(char port,char data);
#endif /* INCFILE1_H_ */