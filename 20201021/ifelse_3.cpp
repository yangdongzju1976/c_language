#include <stdio.h>
int main()
{
   int age;
   printf("输出你的年龄:");
   scanf("%d",&age);
   if(age >=18)
   {
    
    printf("您已经成年，可以参加投票了！！\n");
   }
   else
   {
    /* This statement will only execute if the
     * condition specified in the "if" returns false.
     */
    printf("您还未成年，还不能投票！\n");
   }
   return 0;
}