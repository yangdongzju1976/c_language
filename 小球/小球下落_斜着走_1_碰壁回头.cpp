#include <stdio.h>
#include <windows.h>
int print_location(int,int,char);
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
	bottom=20;
	//С������ұ߽�
	int left,right;
	left=0;
	right=35;
	//�ַ� ��ֵ
	char c=65;//'A'

	//С����ƶ����� 1�������ƶ�  -1�������ƶ�
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
			//���velocity_x==1���൱��x++ ����X���������ƶ� ���velocity_x==1���൱��x--����X���������˶���
			x=x+velocity_x;
			//���velocity_y==1���൱��y++ ����Y���������ƶ� ���velocity_y==1���൱��y--����Y���������˶���
			y=y+velocity_y;
		//����
		system("cls");
		//�ַ���A~Z֮��任
		if (c>'Z')
		{
			c=65;//65==��A'
		}
		if (c<65)
		{
			c='Z';
		}
		//��ʾС��
		print_location(x,y,c);
		Sleep(50);
		//���������ף�����
		//if ((x==top)||(x==bottom))
		if (x==top)
		{
			//�䷽��
			velocity_x=-1*velocity_x;
			if (velocity_y==0)
			{
				velocity_y=-1;
			}
			

			//�����һ���ַ�
			c++;
			//��ɫ
			//system("color 70");
		}
		if (x==bottom)
		{
			velocity_x=-1*velocity_x;
			velocity_y=0;
		}
		//��������ұ߽磬����
		if ((y==left)||(y==right))
		{
			//�䷽��
			velocity_y=-1*velocity_y;
			//�����һ���ַ�
			c++;
			//��ɫ
			//system("color 7c");

		}
		

	}
	//print_location(5,6,'A');
	//system("cls");
	//print_location(5,6,'B');
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
