#include <stdio.h>
#define PI 3.1415926
#define S  PI*r*r  //�����Ƕ�׶��� S  3.1415926*r*r
#define P float   //������ float m; P m
int main()
{
	P r;  //�ú�������������൱�� float r;
	P area;
	printf("\n����Բ�İ뾶:\nr=");
	//int R=2;
	scanf("%f",&r);
	  //float area
	area=S; //���滻 ��3.1415926*r*rȥ�滻S
	printf("\nԲ���Ϊ%g\n",area);
	
	return 0;
}
