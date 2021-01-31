#include <stdio.h>
int i=0,j=0; //全局变量
void hanoi(int n,char one,char two,char three);
void move(char  x, char  y);                      //函数的声明
int main()
{ 
	
   int m;
   printf("输入盘子数:");
   scanf("%d",&m);
   printf("移步的步骤%\n");
   hanoi(m,'A','B','C');
   printf("\n");
}

void hanoi(int n,char one,char two,char three)
{

	if(n==1)  
		move(one,three);
	else 
		{ 
			hanoi(n-1,one,three,two);  //关键的三行！
			move(one,three);
			hanoi(n-1,two,one,three);
		}
} 


void move(char  x, char  y)
{ 
	
	i++;
	j++;
	if (j<5)
	
		printf("第%d步：%c--->%c\t",i,x, y);
	else
		{	printf("第%d步：%c--->%c\t",i,x, y);
			j=0;
			printf("\n");
			
		}
	
	
}