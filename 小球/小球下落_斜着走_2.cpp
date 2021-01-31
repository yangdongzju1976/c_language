#include <stdio.h>
#include <windows.h>
int print_location(int,int);
int print_border();
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
	bottom=30;
	//小球的左右边界
	int left,right;
	left=0;
	right=45;

	//小球的移动幅度
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
		x=x+velocity_x;
		y=y+velocity_y;
		//清屏
		system("cls");
		
		//显示小球
		print_location(x,y);
		Sleep(500);
		
		//如果到顶或底，反向。
		if ((x==top)||(x==bottom))
		{
			velocity_x=-1*velocity_x;
		}
		//如果到左右边界，则反向。
		if ((y==left)||(y==right))
		{
			velocity_y=-1*velocity_y;
		}


	}
	
	printf("\n\n\n");
	return 0;
}
//函数---在第x行，y列显示小球
int  print_location(int x,int y)
{
	int i,j,k;
	//printf("\n\n\n");
	//输出上面的横线
	for (i=0;i<46 ;i++)
	{
		printf("-");
	}
	//换行
	printf("\n");
	//把光标移动到第x行
	for (i=0;i<x ;i++ )
	{
		//第一列的竖线
		printf("|");
		//中间的空格
		for (k=0;k<45 ;k++ )
		{
			printf(" ");
		}
		//最后一列的竖线
		printf("|");
		//换行
		printf("\n");
	}
	//把光标移动到第y列
	printf("|");
	for (j=1;j<y ;j++ )
	{
		printf(" ");
	}
	//输出小球
	printf("*");
	//输出*后面的竖线
		//*后面的空格
		for (i=0;i<45-y ;i++ )
		{
			printf(" ");
		}
		//竖线
		printf("|\n");
	//输出*下面的竖线
		for (i=0;i<30-x ;i++ )
		{
			printf("|");
			for (k=0;k<45 ;k++ )
			{
				printf(" ");
			}
			printf("|\n");
		}
	//输出最后的行
	for (i=0;i<45 ; i++)
	{
		printf("-");
	}
	return 0;
	
}
//输出周边方框
int print_border()
{
	int i,j;
	//输出上面的横线
	for (i=0;i<47 ;i++ )
	{
		printf("-");
	}
	return 0;
}
