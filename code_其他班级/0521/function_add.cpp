#include <stdio.h>
int add(int x,int y);
int main(  ) 
{
	int  a=2,b=3; 
	int x=10,y=100;
	printf("输出变量 x、y\n");
	printf("x=%d, y=%d\n",x, y);
	printf("输出变量 a、b\n");
	printf("a=%d, b=%d\n",a, b);  //输出变量 a、b
	printf("输出变量 a、b的地址\n");
	printf("&a=%x,&b=%x\n" ,&a,&b); //输入变量a、b的地址
	add(a,b); 
	printf("再次输出变量 a、b\n");
	printf("a=%d,b=%d\n", a,b);  //再次输出变量 a、b
	printf("输出变量 a、b的地址\n");
	printf("&a=%x,&b=%x\n", &a,&b); //再次输入变量a、b的地址
	
} 
add(int x,int y)  
{
	x=x+8; y=y+12; 
	printf("输出形参x,y\n");
	printf("x=%d,y=%d\n",x,y);  //输出形参x,y
	printf("输出形参x,y的地址\n");
	printf("&x=%x,&y=%x\n",&x,&y);  //输出形参x,y的地址
}  
