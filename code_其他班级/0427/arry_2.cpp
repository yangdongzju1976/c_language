#include <stdio.h>

int main()
{	
	int i,j, a[20]={ 0,1,2,3,4,5,6,7,8,9 };
	int b[20]={1,1,1,1,1,1,1};
	a[10]=123,a[15]=35;
	a[19]=56;
	printf("\n");
		
	for (i=1;i<20 ;i++ )//输出
	{
		if (i!=15)
		{
			printf("a[%d]=%d\t",i,a[i]);
		}
		else
		{
			printf("a[%d]=%d",i,a[i]);
		}
		
		
		if (i%10==0)        //l输出十个数据，然后换行。
		{
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
