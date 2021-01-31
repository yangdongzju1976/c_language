#include<windows.h> // -----Sleep()让进程暂停执行一段时间
#include<stdio.h>
#include "stdlib.h" //  ----system()指定的命令名称或程序名称传给要被命令处理器执行的主机环境，并在命令完成后返回。
#define stoptimeshort 40  //宏替换，用 数字40去替换程序出现的标识符stoptimeshort
#define stoptimelong 100
int main()
{
   
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};//隐藏光标
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	 int i,j;//定义一个变量i
	for (i=0;i<300 ;i++ )
	{
		system("cls");
		for (j=0;j<i ;j++ )
		{
			printf(" ");
		}
		
		printf("*");
		Sleep(100);//Sleep(i*10)
		
		
	}
	return 0;
}