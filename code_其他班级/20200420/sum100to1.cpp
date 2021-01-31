#include <stdio.h>
//计算1+2+3+...100
int main()
{
	int i,sum;//i 循环变量，sum:和
	i=1,sum=0;
	do
	{
		sum=sum+i;
		i++;
		
	}
	while(i<=100);

	printf("\nsum=%d\n",sum);
	
	return 0;
}



//continue;  //线束本次循环
	//	printf("\nsum=%d+%d",sum-i+1,i-1);
		//if (i>20) break; //跳出循环