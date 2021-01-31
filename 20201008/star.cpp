#include "stdio.h"
#include "windows.h"  //Sleep()
int main()
{
	int i;
	
	for (i=0;i<4 ;i++ )
	{
		printf("%d\n",i);  //输出5个空行
	}
	for (i=0;i<6 ;i++ )
	{
		printf("%d",i);//输出6个空格
	}

	//输出*2
	printf("*");
	system("cls");
	Sleep(1000);
	for (i=1;i<10 ;i++ )
	{
		printf("%d",i);
	}
	system("color 07");
	for (i=8;i>3 ;i-- )
	{
		printf("\n        %d",i);
	}
	/*for (i=100;i>0 ;i-- )
	{
		printf("\ni=%d",i);
	}
	/*for (i=0;i<50 ;i++ )
	{
		printf("\n*");
	}
	*/
	printf("\n\n\n\n");
}