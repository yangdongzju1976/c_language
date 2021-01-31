#include "stdio.h"
#include "windows.h"
int main()
{
	//定义循环变量。i:控制行数;j:控制每一行的前导空格数；k:控制每一次的输出的*个数。
	int i,j,k;
	system("color 70");
	for (i=1;i<11 ;i++ )
	{
		printf("*");
	}
	for (i=0;i<11 ;i++ )
	{
		printf("*");
	}
	printf("\n");
	for (i=1;i<=10 ;i++ ) //外层循环，控制行数。共10行。
	{
		
		for (j=1;j<=11-i ;j++ ) //每一行的前导空格数。分别为9、8、7、6、5、4、3、2、1（10-i）
		{
			printf("*");
		}	

		for (k=1;k<=2*i-1 ;k++ )//每一行的星星数。分别为：1，3，5，7，9，11。。。。（2*i-1)
		{
			printf("%d",k%10);
		}
		for (j=1;j<=11-i ;j++ ) //每一行的前导空格数。分别为9、8、7、6、5、4、3、2、1（10-i）
		{
			printf("*");
		}	
		printf("\n");//换行
	}
	for (i=1;i<11 ;i++ )
	{
		printf("*");
	}
	for (i=0;i<11 ;i++ )
	{
		printf("*");
	}
	printf("\n\n");
}