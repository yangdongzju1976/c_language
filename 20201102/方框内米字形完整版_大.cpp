#include <stdio.h>
#include "windows.h"
//输出中间带米字的正方形
int main(int argc, char *argv[])
{
	int i,j,k,t,p,m,n;
	printf("输入n的值\n");
	scanf("%d",&n);
	system("color 70");
	if (n%2==0)  
	{
	//当n为偶数时
		//上半部分
			//输出第一行
				//前导空格
				printf("\n		"); 
				//偶数位置输出星，奇数位置输出空格
				for (i=0;i<=2*n ;i++ )
				{
					if (i%2==0)
					{
						printf("*"); 
					}
					else
					{
					printf(" ");
					}
				}
				//换行
				printf("\n");
			//输出中间的行
				for (i=1;i<n/2 ;i++ )
				{	
					//前导空格与第1颗星
					printf("		*");
					//空格（1）
					for (j=1;j<2*i;j++ )  
					{
						printf(" ");
					}
					//第2颗星
					printf("*");		
					 //空格（2）
					for (t=0;t<n-2*i-1 ; t++) //
					{
						printf(" ");
					}
					//第3颗星-----中间竖线上的星（测试时可以改成其他符号如&%￥#@等）
					printf("*");   
					//空格（3）
					for (t=0;t<n-2*i-1 ; t++)
					{
						printf(" ");
					}
					//第4颗星
					printf("*");
					//空格（4）
					for (j=1;j<2*i;j++ )
					{
						printf(" ");
					}
					//第5颗星，也是最后一颗星。加换行
					printf("*\n");     //
					
				}
			//上半部分的输出最后一行----也就是整个图形的中间一行。
				//前导空格
				printf("		");
				//偶数位置输出星，奇数位置输出空格
				for (i=0;i<=2*n ;i++ )
				{
					if (i%2==0) //(i==n/2||i%2==0)
					{
						printf("*");
					}
					else 
					{
						printf(" ");
					}
					
				}
			//换行---上半部分最后一行的换行。
			printf("\n");
		/******************************************************************************************/
		//下半部分
		//第一行省略----与上半部分共享。
		//输出中间的行
		for (i=1;i<n/2 ;i++ )  //下半部分共n/2-1行
		{
			//每行的前导空格与第1颗星
			printf("		*");
			//空格（1）
			for (j=n-i*2;j>1;j--)  
			{
				printf(" ");
			}
			//第2颗星
			printf("*");		
			
			//空格（2）
			for (t=1;t<2*i ;t++ ) 
			{
				printf(" ");

			}
			 //第3颗星----中间竖线上的星
			printf("*"); 
			 //空格（3）
			for (t=1;t<2*i ;t++ )
			{
				printf(" ");

			}
			//第4颗星
			printf("*");  
			//空格（4）
			for (j=n-i*2;j>1;j--)  
			{
				printf(" ");
			}
			//第5颗星（最后一颗星）加换行
			printf("*\n");     
			
		}
		//输出最后一行
			//前导空格
			printf("		");
			//偶数位置输出星，奇数位置输出空格
			for (i=0;i<=2*n ;i++ )
			{
				if (i%2==0)
				{
					printf("*");
				}
				else 
				{
					printf(" ");
				}
			}
		//输出换行（最后的换行可以不要。）
		printf("\n");
	}
	else
	{	
	//当n为奇数时
		//上半部分
			//输出第一行
				//前导空格
				printf("\n		"); 
				//偶数位置输出星，奇数位置输出空格
				for (i=0;i<=2*n ;i++ )
				{
					if (i%2==0)
					{
						printf("*"); 
					}
					else
					{
					printf(" ");
					}
				}
				//换行
				printf("\n");
			//输出中间的行
				for (i=1;i<n/2+1 ;i++ )
				{	
					//前导空格与第1颗星
					printf("		*");
					//空格（1）
					for (j=1;j<2*i;j++ )  
					{
						printf(" ");
					}
					//第2颗星
					printf("*");		
					//空格（2）
					for (t=0;t<n-2*i-1 ; t++) 
					{
						printf(" ");
					}
					//第3颗星---中间竖线上的星
					printf("*");
					//空格（3）
					for (t=0;t<n-2*i-1 ; t++) 
					{
						printf(" ");
					}
					//第4颗星
					printf("*");
					//空格（4）
					for (j=1;j<2*i;j++ )  
					{
						printf(" ");
					}
					 //第5颗星，也就是最后一颗星。加换行
					printf("*\n");    
				}
			//上半部分的输出最后一行----也就是整个图形的中间一行。
				//前导空格
				printf("		");
				//偶数位置输出星，奇数位置输出空格。
				for (i=0;i<=2*n ;i++ )
				{
					if (i%2==0||i==n) //(i==n/2||i%2==0)
					{
						printf("*");
					}
					else 
					{
						printf(" ");
					}
				}
				printf("\n");
		/******************************************************************************************/
		//下半部分
		//第一行省略-----与上半部分共享一行。
		n=n+1;//调整时加的。如果没有这一行，图形为会出现问题。
			//输出中间的行
				for (i=1;i<n/2 ;i++ )  //下半部分共n/2-1行
				{
					//每行的前导空格与第1颗星
					printf("		*");
					 //空格（1）	
					for (j=n-i*2;j>1;j--) 
					{
						printf(" ");
					}
					//第2颗星
					printf("*");		
					 //空格（2）
					for (t=1;t<2*i-1 ;t++ )
					{
						printf(" ");
					}
					//第3颗星-----中间竖线上的星
					printf("*");  
					//空格3
					for (t=1;t<2*i-1 ;t++ ) 
					{
						printf(" ");
					}
					//第4颗星
					printf("*");  
					//空格（5）
					for (j=n-i*2;j>1;j--)  
					{
						printf(" ");
					}
					////第5颗星，也是最后一颗星）加换行
					printf("*\n");     
				}
			//输出最后一行
				//前导空格
				printf("		");
				//偶数位置输出*，奇数位置输出空格。
				for (i=0;i<=2*n-1 ;i++ )
				{
					if (i%2==0)
					{
						printf("*");
					}
					else 
					{
						printf(" ");
					}
				}
				//换行
				printf("\n");
			}	
			printf("\n\n\n\n");
			//下面一句与程序无关。可以删除。
			scanf("%d",&n);
	return 0;
}
