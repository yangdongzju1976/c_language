#include <stdio.h>
//循环嵌套
int main()
{
	int i,j,k,t;

	for (i=1;i<15 ;i++ )// i控制行数
	{
		
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
	
	return 0;
}
