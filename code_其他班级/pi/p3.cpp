#include <stdio.h>
long b=0, c=28, d, e, f[29];
main()
{  
	int i,j,k;
	i=0;
	while(b-c!=0)
	{    
		f[b]=20;   
		b++;    
	} 
	
	
	
	printf("\nb=%d\tc=%d\n",b,c);
	while(c!=0)
	{    
		b=c;    //b=c=2800
		d=f[b]*10;  //d=f[2800]=0
		printf("f[%d]=%d\td=%d ",b,f[b],d);//b=2800,f[2800]=0,d=0;
		//break;
		f[b]=d%(b*2-1); 
		//printf("\nd=%d\tb=%d\tf[%d]=%d",d,b,b,f[b]);
		//d=0     b=2800  f[2800]=0
		//printf("\nf[%d]=%d",b,f[b]);//f[b]=2000  
		d=d/(b*2-1); //d=0     b=2800  f[2800]=0
		//printf("\nb=%d\td=%d",b,d);//
		//break;
		
		--b;   //2799 
		//printf("\nf[%d]=%d",b,f[b]);
		//break;
		//b=2799,f[2799]=2000
		i=1;
		i++;
		while(b!=0)
		{     
			
			d=d*b+f[b]*10; 
			
			
			printf("\ni=%d\td=%d",i,d);
			//d=20000000
			//break;
			f[b]=d%(b*2-1);//为什么要取余数 
			//printf("\tf[%d]=%d",b,f[b]);
			d=d/(b*2-1); 
			/*if (i==10)
			{
			
			printf("\td=%d",d);
			}
			*/
			--b; 
			
		}  
		
		c-=14;    
		printf("\ne=%d\t%.4d",e,e+d/10);   
		
		e=d%10;  
		printf("\ne=%d",e);
		
		
	} 
	//printf("\ni=%d",i);
}

