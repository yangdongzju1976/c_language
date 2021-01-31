#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	system("color 70");
    int i, j;  //二维数组下标
    int sum = 0;  //当前科目的总成绩
    int average;  //总平均分
    int v[3];  //各科平均分
    int a[5][3];  //用来保存每个同学各科成绩的二维数组
	srand((unsigned)time(NULL));
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            a[j][i]=rand()%100;  //输入每个同学的各科成绩
            sum += a[j][i];  //计算当前科目的总成绩
        }
        v[i]=sum/5;  // 当前科目的平均分
        sum=0;
    }
	printf("\n输出各科成绩\n\t\t\t\t\n");
	printf("\t学生\t数学\tC语言\t英语\n");
	for (i=0;i<5 ;i++ )
	{
		for (j=0;j<3 ;j++ )
		{
			if (j==0)
			{
				printf("\ta[%d][%d]\t%d",i,j,a[i][j]);	
			}
			else
			{
				printf("\t%d",a[i][j]);
			}
					
		}
		printf("\n");
	}
    average = (v[0] + v[1] + v[2]) / 3;
    printf("\tMath: %d\nC Languag: %d\nEnglish: %d\n", v[0], v[1], v[2]);
    printf("\tTotal: %d\n", average);
    return 0;
}
/*
rand函数的定义就是：随机数生成器的初始化函数。通常是和rand函数配合使用的。

函数原型：srand(unsigned seed)

代码中的time（NULL）将返回计算机目前的时刻与1970年1月1日0时0分0秒之间的时间差，单位是秒。

srand又需要unsigned int类型，所以这里使用一个强制类型转换，最后完成种子的设置。
*/