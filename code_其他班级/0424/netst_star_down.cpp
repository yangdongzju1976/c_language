#include <stdio.h>
//ѭ��Ƕ��
int main()
{
	int i,j,k,t;
	//����ϰ벿��
	printf("�к� ǰ���ո� ����\n");
	for (i=1;i<15 ;i++ )// i��������
	{
		printf("%d\t%d\t%d",i,14-i,2*i-1);
		
		for (k=1;k<=14-i ;k++ ) //���ǰ���ո�
		{
			printf(" ");
		}
		//���* ����
		for (j=1;j<=i ;j++ )// j����ÿһ�е�*��
		{
			printf("*");
		}
		//���* �Ұ��
		                                 //printf("\t");��£���뿪
		for (t=1;t<=i-1 ;t++ )
		{
			printf("*");
		}

		printf("\n");
	}
	//����°벿��
	//printf("\n");
	for (i=1;i<14 ;i++ )// i��������
	{
		
		printf("%d\t%d\t%d",14+i,i,27-2*i));

		for (k=1;k<=i ;k++ ) //���ǰ���ո�
		{
			printf(" ");
		}
		//���* ����
		for (j=1;j<=14-i ;j++ )// j����ÿһ�е�*��
		{
			printf("*");
		}
		//���* �Ұ��
		//printf("\t"); //��£���뿪
		for (t=1;t<=13-i ;t++ )
		{
			printf("*");
		}


		printf("\n");


	}
	
	return 0;
}
