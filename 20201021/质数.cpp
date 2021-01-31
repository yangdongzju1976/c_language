//输出100以内的素数（质数：除了1和他本身之外没有别的约数）。如：2、3、5、7、11、13、17、19
//23、29、31、37、41、43、47、53、61等
#include <stdio.h>
#include "math.h"
int main(int argc, char *argv[])
{
	int i,j,t;
	t=1;
	for (i=2;i<100 ;i++ )  //遍历2到100
	{
		for (j=2;j<sqrt(i) ;j++ ) //判断i是不是质数。用2~sqrt(i)整除i
		{
			if (i%j==0) //如果j被i整除。
			{
				break; //退出循环。
			}
		}

		if (j>sqrt(i)) //退出上个循环，如果j比sqrt(i)大，说明i是质数。
		{
			printf("%d\t",i);
			t++;
		}

		if (t%11==0)  //输出换行。
		{
			printf("\n");
			t=1;
		}
	}
	printf("\n\n\n");
	return 0;
}
