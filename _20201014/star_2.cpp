#include "stdio.h"
#include "windows.h"  //Sleep()
int main()
{
	int i;
	//���5������
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	printf("\a");
	
	for (i=1;i<10 ;i++ )
	{
		printf("%d",i);
		Sleep(5);
		system("cls");

	}
	printf("\a");
	

	printf("\n\n\n\n");
}