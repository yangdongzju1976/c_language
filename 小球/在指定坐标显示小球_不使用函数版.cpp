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
	printf("С����ʾ�ڶ����У�\n");
	scanf("%d",&x);
	printf("С����ʾ�ڶ����У�\n");
	scanf("%d",&y);
	printf("------�Ӵ��п�ʼ����----\n");
	//�ѹ���ƶ�����x��
	for (i=1;i<x ;i++ )
	{
		//printf("%d\n",x-i);
		printf("\n");
	}
	//�ѹ���ƶ�����y��
	for (j=0;j<y-1 ;j++ )
	{
			//printf("%d",j);
		printf(" ");
	}
	//���С��
	printf("*");

	printf("\n\n\n");
	return 0;
}
