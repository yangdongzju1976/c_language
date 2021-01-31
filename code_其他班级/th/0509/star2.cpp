#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> //sleep() 控制速度
void hidden();
int main()
{
	int i,j;
	int x,y;
	x=5,y=10;
	char input;
	int isFire=0;
	hidden();
	int isK=0; 
	int ny=5;
	while (1)
	{	
		system("cls");
		if (isK==0)
		{
			for (i=0;i<ny ;i++ )
			{
				printf(" ");
			}
			printf("+");
		}

		

		if (isFire==0)
		{
		
			for (i=0;i<x ;i++ )
			{
				printf("\n");
			}
		}
		else
		{
			printf("\n");
			for (i=0;i<x ;i++ )
			{
				for (j=0;j<y+2 ;j++ )
				{
					printf(" ");
				}
				
				printf("|");
				printf("\n");
				if (y+2==ny)  // +2是因为激光在飞机的正中间，距最左边2个坐标
				isK = 1; // 击中靶子
				isFire = 0;
				//Sleep(200);
			}
			isFire=0;
		}
		for (j=0;j<y ;j++ )
		{
			printf(" ");
		}
		printf("  *");
		printf("\n");
		for (j=0;j<y ;j++ )
		{
			printf(" ");
		}
		printf("*****");
		printf("\n");
		for (j=0;j<y ;j++ )
		{
			printf(" ");
		}
		printf(" * *");
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
			if (input==' ')
			{
				isFire=1;
				
				
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
