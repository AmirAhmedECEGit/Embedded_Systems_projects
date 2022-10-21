/*
 * LCD.h
 *
 * Created: 10/15/2022 4:36:45 PM
 *  Author: Ahmed khaled
 */ 

#ifndef LCD_H_
#define LCD_H_
#include "DIO.h"
#include "LCD_config.h"
#define CLR_SCREEN           0x01
#define CURSOR_ON_DISPLAN_ON 0x0c
#define RETURN_HOME          0x02
#define ENTRY_MODE           0x06
#if defined four_bits_mode
#define Enable_Port        'B'
#define RS_Port            'B'
#define RW_Port            'B'
#define EN_Pin              0
#define RS_Pin              1
#define RW_Pin              2
#define FOUR_BITS 0x28
#elif defined eight_bits_mode
#define Enable_Port        'B'
#define RS_Port            'B'
#define RW_Port            'B'
#define EN_Pin              0
#define RS_Pin              1
#define RW_Pin              2
#define EIGHT_BITS         0x38
#endif
void LCD_vInit(void);
static void send_falling_edge(void);
void LCD_vSend_cmd(char cmd);
void LCD_vSend_char(char data);
void LCD_vSend_string(char *data);
void LCD_clearscreen();
void LCD_movecursor(char row,char coloumn);

#endif /* LCD_H_ */