#include <stdio.h> 
//冒泡法排序
int main()
{ 
	int a[10],i,j,t;
  printf("依次输入10个数:\n");
  
  for(i=0;i<10;i++) 
     scanf("%d",&a[i]);

  printf("\n"); 

  for(j=0;j<9;j++) //外循环

     for(i=0;i<9-j;i++) //内循环
        if(a[i]>a[i+1]) //相邻元素比较
        {
			t=a[i]; 
			a[i]=a[i+1];
			a[i+1]=t;  //如果a[i]比a[i+1]大，则交换。
		} 

	 printf("按从小到大的顺序输出:\n");
	
	 for(i=0;i<10;i++)
     printf("%d\t",a[i]);

}