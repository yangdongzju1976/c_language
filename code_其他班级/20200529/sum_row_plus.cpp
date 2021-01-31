//求数组各行的和
#include <stdio.h>
#include <stdlib.h> //随机函数需要的库
#include <time.h>   //随机变量为当前时间，产生当前时间的函数所在的库。

void get_sum_row(int  x[][4], int  result[] ,int  row, int  col); //函数声明

int main()
{
	int i,j;
	int a[10][4];
	int b[10];
	int row,col;
	row=10;
	col=4;
	srand( (unsigned)time( NULL ) ); //产生随机数的种子
	//srand(11);
	for(i=0;i<10;i++) 
		for (j=0;j<4 ;j++ )
		{
		a[i][j]=rand()%1000;
		}

	get_sum_row(a,b,row,col);//调用子函数，求每一行的和，和存放在数组b中。
	
	printf("\n输出数组a及每一行的和:\n");
	printf("     第1列\t第2列\t第3列\t第4列\t每行和\n");
	for(i=0;i<10;i++) 
	{
		printf("第%d行",i);
		for (j=0;j<4 ;j++ )
		{
		printf(" %d\t",a[i][j]);
		}
		printf("%d\n",b[i]);
	}

	//int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};

	//printf("\n最大值是： %d\n",max_value(a,10));
}

void get_sum_row(int  x[][4], int  result[] ,int  row, int  col)
{ int i,j;
  for(i=0;i<row;i++)
    { result[i]=0;
       for(j=0;j<col;j++)  result[i]+=x[i][j];}
}