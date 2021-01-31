#include "stdio.h"
#define MAX(a,b) (a>b)?a:b //好像带参数的宏定义
main()
{
	int x,y,max;
	printf("输入两个数，输出较大的 ");
	printf("\nx=");
	scanf("%d",&x);
	printf("\ny=");
	scanf("%d",&y);
	
	max=MAX(x,y); //M(x,y) 替换成:(x>y)?x:y
	printf("max=%d\n",max);
}