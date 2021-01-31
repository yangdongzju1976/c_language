#include <stdio.h>

int main(int argc, char *argv[])
{	
	int i=1;
	float a,b;
	char c;
	while (i<5)
	{
		i++;
	printf("输入表达式： \n");
	scanf("%f%c%f",&a,&c,&b);
	switch(c)
		{
		case '+': printf("%g+%g=%g\n",a,b,a+b);break;
		case '-': printf("%g-%g=%g\n",a,b,a-b);break;
		case '*': printf("%g*%g=%g\n",a*b);break;
		case '/': printf("%g/%g=%g\n",a/b);break;
		default: printf("输入错误\n");
		}
	printf("再输入一次");
	}
	return 0;
}
