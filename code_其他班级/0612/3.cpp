//ָ�뷨��
#include <stdio.h>
#include <stdlib.h> //�������
#include <time.h>  //ʱ�亯��
int main()
{
	int a[10]={0,1,2};
	int *p,i;
	srand((unsigned)time(NULL));// �Ե�ǰʱ���������������
	//����ֵ
	for(i=0; i<10; i++)
		a[i]=rand()%100;
	
	printf("\n");
	
	//���ԭ����
	printf("\n  ��һ���������\n");
	
	for(i=0; i<10; i++)
		printf("  %d",*(a+i));  //������ָ�����
	
	//
	printf("  \n  �ڶ����������\n");
	for (p=a+10,i=1; i<11; i++)
		printf("  %d",*(p-11+i));//ָ�뷨 ����������ڶ��ε�������ǾͱȽ�������
	
	printf("  \n\n  �������������\n");
	for (p=a,i=0; i<10; i++)
		printf("  %d",*p++); //��*��++����ȡ��pָ���Ԫ�ص�ֵ��Ȼ��p��++��ָ����һ��Ԫ��

	printf("  \n\n  ���Ĵ��������\n");
	for (p=a-1,i=0; i<10; i++) //ע��p�ĳ�ֵ
		printf("  %d",*++p); //��++��*��p��ָ����һ��Ԫ�أ���ȡֵ��
	
	printf("  \n\n  ������������\n");
	for (p=a,i=0; i<10; i++) //ע��p�ĳ�ֵ
		printf("  %d",(*p)++); //pʼ��ָ���һ��Ԫ��,��һ��Ԫ�ر�����10��
	
	printf("  \n\n  �������������\n");
	for (p=a,i=0; i<10; i++,p++) //p��ֵ���Ϻ�ָ
		printf("  %d",(*p)++); //

	printf("  \n\n  ���ߴ��������\n");
	for (p=a+9,i=0; i<10; i++) //p��ֵ���Ϻ�ָ
		printf("  %d",*p--); //
		printf("  \n\n  �ڰ˴��������\n");
	for (p=a,i=0; i<10; i++) //p��ֵ���Ϻ�ָ
		printf("  %d",p[i]); //
	printf("\n\n");
}
