//全局变量、局部变量
#include "stdio.h"

int x=0;  //全局变量，函数外定义。注意分号

int main()  //main函数返回值不能为空
{  
	int x=1; //局部变量。只在main()里有效
	//int x=2;  不能重复定义
	void  prt(void); //函数声明
	void prt1(void);  //函数声明
	
	
	{                       //语句组
		int x=3;                //语句组中定义局部变量，屏蔽了main()中定义的局部变量
		prt1();
		prt();
		printf("\n语句组中的 x=%d\n",x);

	}
  printf("\nmain函数中的 x=%d\n",x);
 
}


void  prt(void)  //void 空  在main函数后面定义，如果要调用，必须先声明。

{ 
   int x=5;  //局部变量
   printf("\nprt函数中的  x=%d\tprt函数中的局部变量\n",x);
}

void prt1(void)
{
	printf("\nprt1中的  x=%d\t 全局变量\n",x);
}