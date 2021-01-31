#include<windows.h> // -----Sleep()让进程暂停执行一段时间
#include<stdio.h>
#include "stdlib.h" //  ----system()指定的命令名称或程序名称传给要被命令处理器执行的主机环境，并在命令完成后返回。
#define stoptimeshort 40  //宏替换，用 数字40去替换程序出现的标识符stoptimeshort
#define stoptimelong 100
int main()
{
    int i;//定义一个变量i
	int sum=0;
	/*for (i=0;i<100 ;i++ )
	{
		printf("\n这条语句被执行100次");
	}
	*/
	for (i=0;i<100 ;i++ )
	{
		system("color 04");
		printf("hello\n");
		//continue;
		system("color 75");
		printf("阿达西\n");


	}
/*	for (i=0;i<100 ;i++ )
	{
		//printf("*%d",i);//\t、\n 空格 %d前后 
		printf("i=%d\n",i);
	}*/
	/*for (i=0;i<=100 ;i++ )
	{
		sum=sum+i;
		printf("sum=%d\n",sum);//sum=1
	}*/
/*	for (i=1;i<=100 ;i++ )
	{
		printf("sum=%d+%d\n",sum,i); //sum=1+2
		sum=sum+i;
	}
*/
/*	for (i=1;i<=100 ;i++ )
	{
		printf("上一轮sum=%d\ti=%d\t 本轮sum=",sum,i);
		sum=sum+i;
		printf("%d\n",sum);
	}*/
	sum=0;
	for (i=1;i<=100 ;i++ )
	{
		printf("sum=");
		for (int j=1;j<i ;j++ )
		{
			system("color 04");
			printf("%d+",j);
			//system("color 07");
			
		}
		sum=sum+i;
		system("color 07");
		printf("%d=%d\n",i,sum);
	}
	/*for (i=0;i<500 ;i++ )
	{
		Sleep(200);
		printf("%d*",i);//printf("%d",i);
	}
*/
	/*for (i=0;i<300 ;i++ )
	{
		system("cls");
		printf("\a%d\n",i);
		Sleep(1000);//Sleep(i*10)
		
		
	}
*/
	
	
	return 0;
}