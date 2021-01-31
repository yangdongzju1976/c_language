#include <stdio.h>
#include "windows.h"
int main(int argc, char *argv[])
{
	int i,j,k,m,n;
	system("color 70");
	printf("输入n的值：");
	scanf("%d",&n);
	if (n%3==0)
	{
	
	//输出第一行
		for (i=0;i<n ;i++ ) //前导空格
		{
			printf(" ");
		}
		printf("*\n");
	

	//输出中间行
		
		for (i=1;i<=n-2 ;i++ )
		{
			//输出前导空格
			for (j=0;j<(n-i) ;j++ )
			{
				printf(" ");
			}
			//输出*
			printf("*");
			//输出空格
			for (k=1;k<i ;k++ )
			{
				printf(" ");
			}
			//输出*
			printf("*\n");
		}
	//输出最后一行
	
		for (i=1;i<n+1 ;i++ )
		{
			if (i%2==0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("*");
	}
	else
	{
		//输出第一行
		for (i=0;i<n ;i++ ) //前导空格
		{
			printf(" ");
		}
		printf("*\n");
	

	//输出中间行
		
		for (i=1;i<=n-2 ;i++ )
		{
			//输出前导空格
			for (j=0;j<(n-i) ;j++ )
			{
				printf(" ");
			}
			//输出*
			printf("*");
			//输出空格
			for (k=1;k<i ;k++ )
			{
				printf(" ");
			}
			//输出*
			printf("*\n");
		}
	//输出最后一行
	
		for (i=1;i<n+3 ;i++ )
		{
			if (i%2==0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		
		
	}
	printf("\n\n\n");
	return 0;
}
