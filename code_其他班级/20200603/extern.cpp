#include "stdio.h"
int  A=13,B=-8; //定义全局变量
int  max(int x, int y) 
{ 
	int z; 
	z=x>y ? x:y; 
	//extern int A,B; 
	printf("\nmax函数中的：A=%d\tB=%d\n",A,B);
	return(z); 
} 

int main( ) 
{ 
	//extern int A,B;  //声明外部变量
	printf("\nA=%d\tB=%d\n",A,B); //输出A、B的值 
	printf("A、B的最大值=%d\n\n",max(A,B)); //传值调用max()函数 ，并输出结果。
}

