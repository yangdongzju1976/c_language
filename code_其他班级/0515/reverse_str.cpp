#include <stdio.h>
#include "string.h"
int main()
{  
	char str1[80],str2[80];
    int temp,i,j;
    printf("Enter a string:\n");
    gets(str1);
	j=strlen(str1);

	printf("������ַ�������Ϊ��%d\n",j);
    for(i=0;i<j;i++)
    {
		//str2[j-i]=str1[i];
		str2[j-1-i]=str1[i];   //�ؼ����
    }
	str2[j]='\0'; //str2β�ַ���ֵ
	printf("���str1:\n");
    puts(str1);
//	for (i=0;i< ; )


	printf("���str2:\n");
	puts(str2);
	return 0;
}
