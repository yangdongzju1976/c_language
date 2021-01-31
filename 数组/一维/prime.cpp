#include <stdio.h>
#include "windows.h"

int main(int argc, char *argv[])
{
	system("color 70");
	int i,j;
	int a[100];
	j=1;
	for (i=2;i<=100 ;i++ )
	{
		a[i]=i;
	}
	printf("输出数组（没筛之前）\n");
	for (i=2;i<=100 ;i++ )
	{
		printf("%5d",i);
		if ((i-1)%15==0)
		{
			printf("\n");
		}
	}
	for (i=2;i<=100 ;i++ )
	{
		if ((i%2==0&&i!=2)||(i%3==0&&i!=3)||(i%5==0&&i!=5)||(i%7==0&&i!=7))
		{
			a[i]=0;
		}
	}
	printf("\n输出数组（筛之后）\n");
	for (i=2;i<=100 ;i++ )
	{
		if (a[i]!=0)
		{
			printf("%3d  ",i);
			j++;
		}
		
		if ((j-1)%15==0&&a[i]!=0)
		{
			printf("\n");
		}
	}
	printf("\n\n\n");
	
	return 0;
}
