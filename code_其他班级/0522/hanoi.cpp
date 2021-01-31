#include <stdio.h>
int i=0;
int main()
{ 
	void hanoi(int n,char one,char two,char three);
   int m;
   printf("输入盘子数:");
   scanf("%d",&m);
   printf("移步的步骤%\n");
   hanoi(m,'A','B','C');
}

void hanoi(int n,char one,char two,char three)
{
	void move(char  x, char  y);
  if(n==1)  move(one,three);
    else { hanoi(n-1,one,three,two);
              move(one,three);
              hanoi(n-1,two,one,three);
}} 

void move(char  x, char  y)
{ 
	
	if (i++<=6)
		printf("%c--->%c!\t",x, y);
	else
		{
			i=0;
			printf("\n");
			
		}
	
	
}