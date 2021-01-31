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
int updateWithoutInput()   //与用户输入无关的更新
{
	if (bullet_x>-1)
	{
		bullet_x--; // 子弹上飞
	}
	return 0;
}
int updateWithInput()  //与用户输入有关的更新
{
	char input;
	if (kbhit()) //函数名：kbhit()（VC++6.0下为_kbhit()）　　功 能及返回值： 检查当前是否有键盘输入，若有则返回一个非0值，否则返回0
	{
		input=getch(); //从键盘输入字符，无需回车
		switch (input)
		{
		case 'a':position_y--;break;
		case 'A':position_y--;break;
		case 75:position_y--;break;//左方向键 if(input==75)
		case 'd':position_y++;break;
		case 'D':position_y++;break;
		case 77:position_y++;break;//右方向键
		case 'w':position_x--;break;
		case 'W':position_x--;break;
		case 72:position_x--;break;//上方向键
		case 's':position_x++;break;
		case 'S':position_x++;break;
		case 80:position_x++;break; //下方向键
		case ' ':bullet_x=position_x-1;bullet_y=position_y;break;
					
		}
		
	}
	return 0;
}
int main(int argc, char *argv[])
{
	//隐藏光标的代码
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
