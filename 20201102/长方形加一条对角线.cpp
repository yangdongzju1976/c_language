#include <stdio.h>
#include "windows.h"
//���ֱ��������
int main(int argc, char *argv[])
{

	int i,j,k,m,n;
	printf("����n��ֵ\n");
	scanf("%d",&n);
	system("color 70");
	//�����һ��
	
	printf("\n		");
	if (n%2==0)
	{
		//�����һ��
		for (i=0;i<=n ;i++ )
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
		printf("\n");
		//����м����
		
		for (i=1;i<n ;i++ )
		{
			printf("		*");
			for (j=1;j<i;j++ )
			{
				printf(" ");
			}
			printf("*");
			for (k=0;k<n-i-1 ;k++ )
			{
				printf(" ");
			}
			printf("*\n");
		}
		//printf("*");
		//������һ��
		printf("		");
		for (i=0;i<n+1 ;i++ )
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
	else
	{
		for (i=1;i<n ;i++ )
		{
			printf("*");
			for (j=0;j<i;j++ )
			{
				printf(" ");
			}
			printf("*\n");
		}
		
		for (i=0;i<n+3 ;i++ )
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
