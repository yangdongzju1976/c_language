#include <stdio.h>
#include "windows.h"
void print_star(int m);

int main(int argc, char *argv[])
{
	system("color 70");
	//1.输出5个星
	printf("\n1.输出5个星");
	print_star(5);
	//2.输出15个星
	printf("\n2.输出15个星");
	print_star(15);
	//3.循环输出星
	printf("\n3.循环输出星");
	for (int i=1;i<10 ;i++ )
	{
		print_star(i);
	}


	printf("\n\n\n\n");
	return 0;
}
void print_star(int m)
{
	printf("\n");
	for (int i=0;i<m ;i++ )
	{
		printf("*");
	}
	
}

