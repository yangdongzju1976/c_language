#include <stdio.h>
//ѭ��Ƕ��
int main()
{
	int i,j,k;

	for (i=1;i<15 ;i++ )
	{
		//���ǰ���ո�
		for (k=i;k<14 ;k++ )
		{
			printf(" ");
		}
		//���* ���
		for (j=15-i;j<15 ;j++ )
		{
			
			printf("*");

		}
		//���* �Ҳ�
  	for (j=16-i;j<15 ;j++ )
		{
			
			printf("*");

		}


		printf("\t\t\t\t\t i=%d\tk=%d\tj=%d\n",i,15-i,i);
	}
	
	return 0;
}
