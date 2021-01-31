#include "stdio.h"
extern int globle; //全局变量声明
extern int x;

void f2(void)
{
	printf("\n函数f2()中的 globle=%d",globle);
	globle++; //自加

	printf("\n函数f2()中的 x=%d\n",x);
	x++; //自加
}
