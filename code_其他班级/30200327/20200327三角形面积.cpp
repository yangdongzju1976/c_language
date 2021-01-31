#include <math.h>
#include <stdio.h>
//三角形，输入三边，求面积。 
int main()
{
	float a,b,c,s,area; //a ,b,c 代表三条连 。s:周长的一半。area:面积 
	printf("输入三角形的三条边，求面积\n请输入三角形的三条边");
	printf("\n第一条边a="); 
	scanf("%f",&a);
	printf("\n第二条边b="); 
	scanf("%f",&b);
	printf("\n第三条边c="); 
	scanf("%f",&c);
	s=0.5*(a+b+c); //周长的一半 
	area=sqrt(s*(s-a)*(s-b)*(s-c)); //边长求面积公式。 
	printf("\n三角形的三条边分别是：\na=%g,b=%g,c=%g",a,b,c);
	printf("\n三角形的面积是：%g",area);
	
	scanf("%f",&a); //让控制台暂停。 
	return 0; 
	
}
