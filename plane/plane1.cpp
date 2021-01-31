#include <stdio.h>
#include "stdlib.h"
#include <windows.h>
#include "conio.h"
//全局变量
int position_x,position_y;//飞机位置
int bullet_x,bullet_y;//子弹位置
int enemy_x,enemy_y; //敌机位置
int high,width; //
int startup()  //数据初始化
{
	high=20;   //游戏范围  ---高
	width=30;  //游戏范围  ---宽
	position_x=high/2;  //飞机的位置---纵坐标
	position_y=width/2;  //飞机的位置  ---横坐标
	bullet_x=-1;     //子弹的初始纵坐标 
	bullet_y=position_y; //子弹的横坐标----等于飞机的横坐标
	enemy_x=0;         //敌机的纵坐标
	enemy_y=position_y;  //敌机的横坐标
	return 0;
}
int show() //显示画面
{
	system("cls");
	int i,j;
	for (i=0;i<high ;i++ )
	{
		for (j=0;j<width ;j++ )
		{
			if ((i==position_x)&&(j==position_y))
			{
				printf("*"); //输出飞机，用*代替
			}
			else if ((i==enemy_x)&&(j==enemy_y))
			{
				printf("@"); //输出敌机，用@代替
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
int show(int high,int width,char plane,char enemy,char bullet ) //显示画面
{
	system("cls");
	int i,j;
	for (i=0;i<high ;i++ )
	{
		for (j=0;j<width ;j++ )
		{
			if ((i==position_x)&&(j==position_y))
			{
				printf("%c",plane); //输出飞机，用*代替
			}
			else if ((i==enemy_x)&&(j==enemy_y))
			{
				printf("%c",enemy); //输出敌机，用@代替
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
	//隐藏光标的代码
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
