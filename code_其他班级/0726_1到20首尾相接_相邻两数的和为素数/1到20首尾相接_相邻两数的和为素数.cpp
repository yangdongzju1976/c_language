//1到20首尾相接_相邻两数的和为素数
#include <stdio.h>
#include <math.h>
int isPrime(int,int);
int a[21]={0};
int b[21]={0};
int print();
int total;
int search(int);
int main()
{
	int i;
/*	for (i=0;i<21 ;i++ )
	{
		printf("\t%d",b[i]);

	}*/
	search(1);

	return 0;
}
int search(int t)
{
	int i;
		for (i=1;i<21 ;i++ )
		{
			if (isPrime(a[t-1],i)&&b[i]==0)
			{
				a[t]=i;
				b[i]=1;
				if (t==20)
				{
					if (isPrime(a[20],a[1])) 
						print();
				}
				else
					search(t+1);
				b[i]=0;

			}
		}
		return 0;
}

int print()
{
	total++;
	printf("\n第%d种方案\n",total);
	for (int i=1;i<21 ;i++ )
	{
		printf("\t%d  ",a[i]);
	}
	return 0;
}
int isPrime(int n,int m) //如果m+n的和为素数返回1，否则返回零
{
	int i=2;
	while (i<=sqrt(m+n)&&(m+n)%i!=0)
		i++;
	if (i<=sqrt(m+n))
		return 0;
	else
		return 1;
	

}