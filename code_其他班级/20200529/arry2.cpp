//��ֵ����
#include <stdio.h>
#include <stdlib.h> //�⺯��
int incre(int x); //��������
int t=0;
int main()
{
   int a[100],b[100],i,j;
	
	//ͨ���������������a��ֵ
   for(i=0;i<100;i++) 
	   a[i]=rand()%100;

   //ͨ���������������b��ֵ
   for(i=0;i<100;i++) 
	   b[i]=rand()%100;
    j=0;
   printf("\n�������a:\n");
	for(i=0;i<100;i++) 
	{
		if (j++<6)
		{
			printf("%d\t",a[i]);
		}
		else
		{
		  printf("%d\n",a[i]);
		  j=0;
		}
		
	}
	printf("\n���Ӻ������������a:\n");
	for (i=0;i<100 ;i++ )
	{
		incre(a[i]);
	}




	printf("\n������ú������a:\n");
	j=0;
	for(i=0;i<100;i++) 
	{
		if (j++<6)
		{
			printf("%d\t",a[i]);
		}
		else
		{
		  printf("%d\n",a[i]);
		  j=0;
		}
		
	}
	/*   
	 printf("\n�������b:\n");
	for(i=0;i<100;i++) 
	{
		if (j++<5)
		{
			printf("%d\t",b[i]);
		}
		else
		{
		  printf("%d\n",b[i]);
		  j=0;
		}
		
	}
	*/
   printf("\n");
   
	

   printf("\n");

   
  
}

int incre(int x)
{
	x=x+1;
	if (t++<6)
	{
		printf("%d\t",x);
	}
	else
	{
		t=0;
	printf("%d\n",x);
	}
}