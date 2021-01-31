#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> //sleep()
void hidden();
int main(int argc, char *argv[])
{
	int i,j;
	int x,y;
	x=1,y=10;
	int height=20;
	int	velocity=1;
	hidden();
	while (1)
	{	
		x+=velocity;
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
		Sleep(300);
		if (x==height)
		{
			velocity=-1;
		}
		if (x==0)
		{
			velocity=1;
		}

	}
	printf("\n");
	return 0;
}
//Òþ²Ø¹â±ê
void hidden()
	{
		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cci;
		GetConsoleCursorInfo(hOut, &cci);
		cci.bVisible = FALSE;
		SetConsoleCursorInfo(hOut, &cci);
	}

