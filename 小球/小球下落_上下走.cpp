#include <stdio.h>
#include <windows.h>
int print_location(int,int);
int main(int argc, char *argv[])
{
	int i,j;
	int flag=0;
	system("color 70");
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	printf("Hello, world\n");
	for (i=0;i<10 ;)
	{
		print_location(i,10);
		Sleep(100);
		system("cls");
		if (i==9)
		{
			flag=1;
		}
		if (i==0)
		{
			flag=0;
		}
		if (flag==0)
		{
			i++;
		}
		else
		{
			i--;
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
	printf("O");

	return 0;
	
}
