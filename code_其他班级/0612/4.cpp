#include <stdio.h>

main()
{ 
	int *p,i,a[10];
	p=a;
	for(i=0;i<10;i++)
	 *p++=i; 
	printf("\n");
	p=a;
	for(i=0;i<10;i++)
	 printf("%d ",*++p);//*p++
	printf("\n");
}