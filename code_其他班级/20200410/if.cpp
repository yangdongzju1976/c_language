#include <stdio.h>
 
int main ()
{
   /* �ֲ��������� */
   int a;

   printf("\n����a=");
   scanf("%d",&a);
 
   /* ��鲼������ */
   if( a < 20 )
   {
       /* �������Ϊ�棬������������� */
       printf("a С�� 20\n" );
   }
   else
   {
       /* �������Ϊ�٣�������������� */
       printf("a ���� 20\n" );
   }
   
   printf("a ��ֵ�� %d\n", a);
 
   return 0;
}
