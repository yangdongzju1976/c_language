#include <stdio.h>
#include "windows.h"
//���ֱ��������
int main(int argc, char *argv[])
{

	int i,j,k,m,n;
	printf("����n��ֵ\n");
	scanf("%d",&n);
	system("color 70");
	
	
	if (n%2==0)  //�����ż����
	{	//�����һ��
		printf("	*\n");
		//����м����
		for (i=1;i<n ;i++ )
		{ //�м���----��һ��*��Ϊ�˱��ⶥ��������������һ��*֮ǰ��ǰ���ո�
			printf("	*");
			//�м���----�м�ո�
			for (j=1;j<i;j++ )
			{
				printf(" ");
			}
			//�м���---����ڶ���* ��Ȼ���С�
			printf("*\n");
		}
		//������һ��
		printf("	"); //ǰ���ո�
		for (i=0;i<n+1 ;i++ )
		{ //�ж�i����ż���������*�Ϳո�*�Ϳո��������
			if (i%2==0)
			{
				printf("*");
			}
			else
			{
			printf(" ");
			}
		}		
	}
	else  //�����������
	{
		printf("\n	*\n");
		for (i=1;i<n ;i++ )
		{
			printf("	*");
			for (j=1;j<i;j++ )
			{
				printf(" ");
			}
			printf("*\n");
		}
		printf("\t");
		for (i=0;i<n ;i++ )
		{
			if (i%2==0)
			{
				printf("*");
			}
			else
			{
			printf(" ");
			}
		}
		printf("*");
	}
	/*if (n%2==0)
	{
		printf(" *");
	}
	else
		printf(" *");
		*/
	printf("\n\n\n\n");
	
	return 0;
}