#include <stdio.h>
#include "windows.h"
int main(int argc, char *argv[])
{
	int i,j,k,m,n;
	system("color 70");
	printf("����n��ֵ��");
	scanf("%d",&n);
	if (n%3==0)
	{
	
	//�����һ��
		for (i=0;i<n ;i++ ) //ǰ���ո�
		{
			printf(" ");
		}
		printf("*\n");
	

	//����м���
		
		for (i=1;i<=n-2 ;i++ )
		{
			//���ǰ���ո�
			for (j=0;j<(n-i) ;j++ )
			{
				printf(" ");
			}
			//���*
			printf("*");
			//����ո�
			for (k=1;k<i ;k++ )
			{
				printf(" ");
			}
			//���*
			printf("*\n");
		}
	//������һ��
	
		for (i=1;i<n+1 ;i++ )
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
	else
	{
		//�����һ��
		for (i=0;i<n ;i++ ) //ǰ���ո�
		{
			printf(" ");
		}
		printf("*\n");
	

	//����м���
		
		for (i=1;i<=n-2 ;i++ )
		{
			//���ǰ���ո�
			for (j=0;j<(n-i) ;j++ )
			{
				printf(" ");
			}
			//���*
			printf("*");
			//����ո�
			for (k=1;k<i ;k++ )
			{
				printf(" ");
			}
			//���*
			printf("*\n");
		}
	//������һ��
	
		for (i=1;i<n+3 ;i++ )
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
		
		
	}
	printf("\n\n\n");
	return 0;
}
