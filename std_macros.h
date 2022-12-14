/*
 * IncFile1.h
 *
 * Created: 9/14/2022 10:03:42 PM
 *  Author: ahmed khaled
 */ 


#ifndef STD_MACROS_H_
#define STD_MACROS_H_
#define REG_SIZE 8
#define SET_BIT(reg,bit)    reg|=(1<<bit)
#define CLR_BIT(reg,bit)    reg&=~(1<<bit)
#define TOG_BIT(reg,bit)    reg^=(1<<bit)
#define READ_BIT(reg,bit)   ((reg&(1<<bit))>>bit)
#define IS_BIT_SET(reg,bit) ((reg&(1<<bit))>>bit)
#define IS_BIT_CLR(reg,bit) !((reg&(1<<bit))>>bit)
#define ROR(reg,num)        reg =(reg<<(REG_SIZE-num))|(reg>>(num))
#define ROL(reg,num)        reg =(reg>>(REG_SIZE-num))|(reg<<(num)) 
#endif 