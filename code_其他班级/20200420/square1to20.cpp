#include <stdio.h>
//输出1~20的平方
int main()
{
	int i=1;

	while(i<=20)
	{
		printf("\n%2d*%-2d=%3d",  i,i,i*i);
		i++;
	}
	printf("\n\n");
	
	return 0;
}
