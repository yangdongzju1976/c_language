#include "stdio.h"
#define MAX(a,b) (a>b)?a:b //����������ĺ궨��
main()
{
	int x,y,max;
	printf("����������������ϴ�� ");
	printf("\nx=");
	scanf("%d",&x);
	printf("\ny=");
	scanf("%d",&y);
	
	max=MAX(x,y); //M(x,y) �滻��:(x>y)?x:y
	printf("max=%d\n",max);
}