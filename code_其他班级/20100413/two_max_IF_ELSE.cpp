#include <stdio.h>
//输入二个数，输出最大值。用? ：表达式实现
int main()
{
	int a,b,max;
	printf("\n输入两个数");
	scanf("%d%d",&a,&b);
	if (a>b)
		max=a;
	else
		max=b;
	printf("\n最大值为%d\n",max);	
	return 0;
}
