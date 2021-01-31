#include <stdio.h>
/* 交换变量的值 */
int main()
{
   int a=0,b=0,c=0;
   a=6;
   b=8;
   printf("交换前：\ta=%d\tb=%d\n",a,b);
   c=a;
   a=b;
   b=c;
   printf("交换后：\ta=%d\tb=%d\n",a,b);
   getchar();
   return 0; 
}

