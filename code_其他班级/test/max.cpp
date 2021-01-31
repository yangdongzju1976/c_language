#include <stdio.h>
int main()
{
	float i,j;
	printf("\n输入i,j的值并进行判断");
	printf("\n输入i的值i=");
	scanf("%f",&i);
	printf("\n输入j的值j=");
	scanf("%f",&j);
	printf("\n值分别为i=%d\tj=%d",i,j);
	
	if (j+5>i*2)  //i>j 关系表达式 
      	printf("\nj+5比i*2大");
	else
	    printf("\nj+5比i*2小");
	 
	 
	
	
	return 0;
 } 
