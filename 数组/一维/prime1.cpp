#include <stdio.h>
#include "windows.h"

int main(int argc, char *argv[])
{
	system("color 70");
	int i,j;
	int a[100],b[25],c[10000];
	j=1;
	//数组赋初值
	for (i=2;i<=100 ;i++ )
	{
		a[i]=i;
	}
	//在数组a中用2、3、5、7去筛。剩下的就是素数
	for (i=2;i<=100 ;i++ )
	{
		if ((i%2==0&&i!=2)||(i%3==0&&i!=3)||(i%5==0&&i!=5)||(i%7==0&&i!=7))
		{
			a[i]=0;
		}
	}
	//把100以内的素数存放在数组b中
	for (i=2,j=0;i<=100 ;i++ )
	{
		if (a[i]!=0)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
	printf("\n输出数组b(100以内的素数):\n");
	for (i=0;i<25 ;i++ )
	{
		printf("%3d",b[i]);
	}
	//对数组c[10000]赋初值
	for (i=2;i<10000 ;i++ )
	{
		c[i]=i;
	}
	//用数组b[]中的元素去逐一筛数组c[10000]
	for (j=0;j<25 ;j++ )
	{
		for (i=2;i<10000 ;i++ )
		{
			if (c[i]%b[j]==0&&c[i]!=0&&c[i]!=b[j])
			{
				c[i]=0;
			}
		}
	}

	printf("\n输出10000以内的素数\n");
	for (i=2,j=0;i<10000 ;i++ )
	{
		if (c[i]!=0)
		{
			printf("%6d",c[i]);
			j++;
		}
		if (j%10==0&&c[i]!=0)
		{
			printf("\n");
		}
	}
	return 0;
}
