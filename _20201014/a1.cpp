#include "stdio.h"
#include "windows.h"  //Sleep()
int main()
{
	int i,k=0;
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	for (i=0;i<60000 ;i++ )
	{
		Sleep(200);
		system("cls");
		printf("\n\n\n\n\n                   %d",i%100);
	}
	
	
	
	/*for (i=100;i>0 ;i-- )
	{
		printf("\ni=%d",i);
	}
	/*for (i=0;i<50 ;i++ )
	{
		printf("\n*");
	}
	*/
	printf("\n\n\n\n");
}