#include <stdio.h>

int main(int argc, char *argv[])
{
	char char_test,plus_five;
	printf("输入一个字符：\n");
	scanf("%c",&char_test);
	printf("\n输出这个字符：\n");
	printf("\nchar_test=%c",char_test);
	plus_five=char_test+5;
	printf("\nASCII码加上5后该字符为：=%c",plus_five);
		return 0;
}
