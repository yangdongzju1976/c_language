#include <stdio.h>
#include "windows.h"

int main(int argc, char *argv[])
{
	system("color 70");
	int i,j;
	int a[100],b[25],c[10000];
	j=1;
	//���鸳��ֵ
	for (i=2;i<=100 ;i++ )
	{
		a[i]=i;
	}
	//������a����2��3��5��7ȥɸ��ʣ�µľ�������
	for (i=2;i<=100 ;i++ )
	{
		if ((i%2==0&&i!=2)||(i%3==0&&i!=3)||(i%5==0&&i!=5)||(i%7==0&&i!=7))
		{
			a[i]=0;
		}
	}
	//��100���ڵ��������������b��
	for (i=2,j=0;i<=100 ;i++ )
	{
		if (a[i]!=0)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
	printf("\n�������b(100���ڵ�����):\n");
	for (i=0;i<25 ;i++ )
	{
		printf("%3d",b[i]);
	}
	//������c[10000]����ֵ
	for (i=2;i<10000 ;i++ )
	{
		c[i]=i;
	}
	//������b[]�е�Ԫ��ȥ��һɸ����c[10000]
	for (j=0;j<25 ;j++ )
	{
		for (i=2;i<10000 ;i++ )
		{
			if (c[i]%b[j]==0&&c[i]!=0&&c[i]!=b[j])
			{
				c[i]=0;
			}
		}
	}

	printf("\n���10000���ڵ�����\n");
	for (i=2,j=0;i<10000 ;i++ )
	{
		if (c[i]!=0)
		{
			printf("%6d",c[i]);
			j++;
		}
		if (j%10==0&&c[i]!=0)
		{
			printf("\n");
		}
	}
	return 0;
}
