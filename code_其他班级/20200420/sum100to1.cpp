#include <stdio.h>
//����1+2+3+...100
int main()
{
	int i,sum;//i ѭ��������sum:��
	i=1,sum=0;
	do
	{
		sum=sum+i;
		i++;
		
	}
	while(i<=100);

	printf("\nsum=%d\n",sum);
	
	return 0;
}



//continue;  //��������ѭ��
	//	printf("\nsum=%d+%d",sum-i+1,i-1);
		//if (i>20) break; //����ѭ��