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
//���¶���high,width,bullet_x������ȫ�ֱ�����
int show(int high,int width,int bullet_x,char plane,char enemy,char bullet ) //��ʾ����
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
	char input='A';
	int t=0;
	int i=position_x;
	while (1)
	{
		
		//�ڸ�20��30�ķ�������ʾ�ӵ����˶�
		
		//����ӵ������0�У��򷵻ص��ɻ��������ꡣ
		
		if (input==' ')
		{
			show(20,30,i--,'*','@','O');
			if (i==0)
			{
				i=position_x;
			}
		}
		else
		{
			input=getch();
		}
		
		
	}
	
	return 0;
}
