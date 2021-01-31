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
//重新定义high,width,bullet_x，屏蔽全局变量。
int show(int high,int width,int bullet_x,char plane,char enemy,char bullet ) //显示画面
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
	char input='A';
	int t=0;
	int i=position_x;
	while (1)
	{
		
		//在高20宽30的方框内显示子弹的运动
		
		//如果子弹到达第0行，则返回到飞机的纵坐标。
		
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
