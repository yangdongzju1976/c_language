#include <stdio.h>
#include <windows.h>
int print_location(int,int);
int main(int argc, char *argv[])
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	int i,j;
	int x,y;
	system("color 70");
	printf("小球显示在多少行？\n");
	scanf("%d",&x);
	printf("小球显示在多少列？\n");
	scanf("%d",&y);
	printf("------从此行开始计算----\n");
	//把光标移动到第x行
	for (i=1;i<x ;i++ )
	{
		//printf("%d\n",x-i);
		printf("\n");
	}
	//把光标移动到第y列
	for (j=0;j<y-1 ;j++ )
	{
			//printf("%d",j);
		printf(" ");
	}
	//输出小球
	printf("*");

	printf("\n\n\n");
	return 0;
}
