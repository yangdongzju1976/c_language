#include <stdio.h>

int main()
{
	int i,j;
	printf("1\t2\t3\t4\t5\t6\t7\t8\t9");
	printf("\n1\t12\t123\t1234\t12345\t123456\t1234567\t12345678\t9");
	printf("\n");
	for (i=1;i<9 ;i++ )
	{
		for (j=1;j<=8 ;j++ )
		{
			printf("%d",j);
		}
		
	}
	printf("\n");
	
	return 0;
}
