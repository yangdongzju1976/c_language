#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a[10][5];
	int i,j;
	int max,col,row;
	//ͨ���������������a����ֵ
	for (i=0;i<10 ;i++ )
		for (j=0;j<5 ;j++ )
		a[i][j]=rand();
	

	max=a[0][0];
	printf("\n�������a:\n");
	for (i=0;i<10 ;i++ )
	{
		for (j=0;j<5 ;j++ )
		{
			printf("%d\t",a[i][j]);
		    if (a[i][j]>max)
		    {
				max=a[i][j];
				col=i;
				row=j;
		    }
		}

		printf("\n");
		
	}
	
	

		printf("���ֵΪ��a[%d][%d]=%d\n",col,row,a[col][row]);
	return 0;
}
