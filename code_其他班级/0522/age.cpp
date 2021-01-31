int age(int n) 
{
	int  c; 
	if(n==1)   
		c=10; 
	else  
		c=2+age(n-1); 
	return(c); 
} 

#include <stdio.h>
int main(  ) 
{
	printf("%d\n ", age(5));
}
