#include <stdio.h>

int main()
{
	int a,b,c,max;
	printf("\n请输入三个数：");
	scanf("%d%d%d",&a,&b,&c);
	max=a>(b>c?b:c)?a:(b>c?b:c);
	printf("\n最大的是：%d\n",max);
	
	return 0;
}
