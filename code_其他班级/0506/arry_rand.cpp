#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10][5],b[5][10];  
	int i,j;	
	//rand();
	//ͨ���������������a����ֵ
	for (i=0;i<10 ;i++ )
		for (j=0;j<5 ;j++ )
		a[i][j]=rand()%100;//i*j+3;

	printf("\n�������a:\n");
	for (i=0;i<10 ;i++ )
	{
		for (j=0;j<5 ;j++ )
			printf("%d\t",a[i][j]);

		printf("\n");
	}

	//������b��ֵ b[i][j]=a[j][i]
	for (i=0;i<10 ;i++ )
		for (j=0;j<5 ;j++ )
			b[j][i]=a[i][j];


	
	
	printf("\n�������b:\n");
	for (i=0;i<5 ;i++ )
	{
		for (j=0;j<10 ;j++ )
			printf("%d\t",b[i][j]);
		printf("\n");
	}
	return 0;
}
