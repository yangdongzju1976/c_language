#include "stdio.h"
int main()
{ 
void  increment(void);  //��������
   increment();			//���ε���increment����
   increment();
   increment();
}

void  increment(void)
{ 
	//int x=0;
	static int x=0;
   x++;
   printf("%d\n",x);
}
