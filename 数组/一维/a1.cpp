#include <stdio.h>
int main(){
    char str[30];
    char c;
    int i;
    for(c=65,i=0; c<=90; c++,i++){ //�ο�ASCII��� A==65  B==66  C==67  D==68
         str[i] = c;
    }
	//�������str
	printf("��һ��������Ԫ��(�ַ���ʽ)\n");
	for (i=0; i<30;i++ )
	{
		printf("str[%d]=%c\n",i,str[i]);
	}
	printf("\n\n��һ��������Ԫ��(���͸�ʽ)\n");
	for (i=0; i<30;i++ )
	{
		printf("str[%d]=%d\n",i,str[i]);
	}
	printf("\n\n�����������(�ַ���ʽ)\n");
    printf("%s\n\n\n", str);
    return 0;
}