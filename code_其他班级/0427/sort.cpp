#include <stdio.h>
//简单法排序
int main()
{
	int i,j,number[10],temp,temp_number,temp_t;
	//用循环从键盘依然输入数组的10个元素值
	//printf("\n请逐个输入数组的各个元素（共10个）number[i]=\n");
	number[10]={12,45,3,6,789,54,67,65,66,890};
	/*for (i=0;i<10 ;i++ )
	{
		scanf("%d",&number[i]);
	}
	*/
	//排序
	for (i=0;i<10 ;i++ )
	{
		temp_number=number[i];
		temp_t=i;
		
		//内循环，找出从number[i]到数组最后一个数中的最大值。
		for (j=i+1;j<10 ;j++ )
		{
			if (temp_number<number[j])
			{
				temp_number=number[j];
				temp_t=j;
			}
		}

		//如果number[i]不是最大值，交换number[i]与number[temp_t]
			if (temp_t!=i)
			{
				temp=number[i];
				number[i]=temp_number;
				number[temp_t]=temp;

			}
	}
	
	//输出排序后的数组
	for (i=0;i<10 ;i++ )
	{
		printf("number[%d]=%d\t",i,number[i]);
	}


	printf("\n");
	
	return 0;
}
