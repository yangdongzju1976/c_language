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
	high=20;
	width=30;
	position_x=high/2;
	position_y=width/2;
	bullet_x=-1;
	bullet_y=position_y;
	enemy_x=0;
	enemy_y=position_y;
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
				printf("|");
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
int updateWithoutInput()   //���û������޹صĸ���
{
	if (bullet_x>-1)
	{
		bullet_x--; // �ӵ��Ϸ�
	}
	return 0;
}
int updateWithInput()  //���û������йصĸ���
{
	char input;
	if (kbhit()) //��������kbhit()��VC++6.0��Ϊ_kbhit()�������� �ܼ�����ֵ�� ��鵱ǰ�Ƿ��м������룬�����򷵻�һ����0ֵ�����򷵻�0
	{
		input=getch(); //�Ӽ��������ַ�������س�
		switch (input)
		{
		case 'a':position_y--;break;
		case 'A':position_y--;break;
		case 75:position_y--;break;//����� if(input==75)
		case 'd':position_y++;break;
		case 'D':position_y++;break;
		case 77:position_y++;break;//�ҷ����
		case 'w':position_x--;break;
		case 'W':position_x--;break;
		case 72:position_x--;break;//�Ϸ����
		case 's':position_x++;break;
		case 'S':position_x++;break;
		case 80:position_x++;break; //�·����
		case ' ':bullet_x=position_x-1;bullet_y=position_y;break;
					
		}
		
	}
	return 0;
}
int main(int argc, char *argv[])
{
	//���ع��Ĵ���
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	startup();
	while (1)
	{
		show();
		updateWithoutInput();
		updateWithInput();
	}
	
	return 0;
}
