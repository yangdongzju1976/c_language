#include "stdio.h"
void swap(int *p1, int *p2) //交换值
{ 
	int i,*temp;
	temp=&i;
	*temp=*p1;
	*p1=*p2;
	*p2=*temp;
}
int main()
{ 
	int a,b;
	int *pointer_1,*pointer_2;
	printf("\n输入变量a、b的值 \na=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);

	pointer_1=&a;  pointer_2=&b;
	if(a<b)  swap(pointer_1,pointer_2); //传址调用

	printf("\n交换之后的值\na=%d\tb=%d\n",a,b);
}