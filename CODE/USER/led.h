#ifndef  _LED_H_
#define  _LED_H_


#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"



void LED_ON(unsigned int i);
void LED_OFF(unsigned int i);


#define LED1_ON GPIO_SetBits(GPIOA, GPIO_Pin_0);  
#define LED1_OFF GPIO_ResetBits(GPIOA, GPIO_Pin_0);
#define LED2_ON GPIO_SetBits(GPIOA, GPIO_Pin_1);  
#define LED2_OFF GPIO_ResetBits(GPIOA, GPIO_Pin_1);
#define LED3_ON GPIO_SetBits(GPIOA, GPIO_Pin_11);  
#define LED3_OFF GPIO_ResetBits(GPIOA, GPIO_Pin_11);
#define LED4_ON GPIO_SetBits(GPIOA, GPIO_Pin_12);  
#define LED4_OFF GPIO_ResetBits(GPIOA, GPIO_Pin_12);
#define LED5_ON GPIO_SetBits(GPIOB, GPIO_Pin_0);  
#define LED5_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_0);
#define LED6_ON GPIO_SetBits(GPIOB, GPIO_Pin_1);  
#define LED6_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_1);
#define LED7_ON GPIO_SetBits(GPIOB, GPIO_Pin_5);  
#define LED7_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_5);
#define LED8_ON GPIO_SetBits(GPIOB, GPIO_Pin_6);  
#define LED8_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_6);
#define LED9_ON GPIO_SetBits(GPIOB, GPIO_Pin_7);  
#define LED9_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_7);
#define LED10_ON GPIO_SetBits(GPIOB, GPIO_Pin_8);  
#define LED10_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_8);
#define LED11_ON GPIO_SetBits(GPIOB, GPIO_Pin_9);  
#define LED11_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_9);
#define LED12_ON GPIO_SetBits(GPIOB, GPIO_Pin_10);  
#define LED12_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_10);
#define LED13_ON GPIO_SetBits(GPIOB, GPIO_Pin_11);  
#define LED13_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_11);
#define LED14_ON GPIO_SetBits(GPIOB, GPIO_Pin_12);  
#define LED14_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_12);
#define LED15_ON GPIO_SetBits(GPIOB, GPIO_Pin_13);  
#define LED15_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_13);
#define LED16_ON GPIO_SetBits(GPIOB, GPIO_Pin_14);  
#define LED16_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_14);
#define LED17_ON GPIO_SetBits(GPIOB, GPIO_Pin_15);  
#define LED17_OFF GPIO_ResetBits(GPIOB, GPIO_Pin_15);

#define LED18_ON GPIO_SetBits(GPIOC, GPIO_Pin_0);  
#define LED18_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_0);
#define LED19_ON GPIO_SetBits(GPIOC, GPIO_Pin_1);  
#define LED19_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_1);
#define LED20_ON GPIO_SetBits(GPIOC, GPIO_Pin_2);  
#define LED20_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_2);
#define LED21_ON GPIO_SetBits(GPIOC, GPIO_Pin_3);  
#define LED21_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_3);
#define LED22_ON GPIO_SetBits(GPIOC, GPIO_Pin_4);  
#define LED22_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_4);
#define LED23_ON GPIO_SetBits(GPIOC, GPIO_Pin_5);  
#define LED23_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_5);
#define LED24_ON GPIO_SetBits(GPIOC, GPIO_Pin_6);  
#define LED24_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_6);
#define LED25_ON GPIO_SetBits(GPIOC, GPIO_Pin_7);  
#define LED25_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_7);
#define LED26_ON GPIO_SetBits(GPIOC, GPIO_Pin_8);  
#define LED26_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_8);
#define LED27_ON GPIO_SetBits(GPIOC, GPIO_Pin_9);  
#define LED27_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_9);
#define LED28_ON GPIO_SetBits(GPIOC, GPIO_Pin_10);  
#define LED28_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_10);
#define LED29_ON GPIO_SetBits(GPIOC, GPIO_Pin_11);  
#define LED29_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_11);
#define LED30_ON GPIO_SetBits(GPIOC, GPIO_Pin_12);  
#define LED30_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_12);
#define LED31_ON GPIO_SetBits(GPIOC, GPIO_Pin_13);  
#define LED31_OFF GPIO_ResetBits(GPIOC, GPIO_Pin_13);



