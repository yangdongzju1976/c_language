#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> 
void hidden();
// 全局变量
int position_x,position_y; //飞机位置
int  high,width;		//画面尺寸
void startup()    //数据初始化
{
	high=20;
	width=30;
	position_x=high/2;
	position_y=width/2;
}
void show()  //显示初始画面
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
void updateWithoutInput() //与用户输入无关的更新
{
}
void updateWithInput()  //与用户输入有关的更新
{
	char input;
	if (kbhit())	//判断是否有输入
	{
		input=getch(); //根据用户的不同输入来移动，不必输入回车。
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
	hidden();  //隐藏光标
	startup();	//数据初始化
	while (1)
	{
		show();   //显示飞机
		updateWithoutInput(); //与用户输入无关的更新。
		updateWithInput(); //与用户输入有关的更新
	}

	
	
	return 0;
}

void hidden() //隐藏光标
	{
		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cci;
		GetConsoleCursorInfo(hOut, &cci);
		cci.bVisible = FALSE;
		SetConsoleCursorInfo(hOut, &cci);
	}