//在屏幕的指定坐标显示静止的小球
#include <stdio.h>
int main()
{
	int i,j;
	int x=5;
	int y=10;
	//纵坐标10，横坐标5。显示一个小球
	//printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n1234*");
	//1.输出上面的空行
	for (i=0;i<10 ;i++ )
	{
		printf("%d\n",i);
	}
	//2.输出前面的空格
	for (j=0;j<5 ;j++ )
	{
		printf("%d",j);
	}

	printf("\n\n\n");
	return 0;
}