#define LED32_ON GPIO_SetBits(GPIOD, GPIO_Pin_0);  
#define LED32_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_0);
#define LED33_ON GPIO_SetBits(GPIOD, GPIO_Pin_1);  
#define LED33_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_1);
#define LED34_ON GPIO_SetBits(GPIOD, GPIO_Pin_2);  
#define LED34_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_2);
#define LED35_ON GPIO_SetBits(GPIOD, GPIO_Pin_3);  
#define LED35_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_3);
#define LED36_ON GPIO_SetBits(GPIOD, GPIO_Pin_4);  
#define LED36_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_4);
#define LED37_ON GPIO_SetBits(GPIOD, GPIO_Pin_5);  
#define LED37_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_5);
#define LED38_ON GPIO_SetBits(GPIOD, GPIO_Pin_6);  
#define LED38_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_6);
#define LED39_ON GPIO_SetBits(GPIOD, GPIO_Pin_7);  
#define LED39_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_7);
#define LED40_ON GPIO_SetBits(GPIOD, GPIO_Pin_8);  
#define LED40_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_8);
#define LED41_ON GPIO_SetBits(GPIOD, GPIO_Pin_9);  
#define LED41_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_9);
#define LED42_ON GPIO_SetBits(GPIOD, GPIO_Pin_10);  
#define LED42_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_10);
#define LED43_ON GPIO_SetBits(GPIOD, GPIO_Pin_11);  
#define LED43_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_11);
#define LED44_ON GPIO_SetBits(GPIOD, GPIO_Pin_12);  
#define LED44_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_12);
#define LED45_ON GPIO_SetBits(GPIOD, GPIO_Pin_13);  
#define LED45_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_13);
#define LED46_ON GPIO_SetBits(GPIOD, GPIO_Pin_14);  
#define LED46_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_14);
#define LED47_ON GPIO_SetBits(GPIOD, GPIO_Pin_15);  
#define LED47_OFF GPIO_ResetBits(GPIOD, GPIO_Pin_15);

#define LED48_ON GPIO_SetBits(GPIOE, GPIO_Pin_0);  
#define LED48_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_0);
#define LED49_ON GPIO_SetBits(GPIOE, GPIO_Pin_1);  
#define LED49_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_1);
#define LED50_ON GPIO_SetBits(GPIOE, GPIO_Pin_2);  
#define LED50_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_2);
#define LED51_ON GPIO_SetBits(GPIOE, GPIO_Pin_3);  
#define LED51_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_3);
#define LED52_ON GPIO_SetBits(GPIOE, GPIO_Pin_4);  
#define LED52_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_4);
#define LED53_ON GPIO_SetBits(GPIOE, GPIO_Pin_5);  
#define LED53_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_5);
#define LED54_ON GPIO_SetBits(GPIOE, GPIO_Pin_6);  
#define LED54_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_6);
#define LED55_ON GPIO_SetBits(GPIOE, GPIO_Pin_7);  
#define LED55_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_7);
#define LED56_ON GPIO_SetBits(GPIOE, GPIO_Pin_8);  
#define LED56_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_8);
#define LED57_ON GPIO_SetBits(GPIOE, GPIO_Pin_9);  
#define LED57_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_9);
#define LED58_ON GPIO_SetBits(GPIOE, GPIO_Pin_10);  
#define LED58_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_10);
#define LED59_ON GPIO_SetBits(GPIOE, GPIO_Pin_11);  
#define LED59_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_11);
#define LED60_ON GPIO_SetBits(GPIOE, GPIO_Pin_12);  
#define LED60_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_12);
#define LED61_ON GPIO_SetBits(GPIOE, GPIO_Pin_13);  
#define LED61_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_13);
#define LED62_ON GPIO_SetBits(GPIOE, GPIO_Pin_14);  
#define LED62_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_14);
#define LED63_ON GPIO_SetBits(GPIOE, GPIO_Pin_15);  
#define LED63_OFF GPIO_ResetBits(GPIOE, GPIO_Pin_15);

