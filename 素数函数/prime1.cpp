#include <stdio.h>
#include "math.h"
#define N1 500
#define M1 N1/3
#include "windows.h"
bool IsPrime(int t);
void OutPut(int a[],int t);
int  SumPrime(int t,int b[],int x);
int main(int argc, char *argv[])
{
	system("color 70");
	int i,j,t,a[M1];
	t=0;
	//判断2~到M之间的数，把其中的素数存到数组a中。
	for (i=2;i<N1 ;i++ )
	{
		if (IsPrime(i))
		{
			a[t]=i;
			t=t+1;
		}
	}
	//输出数组 a;
	//OutPut(a,t);
	for (i=4;i<N1*3/2 ;i+=2 )
	{
		SumPrime(i, a, t);
		//printf("\n%d\n",i);
	}
	//SumPrime(1000, a, t);
	return 0;
}
//判断p是否为素数，如果是素数返回true,否则返回false.
bool IsPrime(int p)
{
	int i;
	for ( i=2;i<sqrt(p) ;i++ )
	{
		if (p%i==0)
		{
			break;
		}
	}
	if (i>sqrt(p))
	{
		return true;
	}
	else
	{
		return false;
	}
}
//输出 数组
void OutPut(int a[],int t)
{
	int i;
	for (i=0;i<t ; i++)
	{
		printf("%d\t",a[i]);
		if ((i+1)%10==0)
		{
			printf("\n");
		}
	}
}
//素数之和
//b:存放素数的数组 t:数组b中的元素个数，x:需要拆解成两个素数之和的合数。
int  SumPrime(int x,int b[],int t)
{
	int c[M1][2],i,j;
	for (i=1,j=0;i<t ;i++ )
	{
		if (IsPrime(x-b[i])&&b[i]<=x/2)
		{
			c[j][0]=b[i];
			c[j][1]=x-b[i];
			j++;

		}
	}
	//输出
	for (i=0;i<j ;i++ )
	{
		printf("\n\t%d=%d+%d",x,c[i][0],c[i][1]);
	}
	printf("\n");
	return 0;
}
