#include "stdio.h"
int main()
{
	int i,sum=0;
	i=1,sum=0;
	loop: if (i<100)
	{
		sum=sum+i;
		i++;
		goto loop;
	}
	printf("sum=%d",sum);
	return 0;
}
