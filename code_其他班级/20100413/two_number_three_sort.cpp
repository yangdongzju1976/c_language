#include <stdio.h>
//�������������жϴ��ڵ��ڹ�ϵ
int main()
{	
	int a,b,max;
	printf("\n����������\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	if (a>b)
	{
		max=a;
		printf("\na����b,���ֵΪ:");
	}
	else
	{
		if (a==b)
		{
			max=a;
			printf("\na����b�����ֵΪ:");
		}
		else
		{
			max=b;
			printf("\naС��b�����ֵΪ:");

		}
	}
	printf("%d\n",max);
	return 0;
}
