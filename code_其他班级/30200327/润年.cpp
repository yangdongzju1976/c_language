#include <stdio.h> 
//判断年份是否为闰年 
int main()
{
	int year;
	printf("\n请输入年份："); 
	scanf("%d",&year);
	 
         if((year%4==0 &&year%100!=0)||year%400==0)
		   printf("\n%d是润年",year);
	   else
		   printf("\n%d是平年",year);
	

	return 0; 
}
