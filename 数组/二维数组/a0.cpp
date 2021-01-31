#include <stdio.h>
#include <stdlib.h>  //记得引入该头文件
#include "windows.h"
#include <time.h>
#define M 16
#define N 5
void output(int a[][N],int m,int n);
int main(){
	srand((unsigned)time(NULL));
	system("color 70");
    int a[M][N];//定义一个二维数组，相当于定义了100个变量，a[0][0]~a[9][9]
	for (int i=0;i<M ;i++ )
		for (int j=0;j<N ;j++ )
		{
			a[i][j]=rand()%100; //数组元素赋值
		}
	//主函数中输出
	printf("主函数中输出数组\n");
	for (int i=0;i<M ;i++ )
	{
		for (int j=0;j<N ;j++ )
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
	printf("\n输出\n");
	output(a,M,N);
	printf("\n\n\n");
    return 0;
}


void output(int a[][N],int m,int n)
{
	int i,j;
	printf("\n外部函数中输出数组\n");
	for (i=0;i<m ;i++)
	{
		for (j=0;j<n ;j++ )
		{ 
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);//*(*a+i*m+j)
		}
		printf("\n");
	}
}