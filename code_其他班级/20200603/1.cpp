//ȫ�ֱ������ֲ�����
#include "stdio.h"

int x=0;  //ȫ�ֱ����������ⶨ�塣ע��ֺ�

int main()  //main��������ֵ����Ϊ��
{  
	int x=1; //�ֲ�������ֻ��main()����Ч
	//int x=2;  �����ظ�����
	void  prt(void); //��������
	void prt1(void);  //��������
	
	
	{                       //�����
		int x=3;                //������ж���ֲ�������������main()�ж���ľֲ�����
		prt1();
		prt();
		printf("\n������е� x=%d\n",x);

	}
  printf("\nmain�����е� x=%d\n",x);
 
}


void  prt(void)  //void ��  ��main�������涨�壬���Ҫ���ã�������������

{ 
   int x=5;  //�ֲ�����
   printf("\nprt�����е�  x=%d\tprt�����еľֲ�����\n",x);
}

void prt1(void)
{
	printf("\nprt1�е�  x=%d\t ȫ�ֱ���\n",x);
}