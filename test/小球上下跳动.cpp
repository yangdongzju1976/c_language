//在屏幕的指定坐标显示静止的小球
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
int main()
{
	int i,j,k;
	int x=5;//行坐标
	int y=10; //列坐标
	int direction=1; //方向，1代表向下 -1代表向上。
	//隐藏光标
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	//纵坐标10，横坐标5。显示一个小球
	//printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n1234*");
	
	while (1)
	{
		x+=direction;
		//1.清屏
		system("cls");
		//2.输出第K行上面的空行
		for (i=0;i<x ;i++ )
		{
			printf("\n");
		}
		//3.输出前面的空格
		for (j=0;j<y ;j++ ) //把10换成k 斜着走，为什么
		{
			printf(" ");
		}
		//4.输出*
		printf("%d",x);
		if (x==9)
		{
			direction*=-1;
		}
		if (x==0)
		{
			direction*=-1;
		}
		Sleep(110);
    }
	printf("\n\n\n");
	Sleep(99999);
	return 0;
}
