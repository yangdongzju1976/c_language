#include<windows.h> // -----Sleep()�ý�����ִͣ��һ��ʱ��
#include<stdio.h>
#include "stdlib.h" //  ----system()ָ�����������ƻ�������ƴ���Ҫ���������ִ�е���������������������ɺ󷵻ء�
#define stoptimeshort 40  //���滻���� ����40ȥ�滻������ֵı�ʶ��stoptimeshort
#define stoptimelong 100
int main()
{
    int i;//����һ������i
	int sum=0;
	/*for (i=0;i<100 ;i++ )
	{
		printf("\n������䱻ִ��100��");
	}
	*/
	for (i=0;i<100 ;i++ )
	{
		system("color 04");
		printf("hello\n");
		//continue;
		system("color 75");
		printf("������\n");


	}
/*	for (i=0;i<100 ;i++ )
	{
		//printf("*%d",i);//\t��\n �ո� %dǰ�� 
		printf("i=%d\n",i);
	}*/
	/*for (i=0;i<=100 ;i++ )
	{
		sum=sum+i;
		printf("sum=%d\n",sum);//sum=1
	}*/
/*	for (i=1;i<=100 ;i++ )
	{
		printf("sum=%d+%d\n",sum,i); //sum=1+2
		sum=sum+i;
	}
*/
/*	for (i=1;i<=100 ;i++ )
	{
		printf("��һ��sum=%d\ti=%d\t ����sum=",sum,i);
		sum=sum+i;
		printf("%d\n",sum);
	}*/
	sum=0;
	for (i=1;i<=100 ;i++ )
	{
		printf("sum=");
		for (int j=1;j<i ;j++ )
		{
			system("color 04");
			printf("%d+",j);
			//system("color 07");
			
		}
		sum=sum+i;
		system("color 07");
		printf("%d=%d\n",i,sum);
	}
	/*for (i=0;i<500 ;i++ )
	{
		Sleep(200);
		printf("%d*",i);//printf("%d",i);
	}
*/
	/*for (i=0;i<300 ;i++ )
	{
		system("cls");
		printf("\a%d\n",i);
		Sleep(1000);//Sleep(i*10)
		
		
	}
*/
	
	
	return 0;
}