#include <stdio.h>
#include <windows.h>
int print_location(int,int,char);
int main(int argc, char *argv[])
{
	
	system("color 70");
	//定义循环变量
	int i,j;
	//x:小球的横坐标，y:小球的纵坐标
	int x,y;
	//小球的顶、底
	int top,bottom; 
	top=0;
	bottom=20;
	//小球的左右边界
	int left,right;
	left=0;
	right=35;
	//字符 初值
	char c=65;//'A'

	//小球的移动方向 1：正向移动  -1：反向移动
	int velocity_x,velocity_y;
	velocity_x=1;
	velocity_y=1;

	//隐藏光标的代码
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	//死循环
	while (1)
	{
		//小球的坐标变换
			//如果velocity_x==1，相当于x++ ，在X轴作正向移动 如果velocity_x==1，相当于x--，在X轴作反向运动。
			x=x+velocity_x;
			//如果velocity_y==1，相当于y++ ，在Y轴作正向移动 如果velocity_y==1，相当于y--，在Y轴作反向运动。
			y=y+velocity_y;
		//清屏
		system("cls");
		//字符在A~Z之间变换
		if (c>'Z')
		{
			c=65;//65==‘A'
		}
		if (c<65)
		{
			c='Z';
		}
		//显示小球
		print_location(x,y,c);
		Sleep(50);
		//如果到顶或底，反向。
		//if ((x==top)||(x==bottom))
		if (x==top)
		{
			//变方向
			velocity_x=-1*velocity_x;
			if (velocity_y==0)
			{
				velocity_y=-1;
			}
			

			//变成下一个字符
			c++;
			//变色
			//system("color 70");
		}
		if (x==bottom)
		{
			velocity_x=-1*velocity_x;
			velocity_y=0;
		}
		//如果到左右边界，则反向。
		if ((y==left)||(y==right))
		{
			//变方向
			velocity_y=-1*velocity_y;
			//变成下一个字符
			c++;
			//变色
			//system("color 7c");

		}
		

	}
	//print_location(5,6,'A');
	//system("cls");
	//print_location(5,6,'B');
	printf("\n\n\n");
	return 0;
}
//函数---在第x行，y列显示小球
int  print_location(int x,int y,char c)
{
	int i,j;
	//把光标移动到第x行
	for (i=0;i<x ;i++ )
	{
		printf("\n");
	}
	//把光标移动到第y列
	for (j=0;j<y ;j++ )
	{
		printf(" ");
	}
	//输出小球
	printf("%c",c);

	return 0;
	
}
