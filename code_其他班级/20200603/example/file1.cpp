#include "stdio.h"
extern int globle; //ȫ�ֱ�������
int x=10;	//ȫ�ֱ�������

void f1(void)
{
	printf("\n  ����f1()�е�globle=%d",globle);
	globle++;//�Լ�

	printf("\n  f1()�����е�    x    =%d",x);
	x++;//�Լ�
	
}
