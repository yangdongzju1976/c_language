#include <stdio.h>
#include <windows.h>
int print_location(int,int);
int print_border();
int main(int argc, char *argv[])
{
	system("color 70");
	//����ѭ������
	int i,j;
	//x:С��ĺ����꣬y:С���������
	int x,y;
	//С��Ķ�����
	int top,bottom; 
	top=0;
	bottom=30;
	//С������ұ߽�
	int left,right;
	left=0;
	right=45;

	//С����ƶ�����
	int velocity_x,velocity_y;
	velocity_x=1;
	velocity_y=1;

	//���ع��Ĵ���
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	//��ѭ��
	while (1)
	{
		//С�������任
		x=x+velocity_x;
		y=y+velocity_y;
		//����
		system("cls");
		
		//��ʾС��
		print_location(x,y);
		Sleep(500);
		
		//���������ף�����
		if ((x==top)||(x==bottom))
		{
			velocity_x=-1*velocity_x;
		}
		//��������ұ߽磬����
		if ((y==left)||(y==right))
		{
			velocity_y=-1*velocity_y;
		}


	}
	
	printf("\n\n\n");
	return 0;
}
//����---�ڵ�x�У�y����ʾС��
int  print_location(int x,int y)
{
	int i,j,k;
	//printf("\n\n\n");
	//�������ĺ���
	for (i=0;i<46 ;i++)
	{
		printf("-");
	}
	//����
	printf("\n");
	//�ѹ���ƶ�����x��
	for (i=0;i<x ;i++ )
	{
		//��һ�е�����
		printf("|");
		//�м�Ŀո�
		for (k=0;k<45 ;k++ )
		{
			printf(" ");
		}
		//���һ�е�����
		printf("|");
		//����
		printf("\n");
	}
	//�ѹ���ƶ�����y��
	printf("|");
	for (j=1;j<y ;j++ )
	{
		printf(" ");
	}
	//���С��
	printf("*");
	//���*���������
		//*����Ŀո�
		for (i=0;i<45-y ;i++ )
		{
			printf(" ");
		}
		//����
		printf("|\n");
	//���*���������
		for (i=0;i<30-x ;i++ )
		{
			printf("|");
			for (k=0;k<45 ;k++ )
			{
				printf(" ");
			}
			printf("|\n");
		}
	//���������
	for (i=0;i<45 ; i++)
	{
		printf("-");
	}
	return 0;
	
}
//����ܱ߷���
int print_border()
{
	int i,j;
	//�������ĺ���
	for (i=0;i<47 ;i++ )
	{
		printf("-");
	}
	return 0;
}
