#include <stdio.h> 
int main( )
 { 
	const char  *string="I  love China!";
    printf("%s\n",string);
    string+=7;
            while(*string) //*string���ַ�����Ԫ�أ�Ҳ�����ַ���\0
             {      putchar(string[0]);//ÿ�����һ���ַ�
			        string++;
              }
			  printf("\n");
			
			string-=12;//ָ��������
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
		 
		while(*string!='I')//������'I'
             {      putchar(string[0]);
			        string--;
              }
			printf("I\n\n");
  }