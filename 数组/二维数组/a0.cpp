#include <stdio.h>
#include <stdlib.h>  //�ǵ������ͷ�ļ�
#include "windows.h"
#include <time.h>
#define M 16
#define N 5
void output(int a[][N],int m,int n);
int main(){
	srand((unsigned)time(NULL));
	system("color 70");
    int a[M][N];//����һ����ά���飬�൱�ڶ�����100��������a[0][0]~a[9][9]
	for (int i=0;i<M ;i++ )
		for (int j=0;j<N ;j++ )
		{
			a[i][j]=rand()%100; //����Ԫ�ظ�ֵ
		}
	//�����������
	printf("���������������\n");
	for (int i=0;i<M ;i++ )
	{
		for (int j=0;j<N ;j++ )
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
	printf("\n���\n");
	output(a,M,N);
	printf("\n\n\n");
    return 0;
}


void output(int a[][N],int m,int n)
{
	int i,j;
	printf("\n�ⲿ�������������\n");
	for (i=0;i<m ;i++)
	{
		for (j=0;j<n ;j++ )
		{ 
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);//*(*a+i*m+j)
		}
		printf("\n");
	}
}