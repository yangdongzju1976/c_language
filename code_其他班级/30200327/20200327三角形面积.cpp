#include <math.h>
#include <stdio.h>
//�����Σ��������ߣ�������� 
int main()
{
	float a,b,c,s,area; //a ,b,c ���������� ��s:�ܳ���һ�롣area:��� 
	printf("���������ε������ߣ������\n�����������ε�������");
	printf("\n��һ����a="); 
	scanf("%f",&a);
	printf("\n�ڶ�����b="); 
	scanf("%f",&b);
	printf("\n��������c="); 
	scanf("%f",&c);
	s=0.5*(a+b+c); //�ܳ���һ�� 
	area=sqrt(s*(s-a)*(s-b)*(s-c)); //�߳��������ʽ�� 
	printf("\n�����ε������߷ֱ��ǣ�\na=%g,b=%g,c=%g",a,b,c);
	printf("\n�����ε�����ǣ�%g",area);
	
	scanf("%f",&a); //�ÿ���̨��ͣ�� 
	return 0; 
	
}
