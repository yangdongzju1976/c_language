#include <stdio.h>

int main()
{
	int a,b,c,max;
	printf("\n��������������");
	scanf("%d%d%d",&a,&b,&c);
	max=a>(b>c?b:c)?a:(b>c?b:c);
	printf("\n�����ǣ�%d\n",max);
	
	return 0;
}
