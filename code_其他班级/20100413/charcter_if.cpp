//�����ַ��������жϡ�
#include <stdio.h>
int main(){
    char c;
    printf("��������Ҫ�жϵ��ַ�:");
    c=getchar();
    if(c<32)
        printf("���Ǹ��������ҵķ�\n");//��
    else if(c>='0'&&c<='9')
        printf("���Ǹ�����\n");
    else if(c>='A'&&c<='Z')
        printf("���Ǹ���д��ĸ\n");
    else if(c>='a'&&c<='z')
        printf("���Ǹ�Сд��ĸ\n");
    else
        printf("�����ַ�\n");
    return 0;
}