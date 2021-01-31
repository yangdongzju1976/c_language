#include <stdio.h>
#include "math.h"
#define ax 799
int main()
{
	int i=sqrt(ax);
	printf("%d的平方根大约是%d\n\n",ax,i);
	printf("%d*%d=%d\n",i,i,i*i);
	printf("%d*%d=%d\n",i+1,i+1,(i+1)*(i+1));
	for (i=2;i<sqrt(ax) ;i++ )
	{
		if (ax%i==0)
			break;

		
	}
	if (i>=sqrt(ax))
		printf("%d是素数",ax);
	else
		printf("%d不是素数",ax);


	printf("\n\n\n\n");
	return 0;
}
