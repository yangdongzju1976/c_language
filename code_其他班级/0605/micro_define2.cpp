#include "stdio.h"
#define P  printf //��P�滻printf
#define D "%d\n"  //��D�滻
#define F "%g\n"  //
int main()
{
	int a=5, c=8, e=11;
	float b=3.8, d=9.7, f=21.08;
	P("\nHello everyone\n");//"\n""Hello""everyone""\n"
	P("\n""Hello"" ""everyone""\n");
	//printf("a=""b=""c=""\n");//
	"hello"="h""e""l""l""o"
	printf("\n�������");
	printf("\n�����һ�飺\n");
	
	P("a="D "b="F,a,b);  
	
	printf("����ڶ��飺\n");
	
	printf("a=""%d\n""b=""%g\n",a,b);
    
	printf("\n����������\n");


	P("c="D "d="F,c,d);

	P("e="D "f="F,e,f);
}