#define LED64_ON GPIO_SetBits(GPIOF, GPIO_Pin_0);  
#define LED64_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_0);
#define LED65_ON GPIO_SetBits(GPIOF, GPIO_Pin_1);  
#define LED65_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_1);
#define LED66_ON GPIO_SetBits(GPIOF, GPIO_Pin_2);  
#define LED66_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_2);
#define LED67_ON GPIO_SetBits(GPIOF, GPIO_Pin_3);  
#define LED67_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_3);
#define LED68_ON GPIO_SetBits(GPIOF, GPIO_Pin_4);  
#define LED68_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_4);
#define LED69_ON GPIO_SetBits(GPIOF, GPIO_Pin_5);  
#define LED69_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_5);
#define LED70_ON GPIO_SetBits(GPIOF, GPIO_Pin_6);  
#define LED70_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_6);
#define LED71_ON GPIO_SetBits(GPIOF, GPIO_Pin_7);  
#define LED71_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_7);
#define LED72_ON GPIO_SetBits(GPIOF, GPIO_Pin_8);  
#define LED72_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_8);
#define LED73_ON GPIO_SetBits(GPIOF, GPIO_Pin_9);  
#define LED73_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_9);
#define LED74_ON GPIO_SetBits(GPIOF, GPIO_Pin_10);  
#define LED74_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_10);
#define LED75_ON GPIO_SetBits(GPIOF, GPIO_Pin_11);  
#define LED75_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_11);
#define LED76_ON GPIO_SetBits(GPIOF, GPIO_Pin_12);  
#define LED76_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_12);
#define LED77_ON GPIO_SetBits(GPIOF, GPIO_Pin_13);  
#define LED77_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_13);
#define LED78_ON GPIO_SetBits(GPIOF, GPIO_Pin_14);  
#define LED78_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_14);
#define LED79_ON GPIO_SetBits(GPIOF, GPIO_Pin_15);  
#define LED79_OFF GPIO_ResetBits(GPIOF, GPIO_Pin_15);



#define LED80_ON GPIO_SetBits(GPIOG, GPIO_Pin_0);  
#define LED80_OFF GPIO_ResetBits(GPIOG, GPIO_Pin_0);
#define LED81_ON GPIO_SetBits(GPIOG, GPIO_Pin_1);  
#define LED81_OFF GPIO_ResetBits(GPIOG, GPIO_Pin_1);
#define LED82_ON GPIO_SetBits(GPIOG, GPIO_Pin_2);  
#define LED82_OFF GPIO_ResetBits(GPIOG, GPIO_Pin_2);
#define LED83_ON GPIO_SetBits(GPIOG, GPIO_Pin_3);  
#define LED83_OFF GPIO_ResetBits(GPIOG, GPIO_Pin_3);
#define LED84_ON GPIO_SetBits(GPIOG, GPIO_Pin_4);  
#define LED84_OFF GPIO_ResetBits(GPIOG, GPIO_Pin_4);
#define LED85_ON GPIO_SetBits(GPIOG, GPIO_Pin_5);  
#define LED85_OFF GPIO_ResetBits(GPIOG, GPIO_Pin_5);
#define LED86_ON GPIO_SetBits(GPIOG, GPIO_Pin_6);  
#define LED86_OFF GPIO_ResetBits(GPIOG, GPIO_Pin_6);
#define LED87_ON GPIO_SetBits(GPIOG, GPIO_Pin_7);  
#define LED87_OFF GPIO_ResetBits(GPIOG, GPIO_Pin_7);
#define LED88_ON GPIO_SetBits(GPIOG, GPIO_Pin_8);  
#define LED88_OFF GPIO_ResetBits(GPIOG, GPIO_Pin_8);






#endif
