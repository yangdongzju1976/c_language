//指针法：
#include <stdio.h>
#include <stdlib.h> //随机函数
#include <time.h>  //时间函数
int main()
{
	int a[10]={0,1,2};
	int *p,i;
	srand((unsigned)time(NULL));// 以当前时间来产生随机种子
	//赋初值
	for(i=0; i<10; i++)
		a[i]=rand()%100;
	
	printf("\n");
	
	//输出原数组
	printf("\n  第一次输出数组\n");
	
	for(i=0; i<10; i++)
		printf("  %d",*(a+i));  //数组名指针输出
	
	//
	printf("  \n  第二次输出数组\n");
	for (p=a+10,i=1; i<11; i++)
		printf("  %d",*(p-11+i));//指针法 如果你能理解第二次的输出，那就比较厉害。
	
	printf("  \n\n  第三次输出数组\n");
	for (p=a,i=0; i<10; i++)
		printf("  %d",*p++); //先*再++，先取出p指向的元素的值，然后p再++，指向下一个元素

	printf("  \n\n  第四次输出数组\n");
	for (p=a-1,i=0; i<10; i++) //注意p的初值
		printf("  %d",*++p); //先++再*，p先指向下一个元素，再取值。
	
	printf("  \n\n  第五次输出数组\n");
	for (p=a,i=0; i<10; i++) //注意p的初值
		printf("  %d",(*p)++); //p始终指向第一个元素,第一个元素被加了10次
	
	printf("  \n\n  第六次输出数组\n");
	for (p=a,i=0; i<10; i++,p++) //p的值不断后指
		printf("  %d",(*p)++); //

	printf("  \n\n  第七次输出数组\n");
	for (p=a+9,i=0; i<10; i++) //p的值不断后指
		printf("  %d",*p--); //
		printf("  \n\n  第八次输出数组\n");
	for (p=a,i=0; i<10; i++) //p的值不断后指
		printf("  %d",p[i]); //
	printf("\n\n");
}
