#include <stdio.h>
int main(  ) 
{ 
	long  fac(long); //声明一个函数fac,long :长整形
	long  i, n; 

	printf("输入n的值：\nn=");
	scanf("%ld",&n);

	for(i=1; i<=n; i++) 
		printf("%ld != %ld\n", i, fac(i));// ld:long decimcal 长整形
} 

long  fac(long n) 
{ 
	register  int  i, f=1; //寄存器变量， 寄存器是CPU的存储器，速度快，空间小。
	
	for(i=1; i<=n; i++) 
		f=f * i;

	return(f);  
  
  }