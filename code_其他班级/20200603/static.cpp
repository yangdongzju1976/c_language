#include "stdio.h"
int main()
{ 
void  increment(void);  //函数声明
   increment();			//三次调用increment函数
   increment();
   increment();
}

void  increment(void)
{ 
	//int x=0;
	static int x=0;
   x++;
   printf("%d\n",x);
}
