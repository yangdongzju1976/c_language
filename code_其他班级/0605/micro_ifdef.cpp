#include "stdio.h"
#define Pi 3.1414926
//#define R 1
int main()
{
	float r,area,s;
	printf ("����Բ�İ뾶: ");
	scanf("%f",&r);
	#ifdef R    //�Ƿ�����R
	area=3.14159*r*r;
	printf("Բ�����=%f\n",area);
	#else
	s=2*Pi*r;
	printf("Բ���ܳ�= %f\n",s);
	#endif
}