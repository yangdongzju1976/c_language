#include <stdio.h>
//ѭ��Ƕ��
int main()
{
	int i,j,k;
	
	for (i=1;i<15 ;i++ )
	{
		
			printf("i=%d\tk=%d\tj=%d",i,15-i,2*i-1);
		
		//���ǰ���ո�
	
		if (i<=5) printf(" ");
		
		for (k=i;k<15 ;k++ )
		{
			printf(" ");
		}
		//���*
		for (j=1;j<=2*i-1 ;j++ )
		{
			
			printf("*");

		}
		
		printf("\n");

		
	}
	
	return 0;
}
