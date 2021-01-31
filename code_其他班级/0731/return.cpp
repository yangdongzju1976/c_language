#include <stdio.h>
#include "math.h"

int main()
{
	int i,ax,j;
	
	
for (j=2;j<=100 ;j++ )
{

	for (i=2;i<=sqrt(j) ;i++ )  
	{
		if (j%i==0)
			break;
	}

	if (i>sqrt(j))
		printf("%d\t",j);
	

}
	printf("\n\n\n\n");
	return 0;
}
