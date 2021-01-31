#include "stdio.h"
int main()
{
	float a,b,c,t;
	printf("\n输入三个数");
	printf("\n请输入第一个数：");
	scanf("%f",&a);
	printf("\n请输入第二个数：");
	scanf("%f",&b); 
	printf("\n请输入第三个数：");
	scanf("%f",&c); 
	//进行比较 
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
	
	printf("\n按顺序输出这三个数：\n%g\t%g\t%g",a,b,c);
	
	return 0;
 } 
