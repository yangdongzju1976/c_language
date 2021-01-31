//传值调用
#include <stdio.h>
#include <stdlib.h> //库函数
int incre(int x); //函数声明
int t=0;
int main()
{
   int a[100],b[100],i,j;
	
	//通过随机函数给数组a赋值
   for(i=0;i<100;i++) 
	   a[i]=rand()%100;

   //通过随机函数给数组b赋值
   for(i=0;i<100;i++) 
	   b[i]=rand()%100;
    j=0;
   printf("\n输出数组a:\n");
	for(i=0;i<100;i++) 
	{
		if (j++<6)
		{
			printf("%d\t",a[i]);
		}
		else
		{
		  printf("%d\n",a[i]);
		  j=0;
		}
		
	}
	printf("\n在子函数中输出数组a:\n");
	for (i=0;i<100 ;i++ )
	{
		incre(a[i]);
	}




	printf("\n输出调用后的数组a:\n");
	j=0;
	for(i=0;i<100;i++) 
	{
		if (j++<6)
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

int incre(int x)
{
	x=x+1;
	if (t++<6)
	{
		printf("%d\t",x);
	}
	else
	{
		t=0;
	printf("%d\n",x);
	}
}