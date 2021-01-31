#include <stdio.h>
#include<math.h> //数学标准库
int main()
{ 
	//定义变量，a、b、c：方程系数。disc:判别式，x1,x2:实根，realpart,imagpart:虚根的实部、虚部
	float a,b,c,disc,x1,x2,realpart,imagpart;
	a=0,b=0,c=0,disc=0,x1=0,x2=0,realpart=0,imagpart=0;
	printf("输入方程的系数a、b、c:\n");
	printf("a=");
	scanf("%f",&a);
	printf("\nb=");
	scanf("%f",&b);				//scanf("%f%f%f",&a,&b,&b);
	printf("\nc=");
	scanf("%f",&c);
	//输出这个方程
	printf("\n方程为：%gx^2%gx%g=0\n",a,b,c); 
	printf("方程为：");
	//printf("方程为：%gx^2+%gx+%g=0\n",a,b,c); 
	if(c<0)
		if (b<0)
		printf("方程为：%gx^2%gx%g=0\n",a,b,c); 
		else
			printf("方程为：%gx^2+%gx%g=0\n",a,b,c);
	else
		if (b<0)
		printf("方程为：%gx^2%gx+%g=0\n",a,b,c); 
		else
			printf("方程为：%gx^2+%gx+%g=0\n",a,b,c);

	if(fabs(a)<=1e-6) //a否等于零 a==0
		printf("a=0,这不是一个一元二次方程\n");  //a=0 不是元次方程
	else 
		{
			disc=b*b-4*a*c;      //计算判别式
            if(fabs(disc)<=1e-6)  //判别式是否等于零
				printf("判别式等于零，有两个相等实根:%g\n",-b/(2*a)); //判别式等于零
            else if(disc>1e-6)  //判别式大于零
				{
				x1=(-b+sqrt(disc))/(2*a);
                x2=(-b-sqrt(disc))/(2*a);
                printf("判别式大于零，有两个不相等的实根:x1=%8.4f\tx2=%8.4f\n",x1,x2);
				}
                 else				//判别式小于零
					 { 
					 realpart=-b/(2*a);//实部
					 imagpart=sqrt(-disc)/(2*a);//虚部                         
                     printf("有两个虚根:\n"); 
					 // 输出两虚根
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
