#include <stdio.h>
#include <math.h>
//��һԪ���η��̵ĸ� 
int main ()
{
	//������������̵�ϵ����a,b,c;�б�ʽ delt  ����b*b-4*a*c,p=-1*b/(2*a),q= sqrt(��)/(2*a)
	float a,b,c,x1,x2,delt,p,q; 
	printf("��һԪ���η��̵ĸ���1"); 
	printf("\n������һԪ���η��̵�ϵ����");
	printf("\n���������ϵ����a=");
	scanf("%f",&a);
	printf("\n����һ����ϵ����b="); 
	scanf("%f",&b);
	printf("\n���볣���c="); 
	scanf("%f",&c);
	
	if(c<1)
	printf("����Ϊ1��%gx^2+%gx%g=0\n",a,b,c); 
	else 
		printf("����Ϊ2��%gx^2+%gx+%g=\n",a,b,c);
	
	
	  //y^89
	delt=b*b-4*a*c; //�б�ʽ
	printf("�б�ʽ��=%g\n",delt);
	p=-1*b/(2*a);
	q=sqrt(delt)/(2*a);
	
	x1=p+q; //��һ���� 
	x2=p-q; //�ڶ�����
	
	printf("\n���̵��������ֱ�Ϊ��\nx1=%-10.2g\tx2=%-10.2g",x1,x2); 
	
scanf("%f",&a); //�ÿ���̨��ͣ
	return 0; 
	
 } 
