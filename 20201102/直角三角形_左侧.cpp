#include <stdio.h>
#include "windows.h"
//输出直角三角形
int main(int argc, char *argv[])
{

	int i,j,k,m,n;
	printf("输入n的值\n");
	scanf("%d",&n);
	system("color 70");
	
	
	if (n%2==0)  //如果是偶数行
	{	//输出第一行
		printf("	*\n");
		//输出中间的行
		for (i=1;i<n ;i++ )
		{ //中间行----第一颗*，为了避免顶左输出，在输出第一颗*之前加前导空格。
			printf("	*");
			//中间行----中间空格
			for (j=1;j<i;j++ )
			{
				printf(" ");
			}
			//中间行---输出第二颗* ，然后换行。
			printf("*\n");
		}
		//输出最后一行
		printf("	"); //前导空格
		for (i=0;i<n+1 ;i++ )
		{ //判断i的奇偶，隔列输出*和空格。*和空格交替输出。
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
	else  //如果是奇数行
	{
		printf("\n	*\n");
		for (i=1;i<n ;i++ )
		{
			printf("	*");
			for (j=1;j<i;j++ )
			{
				printf(" ");
			}
			printf("*\n");
		}
		printf("\t");
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
		printf("*");
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
