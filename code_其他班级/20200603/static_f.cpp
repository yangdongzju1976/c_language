#include "stdio.h"

int main( ) 
{ 
  int f(int) ; //����������
  int  a=2, i; 
  for(i=0; i<3; i++)  //ѭ������
	{
		printf("a=%d\tf(a)=%d\n",a, f(a)); 
	}
} 

int f(int a) 
{ 
  int b=0;   
  static int c=3;   //c�Ǿ�̬����
  
  b++,c++,a++;
  printf("\tb=%d\tc=%d\t",b,c);
  return(a + b + c); 
} 
