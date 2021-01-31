#include "stdio.h"
extern int globle; //全局变量声明
int x=10;	//全局变量定义

void f1(void)
{
	printf("\n  函数f1()中的globle=%d",globle);
	globle++;//自加

	printf("\n  f1()函数中的    x    =%d",x);
	x++;//自加
	
}
