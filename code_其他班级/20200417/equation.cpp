#include <stdio.h>
#include<math.h> //��ѧ��׼��
int main()
{ 
	//���������a��b��c������ϵ����disc:�б�ʽ��x1,x2:ʵ����realpart,imagpart:�����ʵ�����鲿
	float a,b,c,disc,x1,x2,realpart,imagpart;
	a=0,b=0,c=0,disc=0,x1=0,x2=0,realpart=0,imagpart=0;
	printf("���뷽�̵�ϵ��a��b��c:\n");
	printf("a=");
	scanf("%f",&a);
	printf("\nb=");
	scanf("%f",&b);				//scanf("%f%f%f",&a,&b,&b);
	printf("\nc=");
	scanf("%f",&c);
	//����������
	printf("\n����Ϊ��%gx^2%gx%g=0\n",a,b,c); 
	printf("����Ϊ��");
	//printf("����Ϊ��%gx^2+%gx+%g=0\n",a,b,c); 
	if(c<0)
		if (b<0)
		printf("����Ϊ��%gx^2%gx%g=0\n",a,b,c); 
		else
			printf("����Ϊ��%gx^2+%gx%g=0\n",a,b,c);
	else
		if (b<0)
		printf("����Ϊ��%gx^2%gx+%g=0\n",a,b,c); 
		else
			printf("����Ϊ��%gx^2+%gx+%g=0\n",a,b,c);

	if(fabs(a)<=1e-6) //a������� a==0
		printf("a=0,�ⲻ��һ��һԪ���η���\n");  //a=0 ����Ԫ�η���
	else 
		{
			disc=b*b-4*a*c;      //�����б�ʽ
            if(fabs(disc)<=1e-6)  //�б�ʽ�Ƿ������
				printf("�б�ʽ�����㣬���������ʵ��:%g\n",-b/(2*a)); //�б�ʽ������
            else if(disc>1e-6)  //�б�ʽ������
				{
				x1=(-b+sqrt(disc))/(2*a);
                x2=(-b-sqrt(disc))/(2*a);
                printf("�б�ʽ�����㣬����������ȵ�ʵ��:x1=%8.4f\tx2=%8.4f\n",x1,x2);
				}
                 else				//�б�ʽС����
					 { 
					 realpart=-b/(2*a);//ʵ��
					 imagpart=sqrt(-disc)/(2*a);//�鲿                         
                     printf("���������:\n"); 
					 // ��������
					 if (a>0)
					 {
					 printf("x1=%g+%gi\n",realpart,imagpart);
                     printf("x2=%g-%gi\n",realpart,imagpart);
					 }
					 else
						 {
						 printf("x1=%g%gi\n",realpart,imagpart);
						 printf("x2=%g+%gi\n",realpart,-imagpart);

						 }
					 }
		} 
	return 0;
}
