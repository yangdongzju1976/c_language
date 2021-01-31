#include <stdio.h>
void swap(int *p1, int *p2)  //看上去是传址调用，实际是传值调用。把地址当成值来传递。
{ 
	int i,*p;
	p=&i;
	*p=*p1;
	*p1=*p2;  //交换形参的值，而不是形参所指向变量的值 
				//
	*p2=*p;
  
 }
int main()
{ 
	int a,b;
	int *pointer_1,*pointer_2; 
	printf("\n输入变量a、b的值 \na=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	pointer_1=&a;  pointer_2=&b;  //pointer_1指向变量a;  pointer_2指向变量b
	printf("\n交换之前a=%d \t b=%d",*pointer_1,*pointer_2);
	if(a<b)  swap(pointer_1,pointer_2); //传值调用，什么也没交换
	printf("\n交换之后a=%d \t b=%d\n\n",*pointer_1,*pointer_2);
	//printf("%d,%d",*pointer_1,*pointer_2);
}
