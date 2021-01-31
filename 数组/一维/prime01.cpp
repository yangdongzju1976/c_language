#include <stdio.h>
#include "math.h"
#include "windows.h"
#define N 100
#define M N/3
int main(int argc, char *argv[])
{
	system("color 70");
	int i,j,t,a[M];
	t=0;
	for (i=2;i<N ;i++ )
	{
		for (j=2;j<sqrt(i) ;j++ )
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j>sqrt(i))
		{
			a[t++]=i;
		}
	}
	
	for (i=0;i<t ;i++ )
	{
		printf("%d\t",a[i]);
		if ((i+1)%10==0)
		{
			printf("\n");
		}
	}
	printf("\n%d之中一共有%d个素数\n\n\n",N,t);
	return 0;
}
