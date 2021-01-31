#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,k,a[100];
	k=0;
	for (i=2;i<=100 ;i++ )
	{
		for (j=2;j<=sqrt(i) ;j++ )
		{
			if (i%j==0)
			{
				break;
			}

		}
		if (j>sqrt(i))
		{
			a[k++]=i;
		}


	}
	for (i=0;i<=100 ;i++ )
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	
	return 0;
}
