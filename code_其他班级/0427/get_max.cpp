#include <stdio.h>
//����ʮ��������������������Сֵ
int main()
{
	int i,j,t,number[10],max,min;//���������
	printf("\n�������������ĸ���Ԫ�أ���10����number[i]=\n");
	
	for (i=0;i<10 ;i++ )
	{
		scanf("%d",&number[i]);
	}

	max=number[0];
	min=number[0];
	//����Ƚ�
	for (i=1;i<10 ;i++ )
	{
		if (max<number[i]) //���ֵ
		{
			max=number[i];
			j=i;
		}

		if (min>number[i]) //��Сֵ
		{
			min=number[i];
			t=i;
		}

	}
	printf("\n");
	for (i=0;i<10 ;i++ )
	{
		printf("number[%d]=%d\t",i,number[i]);
	}


	printf("���ֵ�ǣ�number[%d]=%d",j,max);
	printf("��Сֵ�ǣ�number[%d]=%d",t,min);

	printf("\n");
	
	return 0;
}
