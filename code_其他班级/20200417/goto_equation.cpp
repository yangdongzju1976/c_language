#include <stdio.h>

int main()
{
	float a,b;
	char c;
	int i=1;
	abcdfg:if (i<=5)
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
			
		goto abcdfg;
	}
	return 0;
}

