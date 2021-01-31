#include "stdio.h"
#define Pi 3.1414926
//#define R 1
int main()
{
	float r,area,s;
	printf ("输入圆的半径: ");
	scanf("%f",&r);
	#ifdef R    //是否定义了R
	area=3.14159*r*r;
	printf("圆的面积=%f\n",area);
	#else
	s=2*Pi*r;
	printf("圆的周长= %f\n",s);
	#endif
}