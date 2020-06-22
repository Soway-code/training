#ifndef  __CONFIG_H__
#define  __CONFIG_H__

//�޷������͵Ķ���
#define uchar unsigned char
#define uint unsigned int 
	
#define uint8 unsigned char
#define uint16 unsigned short int
#define uint32 unsigned int
	
//----------------------------------------


//ȫ�ֺ궨��
#define CPU_INT_DISABLE()  {__set_PRIMASK(1);} //�ر��ж�
#define CPU_INT_ENABLE()   {__set_PRIMASK(0);}  //���ж�

//ȫ�����Ͷ���
typedef enum{FALSE = 0, TRUE = !FALSE}BOOL;

typedef enum //������Ϣö������
{
	MSG_NULL = 0,
	/******************************/
	//�����û���Ϣ���������磺MSG_XXX,
	MSG_KEY1_PRESS,
	MSG_KEY2_PRESS,
	
	
	/******************************/
	MSG_NUM
	
}MSG_TYPE;

//-------------------------------------
#ifdef MAIN_CONFIG  //ͷ�ļ������C����ʱ�����������ͻ����
	#define EXT
#else 
	#define EXT extern
#endif
	
//-------------------------------------
//RTOS���ͷ�ļ�����
#include <rthw.h>
#include <rtthread.h>
#include "Task.h"//�Զ����ļ���Task.c�д���̡߳���ʱ����IPC����ش���
	
	
//-------------------------------------
	
//����ͷ�ļ�����
#include "stm32f1xx.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
	
#include "type.h"
//-------------------------------------
	
//��������ͷ�ļ�����
#include "system.h"
#include "SysTick.h"

#include "usart.h"
#include "led.h"
#include "key.h"
#include "beep.h"
#include "adc.h"
#include "exti.h"
#include "Button.h"
#include "ChipInfo.h"
#include "BspDs18b20.h"
#include "delay.h"

#include "eeprom1.h"
//#include "Adc1.h"
#include "dma.h"
#include "adc11.h"
#include "BspTimer.h"

//----------------------------------------
//ȫ�ֱ�������,��ʹ��EXT����
EXT unsigned char g_Var;	
EXT rt_sem_t usart2_recv_sem;//���崮��2�����ź������ƿ�ָ��
EXT rt_mq_t  msg_mq;//������Ϣ���п��ƿ�
EXT rt_timer_t ADCProcessSoftTimer;//������ʱ�����ƿ�ָ��
//----------------------------------------
#endif

/********************************************************************************************************
**                            End Of File
********************************************************************************************************/