#include <stdio.h>
#include "windows.h"
int main(int argc, char *argv[])
{
	int i,j,k,m,n;
	system("color 70");
	printf("输入n的值：");
	scanf("%d",&n);
	
	//输出第一行
		for (i=0;i<2*n ;i++ ) //前导空格
		{
			printf(" ");
		}
		printf("*\n");
	

	//输出中间行
		
		for (i=1;i<=n-2 ;i++ )
		{
			//输出前导空格
			for (j=0;j<2*(n-i) ;j++ )
			{
				
				printf(" ");
			}
			//输出*
			printf("*");
			//输出中间空格
			for (k=1;k<2*i ;k++ )
			{
				if (i%5==0)
				{
					if (k%2==0)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}					
				}
				else
				{
					printf(" ");
				}
			}
			//输出*
			printf("*\n");
		}
	//输出最后一行
	printf(" ");
		for (i=1;i<2*n+1 ;i++ )
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
		

	
	printf("\n\n\n");
	return 0;
}
