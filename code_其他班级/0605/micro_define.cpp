#include "stdio.h"
#define M  (y+3) //M ����
#define OK 1235
int main()
{								//3=((3))
	int s,y;
	printf("����y��ֵ��\ny= ");
	scanf("%d",&y);
	s=12*M;  //3*��y)+�������M ����(y*y+3*y)�������е����� ��3*(y*y+3*y)������(y*y+3*y)������(y*y+3*y)
	printf("s=%d\n",s);
	printf("\nOK   M\n");//���ַ����ﲻ���������
	printf("\nOK=%d\n",OK);//�ַ��������OK�滻��100
	return 0;
}
