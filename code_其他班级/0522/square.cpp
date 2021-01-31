//求平方和
#include <stdio.h>
int fun1(int x,int y);//求平方和返回值是x^2+y^2
int fun2(int m);//求平方
int main(void)
{ 
	int x,y;
	printf("输入变量x、y的值：\n");
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y); //实现友好输入
	
	printf("它们的平方和是：%d\n",fun1(x,y) );
}

int fun1(int x,int y)
{ 
	
	return ( fun2(x)+fun2(y) );
}

int fun2(int m)
{ 
	return (m*m);
}