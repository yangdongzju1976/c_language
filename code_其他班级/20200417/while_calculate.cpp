#include <stdio.h>

int main(int argc, char *argv[])
{	
	int i=1;
	float a,b;
	char c;
	while (i<5)
	{
		i++;
	printf("������ʽ�� \n");
	scanf("%f%c%f",&a,&c,&b);
	switch(c)
		{
		case '+': printf("%g+%g=%g\n",a,b,a+b);break;
		case '-': printf("%g-%g=%g\n",a,b,a-b);break;
		case '*': printf("%g*%g=%g\n",a*b);break;
		case '/': printf("%g/%g=%g\n",a/b);break;
		default: printf("�������\n");
		}
	printf("������һ��");
	}
	return 0;
}
