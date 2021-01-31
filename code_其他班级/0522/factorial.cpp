#include <stdio.h>
//求一个整数的阶乘
float fac(int n);
int main()
{ 
	int n;  
	float y;
	printf("输入一个整数:");
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
			f=1;//终止循环调用的语句。
		  else 
			f=fac(n-1)*n;
	return(f);
}
