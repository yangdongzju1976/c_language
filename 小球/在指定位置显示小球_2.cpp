#include <stdio.h>
#include <windows.h>
//����������
void print_location(int,int);
void print_location_character(int,int,char);

int main(int argc, char *argv[])
{
	int i,j;
	system("color 70");
	//����������Ϊ�����ع��
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	
	//����print_location()��������ָ��λ����ʾ
	//print_location(3,5);
	//print_location(13,15);
	print_location_character(10,5,'x');
	printf("\n\n\n");
	return 0;
}
//����---�ڵ�x�У�y����ʾС��
void  print_location(int x,int y)
{
	int i,j;
	//�ѹ���ƶ�����x��
	for (i=1;i<x ;i++ )
	{
		printf("%d\n",x-i);
		//printf("\n");
	}
	printf("%d",x-i);
	//�ѹ���ƶ�����y��
	for (j=1;j<y-1 ;j++ )
	{
		printf("%x",j);
		//printf(" ");
	}
	//���С��
	printf("*");

	//return 0;
	
}

//��ָ�����С�����ʾָ���ķ���
void print_location_character(int x,int y,char c)
{
	int i,j;
	//�ѹ���ƶ�����x��
	for (i=0;i<x-1 ;i++ )
	{
		printf("%d\n",x-i);
		//printf("\n");
	}
	printf("%d",x-i);
	//�ѹ���ƶ�����y��
	for (j=2;j<y ;j++ )
	{
		printf("%x",j);
		//printf(" ");
	}
	//���С��
	printf("%c",c);
	
}