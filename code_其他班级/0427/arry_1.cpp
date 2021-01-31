#include <stdio.h>
//定义数组、循环赋值、输出。
int main()
{
	int i,a[101]={0},t=0;//定义	:i是循环变量，a是数组名，有111个元素（a[0].....a[110]）
	
	for (i=0;i<=100 ;i++ ) //赋值
	{
		a[i]=i*i; //把i的平方赋值给a[i]
	}

	for (i=10;i<=110 ;i++ )//输出
	{
		
		printf("%d\t",a[i]);
		t++;
		if (t%10==0)        //十个换行
		{
			printf("\n");
		}
		
	}
	
	printf("\n");
	return 0;
}
