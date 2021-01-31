//传址调用 传递地址的调用！
#include <stdio.h>
#include <stdlib.h> //库函数
int incre(int x[],int y); //函数声明
int main()
{
   int a[100],b[100],i,j;
	
	//通过随机函数给数组a赋值
  
   for(i=0;i<100;i++) 
	   a[i]=rand()%1000;//伪随机！

   //通过随机函数给数组b赋值
   for(i=0;i<100;i++) 
	   b[i]=rand()%100;
    j=0;
   printf("\n输出数组a:\n");
	for(i=0;i<100;i++) 
	{
		if (j++<5)
		{
			printf("%d\t",a[i]);
		}
		else
		{
		  printf("%d\n",a[i]);
		  j=0;
		}
		
	}
	incre(a,100);
	printf("\n输出调函数后的数组a:\n");
	j=0;
	for(i=0;i<100;i++) 
	{
		if (j++<5)
		{
			printf("%d\t",a[i]);
		}
		else
		{
		  printf("%d\n",a[i]);
		  j=0;
		}
		
	}
	/*   
	 printf("\n输出数组b:\n");
	for(i=0;i<100;i++) 
	{
		if (j++<5)
		{
			printf("%d\t",b[i]);
		}
		else
		{
		  printf("%d\n",b[i]);
		  j=0;
		}
		
	}
	*/
   printf("\n");
   
	

   printf("\n");

   
  
}

int incre(int x[],int y)//形参不用定义数组的长度（第一维）a[][5]
{
	int i;
	for (i=0;i<y ;i++ )
	{
		x[i]+=1;
	}
}