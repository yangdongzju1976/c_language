#include <stdio.h>
//循环嵌套
int main()
{
	int i,j,k;
	printf("行号  前导空格 星数\n");
	for (i=1;i<15 ;i++ )
	{
		
		
		printf("i=%d\tk=%d\tj=%d",i,14-i,2*i-1);
		printf("\t\t\t\t\t");
		
		
		for (k=i;k<14 ;k++ )
		{
			printf(" ");
		}
		//输出*
		for (j=1;j<=2*i-1 ;j++ )
		{
			
			printf("*");

		}
		
		printf("\n");

		
	}
	
	for (i=15;i<28 ;i++ )
	{
		//if (i>=23) printf(" ");
		printf("i=%d\tk=%d\tj=%d",i,i-14,55-2*i);
		
		//输出前导空格
		if (i>=23) printf(" ");
		printf("\t\t\t\t\t");
		for (k=1;k<=i-14 ;k++ )
		{
			printf(" ");
		}
		
		//输出*
		for (j=1;j<=28-i ;j++ )
		{
			printf("*");
		}
		for (j=1;j<=27-i ;j++ )
		{
			
			printf("*");

		}

		printf("\n");

		
		

	}
	return 0;
}
