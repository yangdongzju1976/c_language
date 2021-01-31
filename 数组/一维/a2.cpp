#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a[10];//一维数组。相当于同时定义10个整形变量。a[0]~a[9]
	int i;
	//通过随机函数对数组进行赋值
	for (i=0;i<10 ;i++ )
	{
		a[i]=rand()%100;
		
	}
	//输出数组a
	for (i=0;i<10 ;i++ )
	{
		printf("a[%d]=%d\n",i,a[i]);
	}

	return 0;
}
