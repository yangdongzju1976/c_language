#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a[10];//һά���顣�൱��ͬʱ����10�����α�����a[0]~a[9]
	int i;
	//ͨ�����������������и�ֵ
	for (i=0;i<10 ;i++ )
	{
		a[i]=rand()%100;
		
	}
	//�������a
	for (i=0;i<10 ;i++ )
	{
		printf("a[%d]=%d\n",i,a[i]);
	}

	return 0;
}
