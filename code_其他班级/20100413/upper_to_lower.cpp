#include <stdio.h>

int main()
{
	char ch;
	printf("�������д�ַ�:\n");
	ch=getchar();
	ch=(ch>65&&ch<90)?ch+32:ch;
	printf("ת����СдСĸ��:\n");
	putchar(ch);
	putchar('\n');
	return 0;
}
