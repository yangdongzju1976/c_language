//计算1+2+3+4+.....100的和
#include "stdio.h"
int main()
{
	int i,sum=0;
	i=1,sum=0;
	while (i<=100)
	{
		sum=sum+i;
		i++;
	}
	printf("和=%d\n",sum);
	return 0;
}
