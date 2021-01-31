#include <stdio.h>
//输入两个数，判断大于等于关系
int main()
{	
	int a,b,max;
	printf("\n输入两个数\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	if (a>b)
	{
		max=a;
		printf("\na大于b,最大值为:");
	}
	else
	{
		if (a==b)
		{
			max=a;
			printf("\na等于b，最大值为:");
		}
		else
		{
			max=b;
			printf("\na小于b，最大值为:");

		}
	}
	printf("%d\n",max);
	return 0;
}
