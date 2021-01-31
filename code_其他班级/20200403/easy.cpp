#include "stdio.h"
//如果x>y，交换x、y的值 ？ 
int main()
{
   int x , y ,t;
   printf("\n输入两个值进行比较，按从小到大的顺序输出！");
  
   printf("\n请输入第一个数：x=");
   scanf("%d",&x);
  
   printf("\n请输入第二个数：y=");
   scanf("%d",&y);
  
  
   
   if (x>y)
    {
	   t=x;
	   x=y;
	   y=t;
	  }
	   
	   printf("\n从小到大输出他们的值%d\t%d",x,y); 
	   printf("\n程序结束！"); 
       
       
       return 0;
}
