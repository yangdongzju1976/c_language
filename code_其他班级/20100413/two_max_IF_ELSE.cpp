#include <stdio.h>
//�����������������ֵ����? �����ʽʵ��
int main()
{
	int a,b,max;
	printf("\n����������");
	scanf("%d%d",&a,&b);
	if (a>b)
		max=a;
	else
		max=b;
	printf("\n���ֵΪ%d\n",max);	
	return 0;
}
