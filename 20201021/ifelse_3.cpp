#include <stdio.h>
int main()
{
   int age;
   printf("����������:");
   scanf("%d",&age);
   if(age >=18)
   {
    
    printf("���Ѿ����꣬���Բμ�ͶƱ�ˣ���\n");
   }
   else
   {
    /* This statement will only execute if the
     * condition specified in the "if" returns false.
     */
    printf("����δ���꣬������ͶƱ��\n");
   }
   return 0;
}