//�±귨
#include <stdio.h>
#include <stdlib.h> //���������
#include <time.h>  //ʱ�亯����
int main()
{
	int a[10];
	int i;
	srand((unsigned)time(NULL));// �Ե�ǰʱ���������������
	//�����鸳��ֵ
	for(i=0; i<10; i++)
		a[i]=rand()%100;
	
	printf("\n");
	//�����������
	for(i=0; i<10; i++)
		printf("%d  ",a[i] );
	printf("\n\n");
}