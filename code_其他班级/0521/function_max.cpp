#include <stdio.h> 
int max(int x,int y);//int max(int x,y) ����д��
int main()
{ 
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=max(a,b);
	printf("Max is %d\n",c);
}

int max(int  x, int  y) //�����Ķ���
{
	int z;
	z=x>y?x:y;
	return(z);
 }