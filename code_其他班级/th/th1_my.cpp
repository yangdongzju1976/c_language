#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	int top,bottom,left,right;//光标区域 
	top=0,bottom=10;
	left=0,right=20;
	int i,j,k;//循环变量
	int now_x,now_y;//当下坐标
	int direction_x=1;
	int direction_y=1;
	now_x=0,now_y=5;
	while (1)
	{
		system("cls");
	now_x+=direction_x;
	now_y+=direction_y;
	for (i=0;i<now_x ;i++ )
	    printf("\n");
	for (j=0;j<now_y ;j++ )
		printf(" ");
	printf("O");
	printf("\n");
	Sleep(100);

	if (now_x==bottom||now_x==top)
	{
		direction_x*=-1;
	}
	
	if (now_y==right||now_y==left)
	{
		direction_y*=-1;
	}
	}
return 0;
}

