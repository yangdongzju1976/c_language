//下标法
#include <stdio.h>
#include <stdlib.h> //随机函数库
#include <time.h>  //时间函数库
int main()
{
	int a[10][10],*p,(*q)[10];
	int i,j; //循环变量
	p=&a[0][0];
	//p=a[0];a[0]第一行的首地址
	p=*a;
	q=a;//数组名赋值给一个变量，a+1:第二行的首地址，a+2:第三行的首地址。
	srand((unsigned)time(NULL));// 以当前时间来产生随机种子
	//给数组赋初值
	for(i=0; i<10; i++)
		for (j=0;j<10 ;j++ )
			a[i][j]=rand()%100;
	
	printf("\n");
	//输出整个数组
	printf("用数组元素输出：\n");
	for(i=0; i<10; i++)
	{
		printf("\n");
		for (j=0;j<10 ;j++ )
			printf("%-5d",a[i][j]);  //用数组元素输出 
	}

	printf("\n\n用指针加下标输出：\n");
	
	printf("\na[0][0]=%d\t*p",*p);
	printf("\na[0][1]=%d\t*(p+1)",*(p+1));
	printf("\na[0][9]=%d\t*(p+9)",*(p+9));
	printf("\na[1][0]=%d\t*(p+10)",*(p+10));
	
	printf("\n用指针输出：\n");
	for(i=0; i<10; i++)
	{
		printf("\n");
		for (j=0;j<10 ;j++ )
			printf("%-5d",*(p+i*10+j));
	}
	printf("\n用行指针输出：\n");   
	for(i=0; i<10; i++)
	{
		printf("\n");
		for (j=0;j<10 ;j++ )
			printf("%-5d",*(*(q+i)+j));
	}

	printf("\n用数组名指针输出：\n");
	for(i=0; i<10; i++)
	{
		printf("\n");
		for (j=0;j<10 ;j++ )
			printf("%-5d",*(*(a+i)+j));//数组名相当于行指针

	}
	printf("\n\n");
}