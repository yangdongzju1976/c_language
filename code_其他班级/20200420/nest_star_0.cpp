#include <stdio.h>
//循环嵌套
//输出15行15列个*
int main()
{
	int i,j;

	//外循环，输出15行。
	for (j=1;j<=15;j++)
	{
	
	printf("\n");    //换行
	//内循环，输出一行15个*
	for (i=1;i<=15 ;i++ )
	{
		printf("*");
	}
	

	}


	printf("\n");
	return 0;
}
