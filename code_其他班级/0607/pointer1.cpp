#include <stdio.h>

int main()
{
	int i,*p;
	p=&i;
	i=5;
	printf("\n����i=%d\n",*p);//*p==i i��ֵ  ͨ��ָ��������ʱ���
    printf("\n����i�ĵ�ַp=%0x\n",p);//i�ĵ�ַ��p��ֵ 
	printf("\nָ�����p�ĵ�ַ&p=%0x\n",&p);//p�ĵ�ַ
	
	return 0;
}
