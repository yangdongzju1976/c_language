#include <stdio.h>
#include "stdlib.h"
#include <windows.h>
#include "conio.h"
//ȫ�ֱ���
int position_x,position_y;//�ɻ�λ��
int bullet_x,bullet_y;//�ӵ�λ��
int enemy_x,enemy_y; //�л�λ��
int high,width; //
int startup()  //���ݳ�ʼ��
{
	high=20;   //��Ϸ��Χ  ---��
	width=30;  //��Ϸ��Χ  ---��
	position_x=high/2;  //�ɻ���λ��---������
	position_y=width/2;  //�ɻ���λ��  ---������
	bullet_x=-1;     //�ӵ��ĳ�ʼ������ 
	bullet_y=position_y; //�ӵ��ĺ�����----���ڷɻ��ĺ�����
	enemy_x=0;         //�л���������
	enemy_y=position_y;  //�л��ĺ�����
	return 0;
}
int show() //��ʾ����
{
	system("cls");
	int i,j;
	for (i=0;i<high ;i++ )
	{
		for (j=0;j<width ;j++ )
		{
			if ((i==position_x)&&(j==position_y))
			{
				printf("*"); //����ɻ�����*����
			}
			else if ((i==enemy_x)&&(j==enemy_y))
			{
				printf("@"); //����л�����@����
			}
			else if ((i==bullet_x)&&(j==bullet_y))
			{
				printf("O");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
int show(int high,int width,char plane,char enemy,char bullet ) //��ʾ����
{
	system("cls");
	int i,j;
	for (i=0;i<high ;i++ )
	{
		for (j=0;j<width ;j++ )
		{
			if ((i==position_x)&&(j==position_y))
			{
				printf("%c",plane); //����ɻ�����*����
			}
			else if ((i==enemy_x)&&(j==enemy_y))
			{
				printf("%c",enemy); //����л�����@����
			}
			else if ((i==bullet_x)&&(j==bullet_y))
			{
				printf("%c",bullet);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

int main(int argc, char *argv[])
{
	//���ع��Ĵ���
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	startup();
	system("color 70");
	char input;
	int t=0;
	int i=position_x;
	while (1)
	{
		
		//show();
		if (bullet_x!=enemy_x)
		{
			show(20,30,'*','@','O');
		}
		else
		{
			show(20,30,'*',' ','O');
			Sleep(1000);
		}
		
		
		if (t==0)
		{
			input=getch();
		}
		
		if (input==' ')
		{
			bullet_x=position_x-1;
			bullet_y=position_y;
			t=1;
			input='?';
		}
		if (bullet_x>-1)
		{
			bullet_x--;

		}
		else
			t=0;
		
	}
	
	return 0;
}
