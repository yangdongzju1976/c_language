#include <stdio.h> 
//�ж�����Ƿ�Ϊ���� 
int main()
{
	int year;
	printf("\n��������ݣ�"); 
	scanf("%d",&year);
	 
         if((year%4==0 &&year%100!=0)||year%400==0)
		   printf("\n%d������",year);
	   else
		   printf("\n%d��ƽ��",year);
	

	return 0; 
}
