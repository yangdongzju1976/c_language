#include "stdio.h"
#include "file1.cpp"
#include "file2.cpp"

int globle;  //ȫ�ֱ�������
extern int x; //ȫ�ֱ�������

main()
{ 
	int local;
	globle=10;

	printf("\nmain()�����е� globle  =%d",globle);//���main()
	globle++;//�Լ�

	printf("\nmain()�����е�    x    =%d",x);
	x++;//�Լ�

	f1(); //���ú���f1()
	f2();//���ú���f2()
}