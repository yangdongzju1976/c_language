#include <stdio.h>
#include "windows.h"

int main(int argc, char *argv[])
{

	int i,j,k,m,n;
	printf("����n��ֵ\n");
	scanf("%d",&n);
	system("color 70");
	//�����һ��
	printf("   ");
	for (i=0; i<2*n;i++ )
	{
		if (i%2==1)
		{
			printf(" ");
		}
		else 
		{
			printf("o");
		}
	}
	printf("\n");
	//����м����
	for (i=0;i<n ;i++ )
	{
		printf("   o");
		//����м�Ŀո�
		for (j=0;j<2*n-3 ;j++ )
		{
			printf(" ");
		}
		printf("o\n");
	}
	//����������
	printf("   ");
	for (i=0; i<n*2;i++ )
	{
		if (i%2==1)
		{
			printf(" ");
		}
		else 
		{
			printf("o");
		}

	}
	
	printf("\n\n\n\n");
	
	return 0;
}