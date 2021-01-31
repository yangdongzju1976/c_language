#include <stdio.h>
#include <windows.h>
//函数的声明
void print_location(int,int);
void print_location_character(int,int,char);

int main(int argc, char *argv[])
{
	int i,j;
	system("color 70");
	//以下两行是为了隐藏光标
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	
	//调用print_location()函数，在指定位置显示
	//print_location(3,5);
	//print_location(13,15);
	print_location_character(10,5,'x');
	printf("\n\n\n");
	return 0;
}
//函数---在第x行，y列显示小球
void  print_location(int x,int y)
{
	int i,j;
	//把光标移动到第x行
	for (i=1;i<x ;i++ )
	{
		printf("%d\n",x-i);
		//printf("\n");
	}
	printf("%d",x-i);
	//把光标移动到第y列
	for (j=1;j<y-1 ;j++ )
	{
		printf("%x",j);
		//printf(" ");
	}
	//输出小球
	printf("*");

	//return 0;
	
}

//在指定的行、列显示指定的符号
void print_location_character(int x,int y,char c)
{
	int i,j;
	//把光标移动到第x行
	for (i=0;i<x-1 ;i++ )
	{
		printf("%d\n",x-i);
		//printf("\n");
	}
	printf("%d",x-i);
	//把光标移动到第y列
	for (j=2;j<y ;j++ )
	{
		printf("%x",j);
		//printf(" ");
	}
	//输出小球
	printf("%c",c);
	
}