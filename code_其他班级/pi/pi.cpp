#include <stdio.h>

int main(int argc, char *argv[])
{
	int i,j,k;
	 double pi,t;
	t=2.0/3.0;
	pi=2.0;
		for (i=3,j=2;i<100 ;i+=2,j++ )
		{
		pi=pi+t;
		t=t*j/(i+2);
		}
	printf("\npi=%e\n",pi);
	return 0;
}
