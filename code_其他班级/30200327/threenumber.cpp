#include "stdio.h"
int main()
{
	float a,b,c,t;
	printf("\n����������");
	printf("\n�������һ������");
	scanf("%f",&a);
	printf("\n������ڶ�������");
	scanf("%f",&b); 
	printf("\n���������������");
	scanf("%f",&c); 
	//���бȽ� 
  /*	if(a>b)
       {t=a;a=b;b=t;}
    if(a>c)
       {t=a;a=c;c=t;}
    if(b>c)
       {t=b;b=c;c=t;}
*/
	
	if (a>b)
	{
		t=a,a=b,b=t;
	}


	if (c>a&&c<b)
	{
		t=c,c=b,b=t;		
	 } 
	else
	if (c<a)
	{
		t=a,a=c,c=t;
		t=b,b=c,c=t;
	}
	
	printf("\n��˳���������������\n%g\t%g\t%g",a,b,c);
	
	return 0;
 } 
