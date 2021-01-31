#include <stdio.h>
void print_star();
int f(int a,int b); 
int main()
{  
	
    int i=2,p;
    p=f(i,++i);     
    printf("%d\n",p);
}

int f(int a, int b)
{   
	int c;
    if(a>b)  c=1;
    else if(a==b)   c=0;
    else c=-1;
	void print_star();
	printf("a=%d\tb=%d\n",a,b);
	void print_star();
    return(c);
}
void print_star()
{
	printf("****************\n");
}