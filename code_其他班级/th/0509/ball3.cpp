#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> //sleep() 控制速度
void hidden();
int main(int argc, char *argv[])
{
	int i,j;
	int x,y;
	x=5,y=10;
	int height=30;
	int bottom=10;
	int left=10;
	int right=28;
	int	velocity_x=1;
	int velocity_y=1;
	hidden();
	while (1)
	{	
		x+=velocity_x;
		y+=velocity_y;
		system("cls");
		for (i=1;i<=x ;i++ )
		{
			printf("\n");
		}
		for (j=1;j<=y ;j++ )
		{
			printf(" ");
		}
		printf("O");
		Sleep(100);
		if (x==height)
		{
			velocity_x=-1;
		}
		if (x==bottom)
		{
			velocity_x=1;
		}
		if (y==right)
		{
			velocity_y=-1;
		}
		if (y==left)
		{
			velocity_y=1;
		}

	}
	printf("\n");
	return 0;
}
//隐藏光标
void hidden()
	{
		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cci;
		GetConsoleCursorInfo(hOut, &cci);
		cci.bVisible = FALSE;
		SetConsoleCursorInfo(hOut, &cci);
	}

