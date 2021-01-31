/*文件file3.cpp*/
#include <stdio.h>
void delete_string(char str[ ],char ch)   //在字符数组str中删除字符ch
{ 
	int  i, j; 
	
	for(i=j=0; str[i] !='\0' ; i++)  //'\0'判断字符串结束
	 if(str[i] != ch) str[j++]=str[i];  //删除ch!
	
	str[j]='\0';
}
//    str[]="HelloWorld everone!"  ch = 'e'
//           HlloWorld  vron!