#include <stdio.h>
/* 交换变量的值 */
int main()
{
   int a,b;
   a=6;
   b=8;
   printf("交换前：\ta=%d\tb=%d\n",a,b); 
   a=a+b;
   b=a-b;
   a=a-b; 
   printf("交换后：\ta=%d\tb=%d\n",a,b);
   getchar();
   return 0; 
}
