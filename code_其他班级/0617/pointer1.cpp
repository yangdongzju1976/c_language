//�±귨
#include <stdio.h>
#include <stdlib.h> //���������
#include <time.h>  //ʱ�亯����
int main()
{
	int a[10][10],*p,(*q)[10];
	int i,j; //ѭ������
	p=&a[0][0];
	//p=a[0];a[0]��һ�е��׵�ַ
	p=*a;
	q=a;//��������ֵ��һ��������a+1:�ڶ��е��׵�ַ��a+2:�����е��׵�ַ��
	srand((unsigned)time(NULL));// �Ե�ǰʱ���������������
	//�����鸳��ֵ
	for(i=0; i<10; i++)
		for (j=0;j<10 ;j++ )
			a[i][j]=rand()%100;
	
	printf("\n");
	//�����������
	printf("������Ԫ�������\n");
	for(i=0; i<10; i++)
	{
		printf("\n");
		for (j=0;j<10 ;j++ )
			printf("%-5d",a[i][j]);  //������Ԫ����� 
	}

	printf("\n\n��ָ����±������\n");
	
	printf("\na[0][0]=%d\t*p",*p);
	printf("\na[0][1]=%d\t*(p+1)",*(p+1));
	printf("\na[0][9]=%d\t*(p+9)",*(p+9));
	printf("\na[1][0]=%d\t*(p+10)",*(p+10));
	
	printf("\n��ָ�������\n");
	for(i=0; i<10; i++)
	{
		printf("\n");
		for (j=0;j<10 ;j++ )
			printf("%-5d",*(p+i*10+j));
	}
	printf("\n����ָ�������\n");   
	for(i=0; i<10; i++)
	{
		printf("\n");
		for (j=0;j<10 ;j++ )
			printf("%-5d",*(*(q+i)+j));
	}

	printf("\n��������ָ�������\n");
	for(i=0; i<10; i++)
	{
		printf("\n");
		for (j=0;j<10 ;j++ )
			printf("%-5d",*(*(a+i)+j));//�������൱����ָ��

	}
	printf("\n\n");
}