#include <stdio.h>

int main()
{
	int i,*p;
	p=&i;
	i=5;
	printf("\n变量i=%d\n",*p);//*p==i i的值  通过指针变量访问变量
    printf("\n变量i的地址p=%0x\n",p);//i的地址，p的值 
	printf("\n指针变量p的地址&p=%0x\n",&p);//p的地址
	
	return 0;
}
