#include <stdio.h> 
//Fibonacci����
int main()
{		
	int i,j=0;//ѭ������
	int f[20]={1,1}; // ����ֵ
	
	for(i=2;i<20;i++) //ѭ����ֵ
	
	{
		f[i]=f[i-2]+f[i-1];
	}


	for(i=0;i<20;i++) //ѭ�����
	{ 
		
		
		if (i<10)
		{
		 printf("f[%d]=%-12d",i,f[i]);
		}
		else
		{
			printf("f[%d]=%-11d",i,f[i]);
		}
		j++;
		 if(j%5==0)  printf("\n");  //ÿ���5������
	}
}
