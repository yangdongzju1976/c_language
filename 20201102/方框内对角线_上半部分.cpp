#include <stdio.h>
#include "windows.h"
//���ֱ��������
int main(int argc, char *argv[])
{

	int i,j,k,t,p,m,n;
	printf("����n��ֵ\n");
	scanf("%d",&n);
	system("color 70");
	//�����һ��
	
	printf("\n		"); //��һ�е�ǰ���ո�
	if (n%2==0)  //ż����
	{
		//�ϰ벿��
			//�����һ��
			for (i=0;i<=2*n ;i++ )
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
				printf("		*");//ǰ���ո����һ����
				for (j=1;j<i;j++ )  //�ո�
				{
					printf(" ");
				}
				printf("*");		//��
				
				   //�м�ո�
				
				for (t=0; t<=2*n-2*i-2;t++ )
					{
						printf(" ");
					}
				printf("*");
				
				for (k=1;k<i;k++ )  //�ո�
				{
					printf(" ");
				}
				printf("*\n");     //�Ǽӻ���
				


			}
			//������һ��
			printf("		");//ǰ���ո�
			for (i=0;i<=2*n ;i++ )
			{
				if (i==2*n||i==0||i==n||i==n/2) //i%2==0||
				{
					printf("*");
				}
				else 
				{
					printf(" ");
				}
				
			}
			printf("\n");
		
		
	}
	else  //������
	{	
		//�ϰ벿��
			//�����һ��
			for (i=0;i<2*n ;i++ )
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
			
			for (i=1;i<n-1 ;i++ )
			{
				printf("		*");//ǰ���ո����һ����
				for (j=1;j<i;j++ )  //ǰ��ո�(1)
				{
					printf(" ");
				}
				printf("*");		//��
				
				   //�м�ո�(2)
				
				for (t=0; t<2*n-2*(i+1)-1;t++ )
					{
						printf(" ");
					}
				printf("*");
				
				for (k=1;k<i;k++ )  //����ո�3��
				{
					printf(" ");
				}
				printf("*\n");     //�Ǽӻ���
				


			}
			//������һ��
			printf("		");//ǰ���ո�
			for (i=1;i<=2*n ;i++ )
			{
				if (i==2*n-1||i==1||i==n) //i%2==0||
				{
					printf("*");
				}
				else 
				{
					printf(" ");
				}
				
			}
			printf("\n");
		
	}	
	printf("\n\n\n\n");
	
	return 0;
}
