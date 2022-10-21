/*
 * _7segment.h
 *
 * Created: 9/30/2022 8:19:13 PM
 *  Author: TopTechnology
 */ 


#ifndef SEGMENT_H_
#define SEGMENT_H_
void sevensef_init(char port);
void sevenseg_write(char port ,char number);
void sevenseg_init_BCD(char port);
void sevenseg_write_BCD(char port,char val);
#endif /* 7SEGMENT_H_ */