//指针法：
#include <stdio.h>
#include <stdlib.h> //随机函数
#include <time.h>  //时间函数
int main()
{
	int a[10];
	int *p,i;
	srand((unsigned)time(NULL));// 以当前时间来产生随机种子
	
	for(i=0; i<10; i++)
		a[i]=rand()%100;
	
	printf("\n");

	p=a+10;
	for(i=10; i>0; i--) //不能越界
		printf("  %d    ",*(p-i) );

	printf("\n\n");
}
