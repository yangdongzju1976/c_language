#include <stdio.h> 
//Fibonacci数列
int main()
{		
	int i,j=0;//循环变量
	int f[20]={1,1}; // 赋初值
	
	for(i=2;i<20;i++) //循环赋值
	
	{
		f[i]=f[i-2]+f[i-1];
	}


	for(i=0;i<20;i++) //循环输出
	{ 
		
		
		if (i<10)
		{
		 printf("f[%d]=%-12d",i,f[i]);
		}
		else
		{
			printf("f[%d]=%-11d",i,f[i]);
		}
		j++;
		 if(j%5==0)  printf("\n");  //每输出5个换行
	}
}
