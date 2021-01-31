#include "stdio.h"
#define P  printf //用P替换printf
#define D "%d\n"  //用D替换
#define F "%g\n"  //
int main()
{
	int a=5, c=8, e=11;
	float b=3.8, d=9.7, f=21.08;
	P("\nHello everyone\n");//"\n""Hello""everyone""\n"
	P("\n""Hello"" ""everyone""\n");
	//printf("a=""b=""c=""\n");//
	"hello"="h""e""l""l""o"
	printf("\n输出两遍");
	printf("\n输出第一遍：\n");
	
	P("a="D "b="F,a,b);  
	
	printf("输出第二遍：\n");
	
	printf("a=""%d\n""b=""%g\n",a,b);
    
	printf("\n输出两遍结束\n");


	P("c="D "d="F,c,d);

	P("e="D "f="F,e,f);
}