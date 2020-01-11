#ifndef SPINCOMMONH
#define SPINCOMMONH
#define C51
#ifdef C51
#define DATA data
#define IDATA idata
#define PDATA pdata
#define XDATA xdata
#define CODE code
#else
#define DATA 
#define IDATA 
#define PDATA 
#define XDATA 
#define CODE 
#endif
#define inter_num	8
#define NULL		0x00
#define FSOC		12 //��Ƭ��Ƶ��12MHZ
#define true		1
#define false		0
typedef unsigned char  uchar;   
typedef unsigned int   uint; 
typedef bit bool;
#define GPIO0 0   
#define GPIO1 1  
#define GPIO2 2  
#define GPIO3 3  
 /*
 P30 RXD 
 P31 TXD
 P32 out_int0
 P33 out_int1
 P34 timer0	  //�ⲿ�������
 P35 timer1	  //�ⲿ�������
 */
#define out_int0	0
#define timer0		1
#define out_int1	2
#define timer1		3	
#define serial		4	
#define timer2		5
#define out_int2	6
#define out_int3	7

#define low 	0
#define high 	1

#define low_vol 	0
#define down_eage 	1

#define disable 0
#define enable  1

#define spin_ok 0


typedef uchar sem_t;//�������ź���
#define sem_init(sem_name,value)		sem_name = value
#define sem_wait(sem_name)				while(!sem_name);	\
										sem_name-=1	
#define sem_post(sem_name)				sem_name+=1

typedef bool mutex_t; //������
#define mutex_init(mutex_name,value)	mutex_name = value
#define mutex_lock(mutex_name)			while(!mutex_name);	\
										mutex_name=0	
#define mutex_unlock(mutex_name)		mutex_name=1
//�ٽ��� �ر�ȫ���ж�

#define critical_area_enter()				spin_interupt_disable()
#define critical_area_exit()				spin_interupt_enable()
#endif