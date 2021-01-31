#include "stdio.h"
#define M  (y+3) //M 宏名
#define OK 1235
int main()
{								//3=((3))
	int s,y;
	printf("输入y的值：\ny= ");
	scanf("%d",&y);
	s=12*M;  //3*（y)+把里面的M ，用(y*y+3*y)替代。机械的替代 ｓ＝3*(y*y+3*y)＋４＊(y*y+3*y)＋５＊(y*y+3*y)
	printf("s=%d\n",s);
	printf("\nOK   M\n");//在字符串里不进行替代。
	printf("\nOK=%d\n",OK);//字符串外面的OK替换成100
	return 0;
}
