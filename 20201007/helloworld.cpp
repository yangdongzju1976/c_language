#include <stdio.h>

int main()
{
	printf("Hello, World\n");//printf()输出语句
	//"\n"斜杠n,换行
	//printf("\nHello\nWorld\n\n\n");
	//printf("\n1\n2\n3\n4\n5\n");
	//"\t" 斜杠t,跳格，相当于按了一次TAB键。
	//printf("\n1\t2\t3\t4\t5\n");
	printf("\n   *");
	printf("\n  ***");
	printf("\n *****");
	printf("\n*******");
	printf("\n\n");
	while (getchar()!='c')
	{
		printf("\a");
	}
		
	
	
	return 0;
}
