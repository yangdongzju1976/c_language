#include <stdio.h>

int main()
{
	int i,j,k; 
		for (i=1;i<=10 ;i++ ) 
		{
			printf("\n");
			for(k=0;k<i;k++)
			printf(" ");

			for (j=0;j<-2*i+21;j++ )
		    {
				printf("*");
 			}
			
		}
	printf("\n\n\n\n");
	return 0;
}
