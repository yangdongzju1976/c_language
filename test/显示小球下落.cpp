//在屏幕的指定坐标显示静止的小球
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
int main()
{
	int i,j,k;
	int x=5;
	int y=10;
	//隐藏光标
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	//纵坐标10，横坐标5。显示一个小球
	//printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n1234*");
	
	for (k=0;k<20 ;k++ )
	{
		
		//1.清屏
		system("cls");
		//2.输出第K行上面的空行
		for (i=0;i<k ;i++ )
		{
			printf("\n");
		}
		//3.输出前面的空格
		for (j=0;j<k ;j++ ) //把10换成k 斜着走，为什么
		{
			printf(" ");
		}
		//4.输出*
		printf("*");
		Sleep(80);
    }
	printf("\n\n\n");
	Sleep(99999);
	return 0;
}
