#include <stdio.h>

int main()
{
	char ch;
	printf("请输入大写字符:\n");
	ch=getchar();
	ch=(ch>65&&ch<90)?ch+32:ch;
	printf("转换成小写小母是:\n");
	putchar(ch);
	putchar('\n');
	return 0;
}
