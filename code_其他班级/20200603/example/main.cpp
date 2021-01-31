#include "stdio.h"
#include "file1.cpp"
#include "file2.cpp"

int globle;  //全局变量定义
extern int x; //全局变量声明

main()
{ 
	int local;
	globle=10;

	printf("\nmain()函数中的 globle  =%d",globle);//输出main()
	globle++;//自加

	printf("\nmain()函数中的    x    =%d",x);
	x++;//自加

	f1(); //调用函数f1()
	f2();//调用函数f2()
}