#include<stdio.h>

int main()
{
int i,j,k;
scanf("%d",&k);
for(i=1;i<=k;i++)//���ŵ�һ�� 
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
printf("&\n");//���е�һ������ ����������û���������һ���ǣ�����ֱ����� 


for(i=1;i<=k-2;i++)
{
	printf(" *",i);//���е�һ�� 
	for(j=1;j<i;j++)
	{
		printf(" ");//������Ŀո� 
	
}
printf("&");//���е�б�� 

for(j=k-3;j>=i;j--)
{
	
	printf(" ");//������Ŀո�
 
}

printf("$\n");//�������һ�� ,\n����ѭ�������һ�У�����ǰ������ 

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
for(i=0;i<=k-1;i++)//���һ�� 
		if(i%2==1)
		{
			printf("&");
		}
	else if(i%2==0)
	{
		printf(" ");
	}
if(i%2==1)//���һ�еĵ�һ������ 
	{
		printf("&");
	}
	else if(i%2==0)
	{
		printf("&");
	}
}
