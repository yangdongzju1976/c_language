#include <stdio.h>
void exchange(int  *q1, int  *q2, int  *q3); //���������������Ӵ�С����
void swap(int  *pt1,  int  *pt2); 
int main(  ) 
{
	
	int  a,b,c,*p1,*p2,*p3; 
	printf("\n������������\na=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	printf("\nc=");
	scanf("%d",&c);
	//scanf("%d%d%d",&a,&b,&c);
	p1=&a; p2=&b; p3=&c; 
	exchange(p1, p2, p3); 
	printf("\n�Ӵ�С�������������\n");
	printf("\n%d, %d, %d\n\n",a, b, c);
} 
void exchange(int  *q1, int  *q2, int  *q3) 
{
  if(*q1 < *q2)  swap(q1, q2); 
  if(*q1 < *q3)  swap(q1, q3); 
  if(*q2 < *q3)  swap(q2, q3);
} 

void swap(int  *pt1,  int  *pt2) //��ַ���ã��ı���ָ�������ֵ
{
	int  temp; temp=*pt1; *pt1=*pt2; *pt2=temp;
} 
