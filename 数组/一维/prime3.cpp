#include <stdio.h>
#include "windows.h"
int main(int argc, char *argv[])
{
	system("color 70");
	int c[100000],i,j,k;
	for (i=2;i<100000 ;i++ )
	{
		c[i]=i;
	}

	for (i=2;i<317 ;i++ )
	{
		for (j=2;j<100000 ;j++ )

		{
			if (c[j]%i==0)
			{
				c[j]=0;
			}
		}
	}
	for (i=2,j=0;i<100000 ;i++ )
	{
		if (c[i]!=0)
		{
			printf("%7d",c[i]);
			j++;
		}
		if (j%10==0&&c[i]!=0)
		{
			printf("\n");
		}
	}
	
	return 0;
}
