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
		
		for (i=1;i<n/2 ;i++ )
		{
			printf("		*");//ǰ���ո����һ����
			for (j=1;j<n/2-i;j++ )  //�ո�
			{
				printf(" ");
			}
			printf("*");		//��
			for (t=0; t<=2*i-2;t++ )  //�м�ո�
				{
					printf(" ");
				}
			printf("*");  //��
			
			for (k=1;k<n/2-i;k++ )  //�ո�
			{
				printf(" ");
			}
			printf("*\n");     //�Ǽӻ���
			
		}
		//������һ��
		printf("		");//ǰ���ո�
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
		
	}
	else  //������
	{	
		//�����һ��
		for (i=0;i<n ;i++ )
		{
			if (i%2==0||i==(n/2))
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
		
		for (i=1;i<n/2 ;i++ )
		{
			printf("		*");//ǰ���ո����һ����
			for (j=1;j<n/2-i;j++ )  //�ո�
			{
				printf(" ");
			}
			printf("*");	
			//��
			for (t=0; t<=2*i-2;t++ )  //�м�ո�
				{
					printf(" ");
				}
			printf("*");  //��
			
			for (k=1;k<n/2-i;k++ )  //�ո�
			{
				printf(" ");
			}
			printf("*\n");     //�Ǽӻ���
			
		}
		//������һ��
		printf("		");//ǰ���ո�
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
		printf("\n");
	}	
	printf("\n\n\n\n");
	
	return 0;
}
