#include <stdio.h>
int  main( )
{ 
	char   a[ ]="I am boy.",b[20];
	int i;
	for(i=0;*(a+i)!='\0';i++)
		*(b+i)=*(a+i);

	*(b+i)='\0';

	printf("字符数组 a : %s\n",a);
	printf("字符数组 b : ");
	for(i=0;b[i]!='\0';i++)
	printf("%c",b[i]);
	
	printf("\n");
}
