#include <stdio.h>
#include <windows.h>
#include <conio.h>
int print_location(int,int,char);

int main(int argc, char *argv[])
{
	system("color 70");
	//定义循环变量
	int i,j;
	//x:小球的横坐标，y:小球的纵坐标
	int x,y;
	x=5;
	y=10;
	//获取键盘输入
	char input;

	//隐藏光标的代码
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	//死循环
	input=getch();
	printf("%d",input);
	while (0)
	{
		system("cls");
		
		print_location(x,y,'*');
		//Sleep(10);
		//scanf("%c",&input);
		input=getch();//获取键盘值,不需要回车
		switch (input)
		{
		case 'a':y--;break;
		case 'A':y--;break;
		case 75:y--;break;//左方向键 if(input==75)
		case 'd':y++;break;
		case 'D':y++;break;
		case 77:y++;break;//右方向键
		case 'w':x--;break;
		case 'W':x--;break;
		case 72:x--;break;//上方向键
		case 's':x++;break;
		case 'S':x++;break;
		case 80:x++;break; //下方向键
		
		}
		

	}
	
	printf("\n\n\n");
	return 0;
}
//函数---在第x行，y列显示小球
int  print_location(int x,int y,char c)
{
	int i,j;
	//把光标移动到第x行
	for (i=0;i<x ;i++ )
	{
		printf("\n");
	}
	//把光标移动到第y列
	for (j=0;j<y ;j++ )
	{
		printf(" ");
	}
	//输出小球
	printf("%c",c);

	return 0;
	
}
