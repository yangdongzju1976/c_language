#include <stdio.h>
int main( )
{ 
	char *s,a[]="I love China";
	const	 char *s1="abcd"; //要加const
	 printf("\n用数组名输出  字符串：%s",a);
	 printf("\n用数组名+1输出字符串：%s",a+1);
	 printf("\n用数组名+2输出字符串：%s",a+2);
	 printf("\n用数组名+3输出字符串：%s",a+3);
	 printf("\n用数组名+4输出字符串：%s",a+4);
	 printf("\n用数组名+5输出字符串：%s",a+5);
	 printf("\n用数组名+6输出字符串：%s",a+6);
	 printf("\n用数组名+7输出字符串：%s",a+7);
	 printf("\n用数组名+8输出字符串：%s",a+8);
	s=a;
	s1="abcdfg";
   printf("\n%s\n",s1);
   }
