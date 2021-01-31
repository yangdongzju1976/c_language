#include <stdio.h>
//交换 两个数组的数据
int main()
{
	int a[2][3]={1,2,3,4,5,6};// a数组，二行三列
	int b[3][2];			  // b数组 三行二列
	int i,j;
	
	printf("\n输出数组a:\n");   //输出数组a
	for (i=0;i<2 ;i++ )
	{
		for (j=0;j<3 ;j++ )
			printf("\t%d",a[i][j]);

		printf("\n");//换行
		
	}


	for (i=0;i<2 ;i++ )
		for (j=0;j<3 ;j++ )
			b[j][i]=a[i][j];  //对b数组赋值，b[1][2]=a[2][1] 
	       //b[i][j]=a[j][i];
	
	printf("\n输出数组b:\n");	//输出数组b
	
	for (i=0;i<3 ;i++ )
	{
		for (j=0;j<2 ;j++ )
			printf("\t%d",b[i][j]);
		printf("\n");
		
	}
	
	return 0;
}
