#include "stdio.h"
int main()
{
	int a,b;
	printf("\n输入两个数进行比较");
	printf("\n输入第一个数:a=");
	scanf("%d",&a);
	printf("\n输入第一个数:b=");
	scanf("%d",&b); 
	//比较
	if (a>b)
		printf("\na比b大");
	
	else
	   printf("\na不比b大"); 	
	
	/*
	if (a>b)
		{	
			printf("\na比b大");
		}
	else
		{
	
	   		printf("\na不比b大"); 
		}
	 
 	 
	 
	*/
	/*
	if (a>b)
		{	
			printf("\na比b大");
		}
	else
		{
			if (a==b)
				printf("a==b")
			else
		   		printf("\na比b小"); 
		}
	 
 	 
	 
	*/
	
	
	
	
	return 0;
}
