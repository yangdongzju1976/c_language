#include <stdio.h>
#include <math.h>
#define SIZE 100  //�����ķ�Χ
int main()
{
	int F=sqrt(SIZE);//������ɸѡ�ķ�Χ
	int i,j,k=0;
	int sieve[SIZE]; //������е�����
	
	for (i=0;i<=SIZE ;i++ ) //���鸳ֵ
	{
		sieve[i]=i;
	}
	
	for (i=2;i<=F;i++ ) //��������һɸѡ
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
	for (i=2;i<=SIZE ;i++ ) //�������
	{
		if (sieve[i]!=0)
		{
			printf("%d\t",sieve[i]);
			
			j++;
		}
		if (j==10)  //ÿ���5�����������С�
		{
			j=0;
			printf("\n");
		}
	
	}
	
	printf("\n");
	return 0;
}
