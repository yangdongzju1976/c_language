#include <stdio.h>
//输入十个数，求最大的数、和最小值
int main()
{
	int i,j,t,number[10],max,min;//定义变量。
	printf("\n请逐个输入数组的各个元素（共10个）number[i]=\n");
	
	for (i=0;i<10 ;i++ )
	{
		scanf("%d",&number[i]);
	}

	max=number[0];
	min=number[0];
	//逐个比较
	for (i=1;i<10 ;i++ )
	{
		if (max<number[i]) //最大值
		{
			max=number[i];
			j=i;
		}

		if (min>number[i]) //最小值
		{
			min=number[i];
			t=i;
		}

	}
	printf("\n");
	for (i=0;i<10 ;i++ )
	{
		printf("number[%d]=%d\t",i,number[i]);
	}


	printf("最大值是：number[%d]=%d",j,max);
	printf("最小值是：number[%d]=%d",t,min);

	printf("\n");
	
	return 0;
}
