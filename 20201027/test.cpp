#include <stdio.h>
#include "windows.h"

int main(int argc, char *argv[])
{

	int i,j,k,m,n;
	printf("输入n的值\n");
	scanf("%d",&n);
	system("color 70");
	//输出第一行
	printf("\n\n\n\n");
	printf("   ");
	for (i=0; i<2*n;i++ )
	{
		if (i%2==1)
		{
			printf(" ");
		}
		else 
		{
			printf("*");
		}

	}
	printf("\n\n\n\n");
}