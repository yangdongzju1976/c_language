#include <stdio.h>
//�򵥷�����
int main()
{
	int i,j,number[10],temp,temp_number,temp_t;
	//��ѭ���Ӽ�����Ȼ���������10��Ԫ��ֵ
	//printf("\n�������������ĸ���Ԫ�أ���10����number[i]=\n");
	number[10]={12,45,3,6,789,54,67,65,66,890};
	/*for (i=0;i<10 ;i++ )
	{
		scanf("%d",&number[i]);
	}
	*/
	//����
	for (i=0;i<10 ;i++ )
	{
		temp_number=number[i];
		temp_t=i;
		
		//��ѭ�����ҳ���number[i]���������һ�����е����ֵ��
		for (j=i+1;j<10 ;j++ )
		{
			if (temp_number<number[j])
			{
				temp_number=number[j];
				temp_t=j;
			}
		}

		//���number[i]�������ֵ������number[i]��number[temp_t]
			if (temp_t!=i)
			{
				temp=number[i];
				number[i]=temp_number;
				number[temp_t]=temp;

			}
	}
	
	//�������������
	for (i=0;i<10 ;i++ )
	{
		printf("number[%d]=%d\t",i,number[i]);
	}


	printf("\n");
	
	return 0;
}
