//��ַ���� ���ݵ�ַ�ĵ��ã�
#include <stdio.h>
#include <stdlib.h> //�⺯��
int incre(int x[],int y); //��������
int main()
{
   int a[100],b[100],i,j;
	
	//ͨ���������������a��ֵ
  
   for(i=0;i<100;i++) 
	   a[i]=rand()%1000;//α�����

   //ͨ���������������b��ֵ
   for(i=0;i<100;i++) 
	   b[i]=rand()%100;
    j=0;
   printf("\n�������a:\n");
	for(i=0;i<100;i++) 
	{
		if (j++<5)
		{
			printf("%d\t",a[i]);
		}
		else
		{
		  printf("%d\n",a[i]);
		  j=0;
		}
		
	}
	incre(a,100);
	printf("\n����������������a:\n");
	j=0;
	for(i=0;i<100;i++) 
	{
		if (j++<5)
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

int incre(int x[],int y)//�ββ��ö�������ĳ��ȣ���һά��a[][5]
{
	int i;
	for (i=0;i<y ;i++ )
	{
		x[i]+=1;
	}
}