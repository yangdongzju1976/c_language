#include <stdio.h>

int main()
{
	int i,ax,a[100];//a[0]....a[99]
	//printf("\nax=%d\n",ax);
	for (i=0;i<=99 ;i++ )
	{
		a[i]=i;
	}
	
	for (i=0;i<100 ;i++ )
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("Hello, world\n");
	
	return 0;
}
