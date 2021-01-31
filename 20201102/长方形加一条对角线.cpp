#include <stdio.h>
#include "windows.h"
//输出直角三角形
int main(int argc, char *argv[])
{

	int i,j,k,m,n;
	printf("输入n的值\n");
	scanf("%d",&n);
	system("color 70");
	//输出第一行
	
	printf("\n		");
	if (n%2==0)
	{
		//输出第一行
		for (i=0;i<=n ;i++ )
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
		printf("\n");
		//输出中间的行
		
		for (i=1;i<n ;i++ )
		{
			printf("		*");
			for (j=1;j<i;j++ )
			{
				printf(" ");
			}
			printf("*");
			for (k=0;k<n-i-1 ;k++ )
			{
				printf(" ");
			}
			printf("*\n");
		}
		//printf("*");
		//输出最后一行
		printf("		");
		for (i=0;i<n+1 ;i++ )
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
	else
	{
		for (i=1;i<n ;i++ )
		{
			printf("*");
			for (j=0;j<i;j++ )
			{
				printf(" ");
			}
			printf("*\n");
		}
		
		for (i=0;i<n+3 ;i++ )
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
	/*if (n%2==0)
	{
		printf(" *");
	}
	else
		printf(" *");
		*/
	printf("\n\n\n\n");
	
	return 0;
}
