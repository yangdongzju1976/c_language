#include <stdio.h>
#include <windows.h>
#include <conio.h>
int print_location(int,int,char);

int main(int argc, char *argv[])
{
	system("color 70");
	//����ѭ������
	int i,j;
	//x:С��ĺ����꣬y:С���������
	int x,y;
	x=5;
	y=10;
	//��ȡ��������
	char input;

	//���ع��Ĵ���
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	//��ѭ��
	input=getch();
	printf("%d",input);
	while (0)
	{
		system("cls");
		
		print_location(x,y,'*');
		//Sleep(10);
		//scanf("%c",&input);
		input=getch();//��ȡ����ֵ,����Ҫ�س�
		switch (input)
		{
		case 'a':y--;break;
		case 'A':y--;break;
		case 75:y--;break;//����� if(input==75)
		case 'd':y++;break;
		case 'D':y++;break;
		case 77:y++;break;//�ҷ����
		case 'w':x--;break;
		case 'W':x--;break;
		case 72:x--;break;//�Ϸ����
		case 's':x++;break;
		case 'S':x++;break;
		case 80:x++;break; //�·����
		
		}
		

	}
	
	printf("\n\n\n");
	return 0;
}
//����---�ڵ�x�У�y����ʾС��
int  print_location(int x,int y,char c)
{
	int i,j;
	//�ѹ���ƶ�����x��
	for (i=0;i<x ;i++ )
	{
		printf("\n");
	}
	//�ѹ���ƶ�����y��
	for (j=0;j<y ;j++ )
	{
		printf(" ");
	}
	//���С��
	printf("%c",c);

	return 0;
	
}
