//实参与形参均用指针变量
#include <stdio.h>
#include <stdlib.h> //随机函数
#include <time.h>  //时间函数
void inv(int *x, int n);
int main()
{	
	int i,arr[10],*p=arr;
	srand((unsigned)time(NULL));
	
	//赋初值
	for(i=0;i<10;i++)
	  *(p+i)=rand()%100;
	printf("\n\t转换之前的数组为:\n\t");
	for(i=0;i<10;i++)
		printf("%d  " ,*(p+i));
	
	//p=arr; 
	inv(p,10);

	printf("\n\n\t转换之后的数组为:\n\t");
	for(p=arr;p<arr+10;p++)  //p发生了变化 
	    printf("%d  ",*p);
	printf("\n\n");
} 
void inv(int *x, int n)
{ 
	int *p, m, temp,*i,*j;
	m=(n-1)/2;
	
	i=x;  //i指向数组的第一个元素
	j=x+n-1;  //j指向数组的中间一个元素
	p=x+m;  //p指向数组的最后一个元素
	
	for(;i<=p;i++,j--)
	{ 
		temp=*i;
		*i=*j;
		*j=temp; 
	}

  }
