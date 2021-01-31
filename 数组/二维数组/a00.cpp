#include <stdio.h>
#include "windows.h"
int main(int argc, char *argv[])
{	
	system("color 70");
	//定义一个三行四列的数组
	int a[3][4];
	//对数组元素进行赋值
	a[0][0]=0;
	a[0][1]=1;
	a[0][2]=2;
	a[0][3]=3;
	a[1][0]=3;
	a[1][1]=4;
	a[1][2]=5;
	a[1][3]=6;
	a[2][0]=7;
	a[2][1]=8;
	a[2][2]=9;
	a[2][3]=10;
	//输出数组
	printf("\n输出二维数组\n");
	//外循环控制行 内循环控制列。
	for (int i = 0;i < 3; i++)
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
