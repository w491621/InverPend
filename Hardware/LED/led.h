/**
  ******************************************************************************
  * @file    STM32����/����ģ��/Hardware
  * @author  ��һ��
  * @version V3.5.0
  * @date    2014-10-4
  * @brief   LED program
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */  
  

#ifndef __LED_H
#define __LED_H	 
/* Includes ------------------------------------------------------------------*/
#include "sys/sys.h"

/* Define --------------------------------------------------------------------*/
#define GLED PBout(0)// PB0
#define RLED PCout(0)// PC0	

/*extern function-------------------------------------------------------------*/
extern void LEDInit(void);//��ʼ��

		 				    
#endif