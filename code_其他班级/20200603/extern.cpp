#include "stdio.h"
int  A=13,B=-8; //����ȫ�ֱ���
int  max(int x, int y) 
{ 
	int z; 
	z=x>y ? x:y; 
	//extern int A,B; 
	printf("\nmax�����еģ�A=%d\tB=%d\n",A,B);
	return(z); 
} 

int main( ) 
{ 
	//extern int A,B;  //�����ⲿ����
	printf("\nA=%d\tB=%d\n",A,B); //���A��B��ֵ 
	printf("A��B�����ֵ=%d\n\n",max(A,B)); //��ֵ����max()���� ������������
}

