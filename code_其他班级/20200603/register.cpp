#include <stdio.h>
int main(  ) 
{ 
	long  fac(long); //����һ������fac,long :������
	long  i, n; 

	printf("����n��ֵ��\nn=");
	scanf("%ld",&n);

	for(i=1; i<=n; i++) 
		printf("%ld != %ld\n", i, fac(i));// ld:long decimcal ������
} 

long  fac(long n) 
{ 
	register  int  i, f=1; //�Ĵ��������� �Ĵ�����CPU�Ĵ洢�����ٶȿ죬�ռ�С��
	
	for(i=1; i<=n; i++) 
		f=f * i;

	return(f);  
  
  }