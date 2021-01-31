#include<stdio.h>

int main()
{
int i,j,k;
scanf("%d",&k);
for(i=1;i<=k;i++)//横着第一行 
{
	if(i%2==0)
	{
		printf("&");
	}
	else if(i%2==1)
	{
		printf(" ");
	}
}
printf("&\n");//竖列第一个符号 ，避免三角没有最上面的一个角，所以直接输出 


for(i=1;i<=k-2;i++)
{
	printf(" *",i);//竖列第一列 
	for(j=1;j<i;j++)
	{
		printf(" ");//三角里的空格 
	
}
printf("&");//竖列的斜列 

for(j=k-3;j>=i;j--)
{
	
	printf(" ");//三角里的空格
 
}

printf("$\n");//竖列最后一列 ,\n加在循环的最后一行，加在前面会出错 

}
 for(i=1;i<=k-2;i++)
{
	printf("\n");
	for(j=k-3;j>=i;j--)
	{
		printf(" ");
	}
	printf("*");
}
for(i=0;i<=k-1;i++)//最后一行 
		if(i%2==1)
		{
			printf("&");
		}
	else if(i%2==0)
	{
		printf(" ");
	}
if(i%2==1)//最后一行的第一个符号 
	{
		printf("&");
	}
	else if(i%2==0)
	{
		printf("&");
	}
}
