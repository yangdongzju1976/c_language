#include <stdio.h>
#include <windows.h>
int print_location(int,int);
int main(int argc, char *argv[])
{
	int i,j;
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	printf("Hello, world\n");
	system("color 70");
	for ( ; 1; )
	{
		for (i=0;i<10 ;i++ )
		{
			print_location(i,i*2);
			Sleep(200);
			system("cls");
		}
		if (i==10)
		{
			for (j=9;j>0 ;j-- )
		{
			print_location(j,j*2);
			Sleep(200);
			system("cls");
		}

		}
	}
	
	
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
	printf("*");

	return 0;
	
}
