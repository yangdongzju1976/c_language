#include <stdio.h>

int main()
{
	int i,j;
	//˫��ѭ��  ��1
	
		for (j=0;j<10 ;j++ )
			{
					printf("\n��%d��ѭ��\n",j);
					for (i=0;i<j ;i++ )
					{
						printf("j=%d\ti=%d\n",j,i);
					}
			}
	
	//˫��ѭ��  ��2
	/*for (j=0;j<10 ;j++ )
	{
			printf("\n��%d��ѭ��\n",j);
			for (i=0;i<j ;i++ )
			{
				printf("j=%d\ti=%d\n",j,i);
			}
	}
	*/
	//˫��ѭ��  ��3
	/*for (j=1;j<10 ;j++ )
	{
			printf("\n��%d��ѭ��\n",j);
			for (i=0;i<j ;i++ )
			{
				printf("%d*",i+1);
			}
	}
*/
	printf("\n\n");
	return 0;
}
