#include <stdio.h>
#include <math.h>
//Êä³ö1~100ËØÊı
int main()
{ int m,i,k,j;
   
    m=1;
  
	for(j=2;j<60000;j++)
	{
		k=sqrt(j);
		
		for(i=2;i<=k;i++)
     if(j%i==0)  break;

	if(i>k)	
		{
		printf("%d\t",j);
		m++;
		}
	if (m%11==0) 
		{
		m=1;
		printf("\n");
		}
	}
   printf("\n");
   return 0;
}
