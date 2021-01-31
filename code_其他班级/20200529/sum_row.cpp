#include "stdio.h"
//输出每一行的值
get_sum_row(int  x[][3], int  result[] ,int  row, int  col)//无返回值函数
{ 
	int i,j;
	for(i=0;i<row;i++)
	{ 
		result[i]=0;
		for(j=0;j<col;j++) 
			result[i]+=x[i][j];
	}
}

main()
{ 
	int a[2][3]={3,6,9,1,4,7};
	int sum_row[2],row=2,col=3,i;
	get_sum_row(a,sum_row,row,col);//传址调用与传值调用相结合，变量能不能传值调用？

	for(i=0;i<row;i++)
	printf("各行和[%d]=%d\n",i+1,sum_row[i]);
}