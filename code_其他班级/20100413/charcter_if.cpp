//输入字符，进行判断。
#include <stdio.h>
int main(){
    char c;
    printf("请输入需要判断的字符:");
    c=getchar();
    if(c<32)
        printf("这是个控制字我的符\n");//看
    else if(c>='0'&&c<='9')
        printf("这是个数字\n");
    else if(c>='A'&&c<='Z')
        printf("这是个大写字母\n");
    else if(c>='a'&&c<='z')
        printf("这是个小写字母\n");
    else
        printf("其他字符\n");
    return 0;
}