#include "stdio.h"

int main(  )  
{
	int  fac(int n);  //函数声明
	int  i; 
	printf("\n6!=%ld\n",fac(10));

	for(i=1; i<=9; i++) 
		printf("%d != %d\n", i, fac(i)); 

	//printf("\n6!=%ld\n",fac(6);
} 

int  fac(int n) 
{ 
	static  int  f=1; 
	f=f*n;   //关键是这句
	return(f);
} 