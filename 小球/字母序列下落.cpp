#include <stdio.h>
#include <windows.h>
int print_location(int,int,char);
int main(int argc, char *argv[])
{
	int i,j;
	char c;
	c='A';
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	printf("Hello, world\n");
	system("color 70");
	while (1)
	{
		for (i=0;i<10 ;i++ )
		{
			print_location(i,2*i,c);
			Sleep(200);
			system("cls");
		}
		c++;
		if (i==10)
		{
			for (j=9;j>0 ;j-- )
		{
			print_location(j,2*j,c);
			Sleep(200);
			system("cls");
		}
		}
		
		if (c>120)
		{
			c=65;
		}
	}
	
	
	printf("\n\n\n");
	return 0;
}
//����---�ڵ�x�У�y����ʾС��
int  print_location(int x,int y,char c)
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
	printf("%c",c);

	return 0;
	
}
