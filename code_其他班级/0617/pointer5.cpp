#include <stdio.h>
int main( )
{ 
	char   a[ ]="I am boy.",b[20];
	char   *p1=a+8,*p2=b;
	int i;
	for(   ; *p1!='I' ; p1--,p2++) 
	{
		*p2=*p1;
	}
	*p2='I';
	p2++;
	*p2='\0';
	printf("数组 a 是: %s\n", a  );
	printf("数组 b 是: %s\n", b  );
}
