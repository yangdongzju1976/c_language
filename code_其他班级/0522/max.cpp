#include <stdio.h>
int max(int ,int);//声明，返回最大值
int min(int ,int );//占坑
void print_star(); //无返回值函数
 main() //main函数不能用void类型，不加默认为整形
{
	int x,y,z;
	print_star();
	x=get_value();
	y=get_value();
	z=max(x,y);
	print_star()
	printf("!最大值为：%d\n\n",z);
	
	//return 0;
}

int get_value(void)
{ 
	int a;
	printf("输入变量的值:\n");
	scanf("%d",&a);
	return a;
}
int max(int a,int b)
{
	if (a>b)
		return a;
	else
		return b;
}

void print_star()
{
	printf("****************\n");
}