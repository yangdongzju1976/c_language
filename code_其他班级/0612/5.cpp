//ʵ�������飬�β���ָ�����
#include <stdio.h>
void inv(int  *x, int n);
int main()
{
	
	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
	
	printf("\n\tת��֮ǰ������Ϊ:\n\t");
	for(i=0;i<10;i++)   
		printf("%d ",a[i]);
	
	printf("\n\n");
	
	inv(a,10);//���ú���ʵ��������ת
	
	printf("\n\tת������֮�������Ϊ:\n\t");
	
	for(i=0;i<10;i++)   
		printf("%d  ",a[i]);
	
	printf("\n\n\n");
} 
void inv(int  *x, int n) //x���β�
{ 
	int temp,*p,*i,*j,m=(n-1)/2; //����������ָ�����
	
	i=x;  //iָ������ĵ�һ��Ԫ��
	j=x+n-1;  //jָ����������һ��Ԫ��
	p=x+m;  //pָ��������м�һ��Ԫ��
	
	for(;i<=p;i++,j--)
	{ 
		temp=*i;  
		*i=*j; 
		*j=temp;
	}
	
}