#include <stdio.h>
int main()
{  	   int number,sum=0;
	   read_loop: scanf("%d",&number);
	   if(!number)  goto print_sum;
	   sum+=number;
	   goto read_loop;
	   print_sum: printf("The total sum is %d\n",sum);
}
