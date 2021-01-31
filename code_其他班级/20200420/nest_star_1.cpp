#include <stdio.h>
//Ñ­»·Ç¶Ì×
int main()
{
	int i,j,k;

	for (i=1;i<15 ;i++ )
	{
		//Êä³öÇ°µ¼¿Õ¸ñ
		for (k=i;k<14 ;k++ )
		{
			printf(" ");
		}
		//Êä³ö* ×ó²à
		for (j=15-i;j<15 ;j++ )
		{
			
			printf("*");

		}
		//Êä³ö* ÓÒ²à
  	for (j=16-i;j<15 ;j++ )
		{
			
			printf("*");

		}


		printf("\t\t\t\t\t i=%d\tk=%d\tj=%d\n",i,15-i,i);
	}
	
	return 0;
}
