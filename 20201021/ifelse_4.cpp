#include <stdio.h>
int main(){
    char c;
    printf("�����ַ�:");
    c=getchar();
	
	
	if(int(c)<32)
		printf("����һ�������ַ�\n");
	else if(c>='0'&&c<='9')
		printf("����һ������\n");
	else if(c>='A'&&c<='Z')
		printf("����һ����д��ĸ\n");
	else if(c>='a'&&c<='z')
		printf("����һ��Сд��ĸ\n");
	else
		printf("�����ַ�\n");
			
	
    return 0;
}