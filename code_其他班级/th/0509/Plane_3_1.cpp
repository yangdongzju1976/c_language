#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> 
void hidden();
// ȫ�ֱ���
int position_x,position_y; //�ɻ�λ��
int  high,width;		//����ߴ�
void startup()    //���ݳ�ʼ��
{
	high=20;
	width=30;
	position_x=high/2;
	position_y=width/2;
}
void show()  //��ʾ��ʼ����
{
	system("cls");
	int i,j;
	for (i=0;i<high ;i++ )
	{
		for (j=0;j<width ;j++ )
		{
			if ((i==position_x)&&(j==position_y))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
void updateWithoutInput() //���û������޹صĸ���
{
}
void updateWithInput()  //���û������йصĸ���
{
	char input;
	if (kbhit())	//�ж��Ƿ�������
	{
		input=getch(); //�����û��Ĳ�ͬ�������ƶ�����������س���
		if (input=='a')
			{
				position_y--;
			}
			if (input=='d')
			{
				position_y++;
			}
			if (input=='w')
			{
				position_x--;
			}
			if (input=='s')
			{
				position_x++;
			}
	}
}
int main() 
{	
	hidden();  //���ع��
	startup();	//���ݳ�ʼ��
	while (1)
	{
		show();   //��ʾ�ɻ�
		updateWithoutInput(); //���û������޹صĸ��¡�
		updateWithInput(); //���û������йصĸ���
	}

	
	
	return 0;
}

void hidden() //���ع��
	{
		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cci;
		GetConsoleCursorInfo(hOut, &cci);
		cci.bVisible = FALSE;
		SetConsoleCursorInfo(hOut, &cci);
	}