#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,j,k;//循环变量
	int x,y; //飞机的坐标.
	int ny=5;//目标的纵坐标
		//输出目标
		x=10,y=20;
	char input;
	int isFire = 0;
	int isKill=0;
	while (1)
	
		system("cls");
		if (!isKill)
		{
		
		for (i=0;i<ny ;i++ )
		//输出目标
		printf(" ");
		printf("+");
		}
	
		//输出飞机
		if (!isFire)
		{
		
		for (j=0;j<x ;j++ )
		printf("\n");
		}
		else
		{
			for (i=0;i<x ;i++ )
			{
				for (j=0;j<y ;j++ )
				printf(" ");
				printf("|\n");
				}
		}

		for (k=0;k<=y ;k++ )
		printf(" ");
		printf("  *");
		printf("\n");
		for (k=0;k<=y ;k++ )
			printf(" ");
		printf("*****");
		printf("\n");
		for (k=0;k<=y ;k++ )
			printf(" ");
		printf(" * *");
		printf("%c",input);
		printf("\n");



		if(kbhit()) 
		{
			input=getchar();
			if (input=='w')
				x--;
			
			if (input=='s')
				x++;
			if (input=='a')
				y--;
			if (input=='d')
				y++;
			if (input == ' ')
				isFire = 1;
		}



		
		return 0;
}
