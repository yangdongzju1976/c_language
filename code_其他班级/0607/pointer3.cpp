#include <stdio.h>
int main(  ) 
{
	int  *p1, *p2, *p, a, b,t; 
	printf("输入两个数：\na=");
	scanf("%d",&a); 
	printf("\nb=");
	scanf("%d",&b); 
	p1=&a;p2=&b; //p1指向a,p1存储a的地址，p2指向b,p2存储b的地址。

	if(a<b) 
	{
		p=p1; p1=p2; p2=p;//交换p1与p2
	} 
	printf("\na=%d, b=%d\n", a, b); 
	printf("max（*p1）=%d, min(*p2)=%d\n", *p1, *p2);

	if(a<b) 
	{
		t=*p1; *p1=*p2; *p2=t; //交换a、b的值
	} 
	printf("\na=%d, b=%d\n", a, b); 
	printf("max（*p2）=%d, min(*p1)=%d\n", *p2, *p1);



}
