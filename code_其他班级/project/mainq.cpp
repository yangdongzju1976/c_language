#include <stdio.h>
/* ����������ֵ */
int main()
{
   int a,b;
   a=6;
   b=8;
   printf("����ǰ��\ta=%d\tb=%d\n",a,b); 
   a=a+b;
   b=a-b;
   a=a-b; 
   printf("������\ta=%d\tb=%d\n",a,b);
   getchar();
   return 0; 
}
