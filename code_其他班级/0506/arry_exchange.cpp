#include <stdio.h>
//���� �������������
int main()
{
	int a[2][3]={1,2,3,4,5,6};// a���飬��������
	int b[3][2];			  // b���� ���ж���
	int i,j;
	
	printf("\n�������a:\n");   //�������a
	for (i=0;i<2 ;i++ )
	{
		for (j=0;j<3 ;j++ )
			printf("\t%d",a[i][j]);

		printf("\n");//����
		
	}


	for (i=0;i<2 ;i++ )
		for (j=0;j<3 ;j++ )
			b[j][i]=a[i][j];  //��b���鸳ֵ��b[1][2]=a[2][1] 
	       //b[i][j]=a[j][i];
	
	printf("\n�������b:\n");	//�������b
	
	for (i=0;i<3 ;i++ )
	{
		for (j=0;j<2 ;j++ )
			printf("\t%d",b[i][j]);
		printf("\n");
		
	}
	
	return 0;
}
