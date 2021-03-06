#include <stdio.h>
#include "math.h"
#define N 100
#define M N/3
#include "windows.h"
bool IsPrime(int t);
void OutPut(int a[],int t);
int  SumPrime(int t,int *b,int x);
int main(int argc, char *argv[])
{
	system("color 70");
	int i,j,t,a[M];
	t=0;
	//判断2~到M之间的数，把其中的素数存到数组a中。
	for (i=2;i<N ;i++ )
	{
		if (IsPrime(i))
		{
			a[t++]=i;
		}
	}
	//输出数组 a;
	//OutPut(a,t);
	SumPrime(1000, a, t);
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
int  SumPrime(int t,int *b,int x)
{
	int c[100][2],i,j;
	for (i=1,j=0;i<x ;i++ )
	{
		if (IsPrime(t-b[i])&&b[i]<t/2)
		{
			c[j][0]=b[i];
			c[j][1]=t-b[i];
			j++;

		}
	}
	//输出
	for (i=0;i<j ;i++ )
	{
		printf("\n%d=%d+%d",t,c[i][0],c[i][1]);
	}
	printf("\n\n\n");
	return 0;
}
