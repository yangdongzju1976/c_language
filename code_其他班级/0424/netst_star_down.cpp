#include <stdio.h>
//循环嵌套
int main()
{
	int i,j,k,t;
	//输出上半部分
	printf("行号 前导空格 星数\n");
	for (i=1;i<15 ;i++ )// i控制行数
	{
		printf("%d\t%d\t%d",i,14-i,2*i-1);
		
		for (k=1;k<=14-i ;k++ ) //输出前导空格
		{
			printf(" ");
		}
		//输出* 左半边
		for (j=1;j<=i ;j++ )// j控制每一行的*数
		{
			printf("*");
		}
		//输出* 右半边
		                                 //printf("\t");靠拢与离开
		for (t=1;t<=i-1 ;t++ )
		{
			printf("*");
		}

		printf("\n");
	}
	//输出下半部分
	//printf("\n");
	for (i=1;i<14 ;i++ )// i控制行数
	{
		
		printf("%d\t%d\t%d",14+i,i,27-2*i));

		for (k=1;k<=i ;k++ ) //输出前导空格
		{
			printf(" ");
		}
		//输出* 左半边
		for (j=1;j<=14-i ;j++ )// j控制每一行的*数
		{
			printf("*");
		}
		//输出* 右半边
		//printf("\t"); //靠拢与离开
		for (t=1;t<=13-i ;t++ )
		{
			printf("*");
		}


		printf("\n");


	}
	
	return 0;
}
