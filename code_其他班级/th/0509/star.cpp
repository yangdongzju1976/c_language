#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> //sleep() ¿ØÖÆËÙ¶È
void hidden();
int main()
{
	int i,j;
	int x,y;
	x=5,y=10;
	char input;
	hidden();
	while (1)
	{
		system("cls");
		for (i=0;i<x ;i++ )
		{
			printf("\n");
		}
		for (j=0;j<y ;j++ )
		{
			printf(" ");
		}

		printf("*");
		printf("\n");
		//scanf("%c",&input);
		if (kbhit())
		{
		
			input=getch();
			if (input=='a')
			{
				y--;
			}
			if (input=='d')
			{
				y++;
			}
			if (input=='w')
			{
				x--;
			}
			if (input=='s')
			{
				x++;
			}
		}
	}
	printf("\n");
	return 0;
}
void hidden()
	{
		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cci;
		GetConsoleCursorInfo(hOut, &cci);
		cci.bVisible = FALSE;
		SetConsoleCursorInfo(hOut, &cci);
	}