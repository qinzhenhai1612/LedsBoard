//#include "stm32f10x.h"                  // Device header
//#include "stm32f10x_rcc.h"
//#include "stm32f10x_gpio.h"

//#define LED1_ON GPIO_SetBits(GPIOA, GPIO_Pin_0);  
//#define LED1_OFF GPIO_ResetBits(GPIOA, GPIO_Pin_0);
//#define LED2_ON GPIO_SetBits(GPIOA, GPIO_Pin_1);  
//#define LED2_OFF GPIO_ResetBits(GPIOA, GPIO_Pin_1);
//#define LED3_ON GPIO_SetBits(GPIOA, GPIO_Pin_11);  
//#define LED3_OFF GPIO_ResetBits(GPIOA, GPIO_Pin_11);


//int main(void)

//{
//	int i=0;
//	GPIO_InitTypeDef  GPIO_InitStructure;
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
//	
//  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0| GPIO_Pin_1| GPIO_Pin_11 ;
//  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
//  GPIO_Init(GPIOA, &GPIO_InitStructure);
//	
//	while(1)
//	{
//	
//	LED1_ON;
//	while(i<8000000)
//	{i++;}
//  i=0;
//	LED1_OFF;
//	while(i<8000000)
//	{i++;}
//	i=0;
//	
//	LED2_ON;
//	while(i<8000000)
//	{i++;}
//	i=0;
//	LED2_OFF;
//	while(i<8000000)
//	{i++;}
//	i=0;
//	}

//	
//}


#include "delay.h"
#include "sys.h"
#include "usart.h"



int main(void)
{
	u8 t,len;
	u16 times=0;
	delay_init(); //???????
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // ? ? NVIC ? ? ? ? 2
	uart1_init(9600); //????????? 115200
	uart3_init(9600);
	printf("\r\n111111\r\n\r\n");
	while(1)
	{
		if(USART_RX_STA&0x8000)
		{ 
			//printf("\r\n1\r\n\r\n");
			//USART_SendData(USART3, Txdata[1]);
			len=(USART_RX_STA&0x3f)+1; //????????????
		  //printf("\r\n ???????:\r\n\r\n");
		  for(t=0;t<len;t++)
		  { 
				USART_SendData(USART1, USART_RX_BUF[t-1]); //??? 1 ????
				while(USART_GetFlagStatus(USART1,USART_FLAG_TC)!=SET);
				//??????
			}
			if(t==USART_REC_LEN) t=0;
			printf("\r\n\r\n"); //????
			USART_RX_STA=0;
			times++;
			if(times++ ==10)
			{
				times =0;
				LED0=!LED0; //?? LED,????????.
			}
			delay_ms(10);
		  }
   }
}


#ifdef  USE_FULL_ASSERT

/**
  * @brief  The assert_param macro is used for function's parameters check.
  * @param  expr: If expr is false, it calls assert_failed function which reports 
  *         the name of the source file and the source line number of the call 
  *         that failed. If expr is true, it returns no value.
  * @retval None
  */
  #define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
/* Exported functions ------------------------------------------------------- */
  void assert_failed(uint8_t* file, uint32_t line);
#else
  #define assert_param(expr) ((void)0)
#endif /* USE_FULL_ASSERT */
	
	
	