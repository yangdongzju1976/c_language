#include <stdio.h>
int max(int ,int);//�������������ֵ
int min(int ,int );//ռ��
void print_star(); //�޷���ֵ����
 main() //main����������void���ͣ�����Ĭ��Ϊ����
{
	int x,y,z;
	print_star();
	x=get_value();
	y=get_value();
	z=max(x,y);
	print_star()
	printf("!���ֵΪ��%d\n\n",z);
	
	//return 0;
}

int get_value(void)
{ 
	int a;
	printf("���������ֵ:\n");
	scanf("%d",&a);
	return a;
}
int max(int a,int b)
{
	if (a>b)
		return a;
	else
		return b;
}

void print_star()
{
	printf("****************\n");
}