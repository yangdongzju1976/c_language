#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i,j;
	int x,y;
	x=1,y=10;
	for (x=1;x<10 ;x++ )
	{
		system("cls");
		for (i=1;i<=x ;i++ )
		{
			printf("\n");
		}
		for (j=1;j<=y ;j++ )
		{
			printf(" ");
		}
		printf("O");
	}
	printf("\n");
	return 0;
}
