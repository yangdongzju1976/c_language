#include <stdio.h>
#include "windows.h"
void print_star(int m);
void print_space(int m);
void print_triangle(int t);
int main(int argc, char *argv[])
{
	system("color 70");
	int x;
	printf("\n���������εĲ���\nx=");
	scanf("%d",&x);
	print_triangle(x);
	printf("\n\n\n\n");
	return 0;
}
//��������
	//���*
	void print_star(int m)
	{
		
		for (int i=0;i<m ;i++ )
		{
			printf("*");
		}
	}
	//����ո�
	void print_space(int n)
	{
		for (int i=0;i<n ;i++ )
		{
			printf(" ");
		}
	}
	//���������
	void print_triangle(int t)
	{
		for (int i=1;i<=t ;i++ )
		{
			//��i��
				//1.���t-i���ո�
				print_space(t-i);
				//2.���i����
				print_star(2*i-1);
				//3.����
				printf("\n");

		}
	}
