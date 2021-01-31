#include <stdio.h>

int main()
{
	int i,j,k,t; 
	for (t=0;t<3 ; t++)
	{
	
		for (i=1;i<=10 ;i++ ) 
		{
			printf("第%d行\t",i);
			for(k=0;k<10-i;k++)
			printf(" ");

			for (j=0;j<2*i-1;j++ )
		    {
				printf("*");
 			}
			printf("\n");
		}

		for (i=1;i<=9 ;i++ ) 
		{
			printf("第%d行\t",10+i);
			for(k=0;k<i;k++)
			printf(" ");

			for (j=0;j<-2*i+19;j++ )
		    printf("*");
 			
			printf("\n");
			
		}
		
	}
	printf("\n\n\n\n");
	return 0;
}
