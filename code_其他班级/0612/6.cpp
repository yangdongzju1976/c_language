//ʵ�����βξ���ָ�����
#include <stdio.h>
#include <stdlib.h> //�������
#include <time.h>  //ʱ�亯��
void inv(int *x, int n);
int main()
{	
	int i,arr[10],*p=arr;
	srand((unsigned)time(NULL));
	
	//����ֵ
	for(i=0;i<10;i++)
	  *(p+i)=rand()%100;
	printf("\n\tת��֮ǰ������Ϊ:\n\t");
	for(i=0;i<10;i++)
		printf("%d  " ,*(p+i));
	
	//p=arr; 
	inv(p,10);

	printf("\n\n\tת��֮�������Ϊ:\n\t");
	for(p=arr;p<arr+10;p++)  //p�����˱仯 
	    printf("%d  ",*p);
	printf("\n\n");
} 
void inv(int *x, int n)
{ 
	int *p, m, temp,*i,*j;
	m=(n-1)/2;
	
	i=x;  //iָ������ĵ�һ��Ԫ��
	j=x+n-1;  //jָ��������м�һ��Ԫ��
	p=x+m;  //pָ����������һ��Ԫ��
	
	for(;i<=p;i++,j--)
	{ 
		temp=*i;
		*i=*j;
		*j=temp; 
	}

  }
