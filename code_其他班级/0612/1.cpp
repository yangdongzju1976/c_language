//下标法
#include <stdio.h>
#include <stdlib.h> //随机函数库
#include <time.h>  //时间函数库
int main()
{
	int a[10];
	int i;
	srand((unsigned)time(NULL));// 以当前时间来产生随机种子
	//给数组赋初值
	for(i=0; i<10; i++)
		a[i]=rand()%100;
	
	printf("\n");
	//输出整个数组
	for(i=0; i<10; i++)
		printf("%d  ",a[i] );
	printf("\n\n");
}