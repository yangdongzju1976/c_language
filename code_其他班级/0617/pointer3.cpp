#include <stdio.h> 
int main( )
 { 
	const char  *string="I  love China!";
    printf("%s\n",string);
    string+=7;
            while(*string) //*string是字符串的元素，也就是字符。\0
             {      putchar(string[0]);//每次输出一个字符
			        string++;
              }
			  printf("\n");
			
			string-=12;//指针往后退
			while(*string)
             {      putchar(string[0]);
			        string++;
              }
			  printf("\n\n");	
			string-=14;
			while(*string)
             {      putchar(string[0]);
			        string++;
              }
		 printf("\n\n");
		 
		while(*string!='I')//不等于'I'
             {      putchar(string[0]);
			        string--;
              }
			printf("I\n\n");
  }