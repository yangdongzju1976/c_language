//��ƽ����
#include <stdio.h>
int fun1(int x,int y);//��ƽ���ͷ���ֵ��x^2+y^2
int fun2(int m);//��ƽ��
int main(void)
{ 
	int x,y;
	printf("�������x��y��ֵ��\n");
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y); //ʵ���Ѻ�����
	
	printf("���ǵ�ƽ�����ǣ�%d\n",fun1(x,y) );
}

int fun1(int x,int y)
{ 
	
	return ( fun2(x)+fun2(y) );
}

int fun2(int m)
{ 
	return (m*m);
}