#include <stdio.h>
#include "windows.h"
int main(int argc, char *argv[])
{	
	system("color 70");
	//����һ���������е�����
	int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17}};
	
	//������Ԫ�ؽ��и�ֵ
	
	//�������
	printf("\n�����ά����\n");
	//��ѭ�������� ��ѭ�������С�
	for (int i = 0;i < 5; i++)
	{
		//��ѭ��ÿִ��һ�ܾ����һ�С�
		for (int j=0;j<4 ;j++ )
		{
			printf("a[%d][%d]=%2d\t",i,j,a[i][j]);
		}
		//ÿ���һ�оͻ���
		printf("\n");
	}


	
	return 0;
}
