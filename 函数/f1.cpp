#include <stdio.h>
#include "windows.h"
void print_star();

int main(int argc, char *argv[])
{
	system("color 70");
	//1.库函数
	printf("1.库函数调用\n");
	printf("\tHello, world\n\t");
	//2.自定义函数
	printf("\t2.自定义函数调用\n");
	print_star();
	printf("\n\tHello, world\n");
	print_star();
	printf("\n\n");
	//3.循环调用自定义函数
	printf("\t3.循环调用自定义函数\n");
	for (int i=0; i<10;i++ )
	{
		print_star();
		printf("\n");
	}
	
	return 0;
}
void print_star()
{
	printf("*******************************");
}

