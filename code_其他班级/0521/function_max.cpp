#include <stdio.h> 
int max(int x,int y);//int max(int x,y) 错误写法
int main()
{ 
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=max(a,b);
	printf("Max is %d\n",c);
}

int max(int  x, int  y) //函数的定义
{
	int z;
	z=x>y?x:y;
	return(z);
 }