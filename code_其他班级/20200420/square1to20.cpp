#include <stdio.h>
//���1~20��ƽ��
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
