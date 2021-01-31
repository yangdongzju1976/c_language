/*文件file2.c*/
#include  "stdio.h"
void enter_string(char str[80]) 
{	
	printf("请输入字符数组：\n");
	gets(str);  //输入字符数组，相当于scanf("%s",str);
} 
