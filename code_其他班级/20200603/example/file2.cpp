#include "stdio.h"
extern int globle; //ȫ�ֱ�������
extern int x;

void f2(void)
{
	printf("\n����f2()�е� globle=%d",globle);
	globle++; //�Լ�

	printf("\n����f2()�е� x=%d\n",x);
	x++; //�Լ�
}
