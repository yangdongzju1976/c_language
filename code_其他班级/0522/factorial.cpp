#include <stdio.h>
//��һ�������Ľ׳�
float fac(int n);
int main()
{ 
	int n;  
	float y;
	printf("����һ������:");
	scanf("%d",&n);
	y=fac(n);
	printf("%d! =%15g\n",n,y);
}
float fac(int n)
{ 
	float f;
	if(n<0)  
		printf("n<0,data error!");
	else if(n==0||n==1) 
			f=1;//��ֹѭ�����õ���䡣
		  else 
			f=fac(n-1)*n;
	return(f);
}
