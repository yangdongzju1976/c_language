#include "stdio.h"
#include "windows.h"  //Sleep()
int main()
{
	int i;
	//输出5个空行
	system("color 70");
	for (i=1;i<3 ;i++ )
	{
		printf("\n");
	}
	//输出前导空格
	printf("     ");
	//在空格后输出0123456789
	for (i=0;i<10 ;i++ )
	{
		printf("%d",i);
	}
	//每行输出两个数
	/*
	 1        8
     2        7
     3        6
     4        5
     5        4
     6        3
     7        2
     8        1
	*/
	for (i=1;i<9 ;i++ )
	{
		printf("\n     %d        %d",i,9-i);
	}
	//输出最后一行。9876543210
	printf("\n     ");
	for (i=9;i>=0 ;i-- )
	{
		printf("%d",i);
	}

	

	printf("\n\n\n\n");
}