#include "stdio.h"
#include "windows.h"  //Sleep()
int main()
{
	int i;
	//���5������
	system("color 70");
	for (i=1;i<3 ;i++ )
	{
		printf("\n");
	}
	//���ǰ���ո�
	printf("     ");
	//�ڿո�����0123456789
	for (i=0;i<10 ;i++ )
	{
		printf("%d",i);
	}
	//ÿ�����������
	/*
	 1        8
     2        7
     3        6
     4        5
     5        4
     6        3
     7        2
     8        1
	*/
	for (i=1;i<9 ;i++ )
	{
		printf("\n     %d        %d",i,9-i);
	}
	//������һ�С�9876543210
	printf("\n     ");
	for (i=9;i>=0 ;i-- )
	{
		printf("%d",i);
	}

	

	printf("\n\n\n\n");
}