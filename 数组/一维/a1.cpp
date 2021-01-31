#include <stdio.h>
int main(){
    char str[30];
    char c;
    int i;
    for(c=65,i=0; c<=90; c++,i++){ //参考ASCII码表 A==65  B==66  C==67  D==68
         str[i] = c;
    }
	//输出数据str
	printf("逐一输出数组的元素(字符格式)\n");
	for (i=0; i<30;i++ )
	{
		printf("str[%d]=%c\n",i,str[i]);
	}
	printf("\n\n逐一输出数组的元素(整型格式)\n");
	for (i=0; i<30;i++ )
	{
		printf("str[%d]=%d\n",i,str[i]);
	}
	printf("\n\n整体输出数组(字符格式)\n");
    printf("%s\n\n\n", str);
    return 0;
}