#include <stdio.h>
#include "windows.h"
int main(int argc, char *argv[])
{	
	system("color 70");
	//定义一个三行四列的数组
	int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17}};
	
	//对数组元素进行赋值
	
	//输出数组
	printf("\n输出二维数组\n");
	//外循环控制行 内循环控制列。
	for (int i = 0;i < 5; i++)
	{
		//内循环每执行一周就输出一行。
		for (int j=0;j<4 ;j++ )
		{
			printf("a[%d][%d]=%2d\t",i,j,a[i][j]);
		}
		//每输出一行就换行
		printf("\n");
	}


	
	return 0;
}
