#include <stdio.h>
//循环嵌套
int main()
{
	int i,j,k;
	
	for (i=1;i<15 ;i++ )
	{
		
			printf("i=%d\tk=%d\tj=%d",i,15-i,2*i-1);
		
		//输出前导空格
	
		if (i<=5) printf(" ");
		
		for (k=i;k<15 ;k++ )
		{
			printf(" ");
		}
		//输出*
		for (j=15-i;j<15 ;j++ )
		{
			
			printf("*");

		}
		
		for (j=16-i;j<15 ;j++ )
		{
			
			printf("*");

		}
		printf("\n");

		
	}
	
	return 0;
}
