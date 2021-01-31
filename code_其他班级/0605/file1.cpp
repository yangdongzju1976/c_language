
#include "file2.cpp"
#include "file3.cpp"
#include "file4.cpp"
#include <stdio.h>
int main() 
{ 
	void extern  enter_string(char str[80] );  //函数声明
	void extern  delete_string(char str[],char ch ); 
	void extern  print_string(char str[ ] ); 
	char  c;  
	char  str[80]; 
	enter_string(str); 
	printf("请输入要删除的字符：\n");
	scanf("%c",&c); 
	delete_string(str,c); 
	printf("输出删除后的字符数组：\n");
	print_string(str);
	printf("\n\n");
}