#include <stdio.h>
#include <windows.h>
int print_location(int,int);
int main(int argc, char *argv[])
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	printf("Hello, world\n");
	print_location(10,5);
	printf("\n\n\n");
	return 0;
}
//����---�ڵ�x�У�y����ʾС��
int  print_location(int x,int y)
{
	int i,j;
	//�ѹ���ƶ�����x��
	for (i=0;i<x ;i++ )
	{
		printf("\n");
	}
	//�ѹ���ƶ�����y��
	for (j=0;j<y ;j++ )
	{
		printf(" ");
	}
	//���С��
	printf("O");

	return 0;
	
}
