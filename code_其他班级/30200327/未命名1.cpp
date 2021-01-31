#include <stdio.h>
#include <math.h>
//求一元二次方程的根 
int main ()
{
	//定义变量，方程的系数：a,b,c;判别式 delt  Δ：b*b-4*a*c,p=-1*b/(2*a),q= sqrt(Δ)/(2*a)
	float a,b,c,x1,x2,delt,p,q; 
	printf("求一元二次方程的根。1"); 
	printf("\n请输入一元二次方程的系数：");
	printf("\n输入二次项系数：a=");
	scanf("%f",&a);
	printf("\n输入一次项系数：b="); 
	scanf("%f",&b);
	printf("\n输入常数项：c="); 
	scanf("%f",&c);
	
	if(c<1)
	printf("方程为1：%gx^2+%gx%g=0\n",a,b,c); 
	else 
		printf("方程为2：%gx^2+%gx+%g=\n",a,b,c);
	
	
	  //y^89
	delt=b*b-4*a*c; //判别式
	printf("判别式Δ=%g\n",delt);
	p=-1*b/(2*a);
	q=sqrt(delt)/(2*a);
	
	x1=p+q; //第一个根 
	x2=p-q; //第二个根
	
	printf("\n方程的两个根分别为：\nx1=%-10.2g\tx2=%-10.2g",x1,x2); 
	
scanf("%f",&a); //让控制台暂停
	return 0; 
	
 } 
