#include <stdio.h>
//ѭ��Ƕ��
int main()
{
	int i,j,k,t;

	for (i=1;i<15 ;i++ )// i��������
	{
		
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
	
	return 0;
}
