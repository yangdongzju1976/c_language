//输出100以内的所有偶数
#include <stdio.h>
#include "windows.h"
int main(int argc, char *argv[])
{	
	int i;
	printf("100以内的偶数为：\n");
	system("color 70");
	for (i=1;i<=100 ;i++ )
	{
		if (i%2==0) //如果被2整除，则输出。%：取余数。 例5%2，5除以2的余数为1。5%2==1
		{
			printf("%d\t",i);
		}
		if (i%16==0) //如果i对16取余等于零。则表示i能被16整除，则换行。思考一下为什么？
		{
			printf("\n");
		}
	}
	printf("\n\n\n");
	
	return 0;
}
//求1000以内能被3和5整除，但不能被6整除的数。如：15，45，75等