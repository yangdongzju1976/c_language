#include <stdio.h>
/* ����������ֵ */
int main()
{
   int a,b,c;
   a=6;
   b=8;
   printf("����ǰ��\ta=%d\tb=%d\n",a,b);
   c=a;
   a=b;
   b=c;
   printf("������\ta=%d\tb=%d\n",a,b);
   getchar();
   return 0; 
}
