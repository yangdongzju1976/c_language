#include<windows.h> // -----Sleep()�ý�����ִͣ��һ��ʱ��
#include<stdio.h>
#include "stdlib.h" //  ----system()ָ�����������ƻ�������ƴ���Ҫ���������ִ�е���������������������ɺ󷵻ء�
#define stoptimeshort 40  //���滻���� ����40ȥ�滻������ֵı�ʶ��stoptimeshort
#define stoptimelong 100
int main()
{
   
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};//���ع��
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	 int i,j;//����һ������i
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