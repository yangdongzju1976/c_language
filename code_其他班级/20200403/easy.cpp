#include "stdio.h"
//���x>y������x��y��ֵ �� 
int main()
{
   int x , y ,t;
   printf("\n��������ֵ���бȽϣ�����С�����˳�������");
  
   printf("\n�������һ������x=");
   scanf("%d",&x);
  
   printf("\n������ڶ�������y=");
   scanf("%d",&y);
  
  
   
   if (x>y)
    {
	   t=x;
	   x=y;
	   y=t;
	  }
	   
	   printf("\n��С����������ǵ�ֵ%d\t%d",x,y); 
	   printf("\n���������"); 
       
       
       return 0;
}
