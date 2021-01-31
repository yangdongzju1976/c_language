#include "stdio.h"

int main( ) 
{ 
  int f(int) ; //函数的声明
  int  a=2, i; 
  for(i=0; i<3; i++)  //循环三次
	{
		printf("a=%d\tf(a)=%d\n",a, f(a)); 
	}
} 

int f(int a) 
{ 
  int b=0;   
  static int c=3;   //c是静态变量
  
  b++,c++,a++;
  printf("\tb=%d\tc=%d\t",b,c);
  return(a + b + c); 
} 
