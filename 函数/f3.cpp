	#include <stdio.h>
	#include "windows.h"
	void print_star(int m);
	void print_space(int m);
	void print_triangle(int t);
	int main(int argc, char *argv[])
	{
		system("color 70");
		
		for (int i=1;i<12 ;i++ )
		{
			print_triangle(i);
			printf("\n");
		}
		
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
					print_star(i);
					//3.换行
					printf("\n");

			}
		}
