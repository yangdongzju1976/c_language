#include <stdio.h>
//��������������˳������� 
 int main()
 { 
    float a,b,t ;
    printf("\n����������");
	printf("\n�����һ������");
	scanf("%f",&a);
	printf("\n����ڶ�������");
	scanf("%f",&b); 
    
    if(a>b)
       {t=a;a=b;b=t;}
    printf("\n��˳���������������%5.2f\t%5.2f",a,b);
    
 }

