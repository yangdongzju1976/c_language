#include <stdio.h>

int main(int argc, char *argv[])
{
	float a,b;
	char c;
	int i=1;
	abcdfg:if (i<=2)
	{
		i++;
	
		printf("�������ʽ�� \n");
		scanf("%f%c%f",&a,&c,&b);
		switch(c)
			{
			case '+':
				printf("%g+%g=%g\n",a,b,a+b);
				break;
			case '-': 
				printf("%g-%g=%g\n",a,b,a-b);
				break;
			case '*': 
				printf("%g*%g=%g\n",a,b,a*b);
				break;
			case '/': 
				printf("%g/%g=%g\n",a,b,a/b);
				break;
			default: printf("input error\n");
			}
		goto abcdfg	;
	}
	return 0;
}
