#include <stdio.h>
int add(int x,int y);
int main(  ) 
{
	int  a=2,b=3; 
	int x=10,y=100;
	printf("������� x��y\n");
	printf("x=%d, y=%d\n",x, y);
	printf("������� a��b\n");
	printf("a=%d, b=%d\n",a, b);  //������� a��b
	printf("������� a��b�ĵ�ַ\n");
	printf("&a=%x,&b=%x\n" ,&a,&b); //�������a��b�ĵ�ַ
	add(a,b); 
	printf("�ٴ�������� a��b\n");
	printf("a=%d,b=%d\n", a,b);  //�ٴ�������� a��b
	printf("������� a��b�ĵ�ַ\n");
	printf("&a=%x,&b=%x\n", &a,&b); //�ٴ��������a��b�ĵ�ַ
	
} 
add(int x,int y)  
{
	x=x+8; y=y+12; 
	printf("����β�x,y\n");
	printf("x=%d,y=%d\n",x,y);  //����β�x,y
	printf("����β�x,y�ĵ�ַ\n");
	printf("&x=%x,&y=%x\n",&x,&y);  //����β�x,y�ĵ�ַ
}  
