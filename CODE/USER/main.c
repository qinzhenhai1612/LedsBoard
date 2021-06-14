#include "stm32f10x.h"                  // Device header
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_usart.h"
#include "led.h"


void delay(unsigned int N);	
	
void RCC_Configuration (void);
 
void GPIO_Configuration (void);
 
void USART_Configuration (void);
 
void delay(unsigned int N)
{
	int i=0;
	while(i<N)       
	{i++;}
}
 
int main (void)
 
{
	 
  unsigned int  i=0;
	
	GPIO_InitTypeDef  GPIO_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOD|RCC_APB2Periph_GPIOE|RCC_APB2Periph_GPIOF|RCC_APB2Periph_GPIOG, ENABLE);
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0| GPIO_Pin_1| GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	GPIO_Init(GPIOD, &GPIO_InitStructure);
	GPIO_Init(GPIOE, &GPIO_InitStructure);
	GPIO_Init(GPIOF, &GPIO_InitStructure);
	GPIO_Init(GPIOG, &GPIO_InitStructure);
	
	
	RCC_Configuration ();               
  GPIO_Configuration ();              
  USART_Configuration (); 
//	
//	while(1)
//	{		
//	 
//		if(USART_GetFlagStatus(USART1,USART_IT_RXNE)==SET)    
//		{
//			USART_SendData(USART1,USART_ReceiveData(USART1));
//		           
//			for(i=0;i<500;i++);                                   
//		}
		
		while(1) 
		{
			for(i=0;i<8;i++)
			{
				LED_ON(i);
				delay(8000000);
				LED_OFF(i);
			}
		}
	
}	
	
	

void RCC_Configuration(void)
{
		ErrorStatus  HSEStartUpStatus;      
		RCC_DeInit();                     
		RCC_HSEConfig(RCC_HSE_ON);         
		HSEStartUpStatus = RCC_WaitForHSEStartUp();   
				if(HSEStartUpStatus==SUCCESS)     
				{
						RCC_HCLKConfig(RCC_SYSCLK_Div1);   
						RCC_PCLK2Config(RCC_HCLK_Div1);    
						RCC_PCLK1Config(RCC_HCLK_Div2);    
						//FLASH_SetLatency(FLASH_Latency_2); 
						// 
						//FLASH_PrefetchBufferCmd(FLASH_PrefetchBuffer_Enable);   
						    
						//PLL=8MHz *9=72MHz                 
						RCC_PLLConfig(RCC_PLLSource_HSE_Div1,RCC_PLLMul_9);
						RCC_PLLCmd(ENABLE);                
						while(RCC_GetFlagStatus(RCC_FLAG_PLLRDY)==RESET);  
						RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);   
						while(RCC_GetSYSCLKSource()!=0x08);     
				}
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2,ENABLE);    
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE); 
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1|RCC_APB2Periph_GPIOA,ENABLE); 
}





void GPIO_Configuration(void)
{
		GPIO_InitTypeDef GPIO_InitStructure;
		GPIO_InitStructure.GPIO_Pin=GPIO_Pin_2|GPIO_Pin_9;
		GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_AF_PP;
		GPIO_Init(GPIOA,&GPIO_InitStructure);    
		GPIO_InitStructure.GPIO_Pin=GPIO_Pin_3|GPIO_Pin_10;
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IN_FLOATING;
		GPIO_Init(GPIOA,&GPIO_InitStructure);
}
void USART_Configuration(void)
{
		USART_InitTypeDef USART_InitStructure;     
		//USART_ClockInitTypeDef USART_ClockInitStructure;  

		USART_InitStructure.USART_BaudRate=9600;
		USART_InitStructure.USART_WordLength=USART_WordLength_8b;
		USART_InitStructure.USART_StopBits=USART_StopBits_1;
		USART_InitStructure.USART_Parity=USART_Parity_No;                                     
		USART_InitStructure.USART_HardwareFlowControl=USART_HardwareFlowControl_None;
		USART_InitStructure.USART_Mode=USART_Mode_Rx|USART_Mode_Tx;
		USART_Init(USART1,&USART_InitStructure);
		USART_Cmd(USART1,ENABLE);
		USART_Init(USART2,&USART_InitStructure);
		USART_Cmd(USART2,ENABLE);
}
             

//#ifdef  USE_FULL_ASSERT

///**
//  * @brief  The assert_param macro is used for function's parameters check.
//  * @param  expr: If expr is false, it calls assert_failed function which reports 
//  *         the name of the source file and the source line number of the call 
//  *         that failed. If expr is true, it returns no value.
//  * @retval None
//  */
//  #define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
///* Exported functions ------------------------------------------------------- */
//  void assert_failed(uint8_t* file, uint32_t line);
//#else
//  #define assert_param(expr) ((void)0)
//#endif /* USE_FULL_ASSERT */
//	
//	
//	
