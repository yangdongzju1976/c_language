#include <stdio.h>
#include <string.h>  //记得引入该头文件
int main(){
    char str[] = "http://c.biancheng.net/cpp/u/jiaocheng/"; //对字符数组进行整体赋值。
    long len = strlen(str); //通过string.h标准库中的函数strlen()获得数组的长度。
    printf("数组长度是： %ld.\n", len);
    printf("\n逐一输出字符\n");
	for (int i=0;i<len ;i++ )
	{
		printf("str[%d]=%c\t",i,str[i]);
		if ((i+1)%5==0)
		{
			printf("\n");
		}

	}
	printf("\n\n整体输出数组:\nstr[]=%s",str);
	printf("\n\n\n");
    return 0;
}