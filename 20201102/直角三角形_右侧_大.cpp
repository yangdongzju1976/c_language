#include <stdio.h>
#include "windows.h"
int main(int argc, char *argv[])
{
	int i,j,k,m,n;
	system("color 70");
	printf("����n��ֵ��");
	scanf("%d",&n);
	
	//�����һ��
		for (i=0;i<2*n ;i++ ) //ǰ���ո�
		{
			printf(" ");
		}
		printf("*\n");
	

	//����м���
		
		for (i=1;i<=n-2 ;i++ )
		{
			//���ǰ���ո�
			for (j=0;j<2*(n-i) ;j++ )
			{
				
				printf(" ");
			}
			//���*
			printf("*");
			//����м�ո�
			for (k=1;k<2*i ;k++ )
			{
				if (i%5==0)
				{
					if (k%2==0)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}					
				}
				else
				{
					printf(" ");
				}
			}
			//���*
			printf("*\n");
		}
	//������һ��
	printf(" ");
		for (i=1;i<2*n+1 ;i++ )
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
		

	
	printf("\n\n\n");
	return 0;
}
