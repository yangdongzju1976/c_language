#include <stdio.h>
#include <windows.h>
int print_location(int,int);
int main(int argc, char *argv[])
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	printf("Hello, world\n");
	print_location(10,5);
	printf("\n\n\n");
	return 0;
}
//函数---在第x行，y列显示小球
int  print_location(int x,int y)
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
	printf("O");

	return 0;
	
}
