//实参用数组，形参用指针变量
#include <stdio.h>
void inv(int  *x, int n);
int main()
{
	
	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
	
	printf("\n\t转换之前的数组为:\n\t");
	for(i=0;i<10;i++)   
		printf("%d ",a[i]);
	
	printf("\n\n");
	
	inv(a,10);//调用函数实现数组逆转
	
	printf("\n\t转换方向之后的数组为:\n\t");
	
	for(i=0;i<10;i++)   
		printf("%d  ",a[i]);
	
	printf("\n\n\n");
} 
void inv(int  *x, int n) //x是形参
{ 
	int temp,*p,*i,*j,m=(n-1)/2; //定义了三个指针变量
	
	i=x;  //i指向数组的第一个元素
	j=x+n-1;  //j指向数组的最后一个元素
	p=x+m;  //p指向数组的中间一个元素
	
	for(;i<=p;i++,j--)
	{ 
		temp=*i;  
		*i=*j; 
		*j=temp;
	}
	
}