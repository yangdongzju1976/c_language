#include <stdio.h>
#define PI 3.1415926
#define S  PI*r*r  //宏可以嵌套定义 S  3.1415926*r*r
#define P float   //浮点型 float m; P m
int main()
{
	P r;  //用宏来定义变量，相当于 float r;
	P area;
	printf("\n输入圆的半径:\nr=");
	//int R=2;
	scanf("%f",&r);
	  //float area
	area=S; //宏替换 用3.1415926*r*r去替换S
	printf("\n圆面积为%g\n",area);
	
	return 0;
}
