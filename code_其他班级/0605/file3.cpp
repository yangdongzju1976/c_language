/*�ļ�file3.cpp*/
#include <stdio.h>
void delete_string(char str[ ],char ch)   //���ַ�����str��ɾ���ַ�ch
{ 
	int  i, j; 
	
	for(i=j=0; str[i] !='\0' ; i++)  //'\0'�ж��ַ�������
	 if(str[i] != ch) str[j++]=str[i];  //ɾ��ch!
	
	str[j]='\0';
}
//    str[]="HelloWorld everone!"  ch = 'e'
//           HlloWorld  vron!