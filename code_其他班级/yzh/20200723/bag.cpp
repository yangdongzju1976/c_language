//传址调用 传递地址的调用！
#include <stdio.h>
#include <stdlib.h> //库函数

#include <time.h>  //时间函数库
int incre(int x[],int y); //函数声明
int main()
{
   int a[50],i,j,k,t;
   j=0;
	
	//通过随机函数给数组a赋值
  srand((unsigned)time(NULL));// 以当前时间来产生随机种子
   for(i=0;i<50;i++) 
	   a[i]=rand()%100;//伪随机！

   //通过随机函数给数组b赋值
   
   printf("\n输出数组a:\n");
	for(i=0;i<50;i++) 
	{
		if (j++<9)
		{
			printf("%d\t",a[i]);
		}
		else
		{
		  printf("%d\n",a[i]);
		  j=0;
		}
    }
	//两数之和等于100
for (i=0;i<49 ;i++ )
	{
		for (j=i+1;j<50 ;j++ )
		{
			if (a[i]+a[j]==100)
			{
				printf("\na[%d] %d+a[%d] %d=100",i+1,a[i],j+1,a[j]);
			}
		}
	}
   
   for (i=0;i<48 ;i++ )
   {
	   for (j=i+1;j<49 ;j++ )
	   {
		   if (a[i]+a[j]>100)
		   {
			   continue;
		   }
			else
		   {
				for (k=j+1;k<50 ;k++ )
				{
					if (a[i]+a[j]+a[k]==100)
					{
						printf("\na[%d] %d+a[%d] %d+a[%d] %d=100",i+1,a[i],j+1,a[j],k+1,a[k]);

					}
					else
					{
						continue;
					}
				}
			}
	   }
   }
		
	}
	
	
	

   
  


