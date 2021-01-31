#include <stdio.h>
#include <math.h>
int main()
{ 
	int a,b,c[25],i=0;
	for (a=2;a<=100 ;a++ )
	{
		for (b=2;b<=sqrt(a) ;b++ )
		{
			if (a%b==0)
			{
				break;
			}
		}

		if (b>sqrt(a))
		{
			c[i]=a;
			printf("\nc[%d]=%d",i,c[i]);
			i++;
		}
	}
	
	
	return 0;
}
