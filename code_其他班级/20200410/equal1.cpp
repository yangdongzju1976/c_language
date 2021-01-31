//输入一个数，判断奇偶
#include<stdio.h>  

int main() 
{
    int number = 0;

    printf("\n请输入一个整数：number=");
    scanf("%d",&number);

    if (number%2 == 0) //判等
       
	   printf("%d 是偶数\n",number);

	else

		printf("%d 是奇数\n",number);


   return 0; 

}	
