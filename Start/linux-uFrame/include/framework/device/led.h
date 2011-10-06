/******************************************************************************
	��Ŀ����	��  SGE800���������ն�ƽ̨
	�ļ�		��  led.h
	����		��  ���ļ�������״̬���豸�Ľӿ�
	�汾		��  0.1
	����		��  ·ȽȽ
	��������	��  2010.12
******************************************************************************/
#ifndef _LED_H
#define _LED_H

#include "sge_core/typedef.h"
	
/*************************************************
  ��̬ȫ�ֱ������궨��
*************************************************/
//led���
#define LED_WARN	0		//D9 WARN LED
#define LED_TXDJL	1		//D5 LED TXDJL �̹�
#define LED_RXDJL	2		//D5 LED RXDJL ���
#define LED_RUN		3		//D10 RUN LED

/*************************************************
  API
*************************************************/
/******************************************************************************
*	����:	led_init
*	����:	״̬���豸��ʼ��
*	����:	��
*	����:	0				-	�ɹ�
			-ERR_CFG		-	���ó���
			-ERR_BUSY		-	�Ѿ���
			-ERR_SYS		-	ϵͳ����
			-ERR_NOFILE		-	û�д�·��
 ******************************************************************************/
int led_init(void);

/******************************************************************************
*	����:	led_on
*	����:	led��������
*	����:	id				-	led���
*			delay			-	��ʱʱ�䣬��λΪms��Ϊ0��ʾû����ʱ
			last			-	����ʱ�䣬��λΪms��Ϊ0��ʾû�г���
			period			-	����ʱ�䣬��λΪms��Ϊ0��ʾû������
*	����:	0				-	�ɹ�
			-ERR_INVAL		-	��������
			-ERR_NOINIT		-	û�г�ʼ��
			-ERR_NODEV		-	û�д��豸
			-ERR_CFG		-	���ó���
			-ERR_SYS		-	ϵͳ����
*	˵��:	3��ʱ��ȫΪ0ʱ����ʾһֱ��, �˴�ʱ�侫�Ȳ��ߣ�Ӧ>20ms.
 ******************************************************************************/
int led_on(u8 id, u32 delay, u32 last, u32 period);

/******************************************************************************
*	����:	led_off
*	����:	ledϨ��
*	����:	id				-	led��
*	����:	0				-	�ɹ�
			-ERR_SYS		-	ϵͳ����
			-ERR_CFG		-	����IO�ߵ���led����֮�����ϵ����
*	˵��:
 ******************************************************************************/
int led_off(u8 id);

/******************************************************************************
*	����:	led_check
*	����:	���led״̬
*	����:	id				-	ledͨ����
*	����:	1				-	����
			0				-	������
			-ERR_TIMEOUT	-	��ʱ
			-ERR_NODEV 		-	�޴��豸
			-ERR_NOINIT		-	��û�г�ʼ����
			-ERR_OTHER:		-	���������̻߳������Ĵ���
			-ERR_SYS		-	ϵͳ����
*	˵��:
 ******************************************************************************/
int led_check(u8 id);

#endif		//_LED_H