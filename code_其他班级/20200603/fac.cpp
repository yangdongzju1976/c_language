#include "stdio.h"

int main(  )  
{
	int  fac(int n);  //��������
	int  i; 
	printf("\n6!=%ld\n",fac(10));

	for(i=1; i<=9; i++) 
		printf("%d != %d\n", i, fac(i)); 

	//printf("\n6!=%ld\n",fac(6);
} 

int  fac(int n) 
{ 
	static  int  f=1; 
	f=f*n;   //�ؼ������
	return(f);
} 