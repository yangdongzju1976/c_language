#include "stdio.h"
//���ÿһ�е�ֵ
get_sum_row(int  x[][3], int  result[] ,int  row, int  col)//�޷���ֵ����
{ 
	int i,j;
	for(i=0;i<row;i++)
	{ 
		result[i]=0;
		for(j=0;j<col;j++) 
			result[i]+=x[i][j];
	}
}

main()
{ 
	int a[2][3]={3,6,9,1,4,7};
	int sum_row[2],row=2,col=3,i;
	get_sum_row(a,sum_row,row,col);//��ַ�����봫ֵ�������ϣ������ܲ��ܴ�ֵ���ã�

	for(i=0;i<row;i++)
	printf("���к�[%d]=%d\n",i+1,sum_row[i]);
}