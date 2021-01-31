#include <stdio.h>
#include "string.h"
int main()
{  
	char str1[80],str2[80];
    int temp,i,j;
    printf("Enter a string:\n");
    gets(str1);
	j=strlen(str1);

	printf("输入的字符串长度为：%d\n",j);
    for(i=0;i<j;i++)
    {
		//str2[j-i]=str1[i];
		str2[j-1-i]=str1[i];   //关键语句
    }
	str2[j]='\0'; //str2尾字符赋值
	printf("输出str1:\n");
    puts(str1);
//	for (i=0;i< ; )


	printf("输出str2:\n");
	puts(str2);
	return 0;
}
