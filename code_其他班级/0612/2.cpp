//ָ�뷨��
#include <stdio.h>
#include <stdlib.h> //�������
#include <time.h>  //ʱ�亯��
int main()
{
	int a[10];
	int *p,i;
	srand((unsigned)time(NULL));// �Ե�ǰʱ���������������
	
	for(i=0; i<10; i++)
		a[i]=rand()%100;
	
	printf("\n");

	p=a+10;
	for(i=10; i>0; i--) //����Խ��
		printf("  %d    ",*(p-i) );

	printf("\n\n");
}
