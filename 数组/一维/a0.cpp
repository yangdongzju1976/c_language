#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[10]={1,2,3,4,5,6,7};//�������飬ͬʱ������Ĳ���Ԫ�ظ�ֵ��
	int i;
	for (i=0; i<10;i++ )
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	printf("\n\n\n");
	return 0;
}
