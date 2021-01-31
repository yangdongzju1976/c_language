#include <stdio.h>
int main( )
{  
	int i,j,n;
   printf("\nPlease Enter 输入n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   { 
	   for(j=1;j<=n-i;j++) //输出前导空格
         printf(" ");
      printf("*"); //输出星
      for(j=1;j<=2*i-3;j++) //输出中间空格
          printf(" ");
      if (i!=1)
         printf("*");

      printf("\n"); 
   }
   return 0; 
 }