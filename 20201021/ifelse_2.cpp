#include <stdio.h>
int main()
{
    int a, b, max;
    printf("��������������");
    scanf("%d %d", &a, &b);
    if(a>b) 
	{
		max=a;
	}
    else 
	{
		max=b;
	}
    printf("%d��%d�Ľϴ�ֵ�ǣ�%d\n", a, b, max);
    return 0;
}