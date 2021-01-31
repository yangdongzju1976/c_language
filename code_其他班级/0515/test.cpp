#include <stdio.h>
#include <math.h>
#define SIZE 100
int main()
{
	int F=floor(sqrt(SIZE));
	int i,j,t1=0;
	int sieve[SIZE];
	for (i=0;i<=SIZE ;i++ )
	{
		sieve[i]=i;
	}
	printf("\nF=%d\n",F);
	
	for (i=2;i<=F;i++ )
	{
		for (j=i+1;j<=SIZE ;j++ )
		{
			if (j%i==0&&sieve[j]!=0)
			{
				sieve[j]=0;
			}
		}

	}
	printf("\n");
	for (i=2;i<=SIZE ;i++ )
	{
		if (sieve[i]!=0)
		{
			printf("%d\t",sieve[i]);
			t1++;
		}
		if (t1==5)
		{
			t1=0;
		printf("\n");
		}		

	}

	
	return 0;
}
