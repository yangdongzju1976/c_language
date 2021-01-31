#include <stdio.h>
#include "windows.h"
//输出直角三角形
int main(int argc, char *argv[])
{

	int i,j,k,t,p,m,n;
	printf("输入n的值\n");
	//scanf("%d",&n);
	system("color 70");
	//输出第一行
	n=33;
	printf("\n		"); //第一行的前导空格
	if (n%2==0)  //偶数行
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
		
		for (i=1;i<n/2 ;i++ )
		{
			printf("		*");//前导空格与第一颗星
			for (j=1;j<i;j++ )  //空格
			{
				printf(" ");
			}
			printf("*");		//星
			
			   //中间空格
			
			for (t=0; t<=n-2*i-2;t++ )
				{
					printf(" ");
				}
			printf("*");
			
			for (k=1;k<i;k++ )  //空格
			{
				printf(" ");
			}
			printf("*\n");     //星加换行
			
		}
		//输出最后一行
		printf("		");//前导空格
		for (i=0;i<=n ;i++ )
		{
			if (i%2==0||i==n/2)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
			
		}
		printf("\n");
		
	}
	else  //奇数行
	{	
		//输出第一行
		for (i=0;i<n ;i++ )
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
		printf("*\n");
		//输出中间的行
		
		for (i=1;i<n/2 ;i++ )
		{
			printf("		*");//前导空格与第一颗星
			for (j=1;j<i;j++ )  //空格
			{
				printf(" ");
			}
			printf("*");		//星
			
			   //中间空格
			
			for (t=0; t<=n-2*i-3;t++ )
				{
					printf(" ");
				}
			printf("*");
			
			for (k=1;k<i;k++ )  //空格
			{
				printf(" ");
			}
			printf("*\n");     //星加换行
			
		}
		//输出最后一行
		printf("		");//前导空格
		for (i=0;i<n ;i++ )
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
		printf("*\n");
	}	
	printf("\n\n\n\n");
	
	return 0;
}
