//传址调用 传递地址的调用！
#include <stdio.h>
#include <stdlib.h> //库函数

#include <time.h>  //时间函数库
int incre(int x[],int y); //函数声明
int main()
{
   int a[10][10],b[10][10],c[18],d[18],i,j,k,t;
   j=0;
	
	//通过随机函数给数组a赋值
  srand((unsigned)time(NULL));// 以当前时间来产生随机种子
   for(i=0;i<10;i++) 
	   for (j=0;j<10 ;j++ )
	   {
		a[i][j]=rand()%100;//伪随机！
	   }
	   

   //通过随机函数给数组b赋值
   
   printf("\n输出数组a:\n");
	for(i=0;i<10;i++) 
	{
		for (j=0;j<10 ;j++ )
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");		
    }
	//两数之和等于100
	b[0][0]=a[0][0];
    for (i=1;i<10 ;i++ )
    {
		b[0][i]=b[0][i-1]+a[0][i];
		b[i][0]=b[i-1][0]+a[i][0];
    }
	
	for (i=1;i<10 ;i++ )
		for (j=1;j<10 ;j++ )
		{
		   b[i][j]=a[i][j]+(b[i-1][j]>b[i][j-1]?b[i][j-1]:b[i-1][j]);
			
	    }
	
 printf("\n输出数组b:\n");
	for(i=0;i<10;i++) 
	{
		for (j=0;j<10 ;j++ )
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");		
    }
	i=9,j=9;
	k=17;
	for (i=0;i<20 ;i++ )
	{
		c[i]=0;
		d[i]=0;
	}
	i=9;
	j=9;
	 while (i!=0&&j!=0)
	 
		{
			if (i!=0&&j!=0)
			{
				if (b[i-1][j]>b[i][j-1])
         {
			 c[k]=i;
			 d[k]=j-1;
			 k--;
			 j--;
         }
		 else
			{
			 c[k]=i-1;
			 d[k]=j;
			 k--;
			 i--;
			}
		}
			}
    for (;i>0 ;i-- )
    {
		c[k]=i-1;
		k--;
    }
	 for (;j>0 ;j-- )
    {
		d[k]=j-1;
		k--;
    }
/*	for (i=0;i<18 ;i++ )
	{
		printf("\t行：%d\t列：%d",c[i],d[i]);
	}
*/
	for (i=0;i<18 ;i++ )
	{
		k=c[i];
		t=d[i];
		printf("a[%d][%d]=%d\t",k,t,a[k][t]);
		if ((i+1)%6==0)
		{
			printf("\n");
		}
	}

	printf("\nend!\n");


	}
	
	
	

   
  


