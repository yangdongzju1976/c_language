#include <stdio.h>
#include <math.h>
//素数
int main()
{ int m,i,k;
	//输入要判断的值
	printf("输入素数的值m=");
   scanf("%d",&m);
   //k=floor(sqrt(m));
   //开方
   k=sqrt(m);

   for(i=2;i<=k;i++)
     if(m%i==0)  break;

   if(i>k)  printf("%d 是素数\n",m);
   else   printf("%d 不是素数\n",m);
   return 0;
}

