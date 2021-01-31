//¼ÆËã1+2+3+4+.....100µÄºÍ
#include "stdio.h"
int main()
{
	int i,sum=0;
	i=1,sum=0;
	loop:if (i<=10)
	{	
		sum=sum+i; //sum+=i;
		i++;
		printf("i=%d",i);
		
	}
	printf("sum=%d\n",sum);
	return 0;
}

