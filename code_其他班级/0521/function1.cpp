#include <stdio.h> 
int main(  ) 
{
	int printstar(  ); //声明一个函数
	int print_message(  ); //声明一个函数
	printstar(  );    //调用函数
	print_message(  );//调用函数
	printstar(  ); //调用函数
} 

int printstar(  ) 
{
	printf("***********************\n" );
}    

int print_message(  ) 
{
	printf("    How_do_you_do!\n");
}                      
