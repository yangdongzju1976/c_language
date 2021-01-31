#include <stdio.h>
#include <math.h>
#define SIZE 100  //素数的范围
int main()
{
	int F=sqrt(SIZE);//开方，筛选的范围
	int i,j,k=0;
	int sieve[SIZE]; //存放数列的数组
	
	for (i=0;i<=SIZE ;i++ ) //数组赋值
	{
		sieve[i]=i;
	}
	
	for (i=2;i<=F;i++ ) //对数组逐一筛选
	{
		for (j=i+1;j<=SIZE ;j++ ) 
		{
			if (j%i==0&&sieve[j]!=0)//
			{
				sieve[j]=0;
			}
		}

	}
	j=0;
	for (i=2;i<=SIZE ;i++ ) //输出素数
	{
		if (sieve[i]!=0)
		{
			printf("%d\t",sieve[i]);
			
			j++;
		}
		if (j==10)  //每输出5个素数，换行。
		{
			j=0;
			printf("\n");
		}
	
	}
	
	printf("\n");
	return 0;
}
