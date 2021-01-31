#include <stdio.h>

int main()
{
	int i,j;
	//双重循环  例1
	
		for (j=0;j<10 ;j++ )
			{
					printf("\n第%d层循环\n",j);
					for (i=0;i<j ;i++ )
					{
						printf("j=%d\ti=%d\n",j,i);
					}
			}
	
	//双重循环  例2
	/*for (j=0;j<10 ;j++ )
	{
			printf("\n第%d层循环\n",j);
			for (i=0;i<j ;i++ )
			{
				printf("j=%d\ti=%d\n",j,i);
			}
	}
	*/
	//双重循环  例3
	/*for (j=1;j<10 ;j++ )
	{
			printf("\n第%d层循环\n",j);
			for (i=0;i<j ;i++ )
			{
				printf("%d*",i+1);
			}
	}
*/
	printf("\n\n");
	return 0;
}
