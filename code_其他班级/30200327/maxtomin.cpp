#include <stdio.h>
//输入两个数，按顺序输出。 
 int main()
 { 
    float a,b,t ;
    printf("\n输入两个数");
	printf("\n输入第一个数：");
	scanf("%f",&a);
	printf("\n输入第二个数：");
	scanf("%f",&b); 
    
    if(a>b)
       {t=a;a=b;b=t;}
    printf("\n按顺序输出这两个数：%5.2f\t%5.2f",a,b);
    
 }

