#include <stdio.h>
#include "windows.h"
void print_star(int m);
void print_space(int m);
void print_triangle(int t);
int main(int argc, char *argv[])
{
	system("color 70");
	int x;
	printf("\n输入三角形的层数\nx=");
	scanf("%d",&x);
	print_triangle(x);
	printf("\n\n\n\n");
	return 0;
}
//函数定义
	//输出*
	void print_star(int m)
	{
		
		for (int i=0;i<m ;i++ )
		{
			printf("*");
		}
	}
	//输出空格
	void print_space(int n)
	{
		for (int i=0;i<n ;i++ )
		{
			printf(" ");
		}
	}
	//输出三角形
	void print_triangle(int t)
	{
		for (int i=1;i<=t ;i++ )
		{
			//第i层
				//1.输出t-i个空格
				print_space(t-i);
				//2.输出i个星
				print_star(2*i-1);
				//3.换行
				printf("\n");

		}
	}
