#include <stdio.h>
#include <stdlib.h> //�⺯��
int large(int x,int y); //��������
int main()
{
   int a[100],b[100],i,n=0,m=0,k=0;
	
	//ͨ���������������a��ֵ
   for(i=0;i<100;i++) 
	   a[i]=rand()%100;
   
   printf("\n�������a:\n");
	for(i=0;i<100;i++) 
	   printf("%d\t",a[i]);
   printf("\n");
   
	//ͨ���������������b��ֵ
   for(i=0;i<100;i++) 
	   b[i]=rand()%100;

   printf("\n");

   for(i=0;i<100;i++)
    { 
	   if(large(a[i],b[i])==1)  
		   n=n+1;
        else if(large(a[i],b[i])==0)  
					m=m+1;
               else 
				   k=k+1; 
	}
   printf("a[i]>b[i]%d times\n",n);
   printf("a[i]=b[i]%d times\n",m);
   printf("a[i]<b[i]%d times\n",k);
   if(n>k) printf("array a is larger than array b\n");
   else if(n<k) printf("array a is smaller than array b\n");
          else printf("array a is equal to array b\n");
}
large(int x,int y)
{ 
	int flag;
	if(x>y)  
		flag=1;
	else if(x<y) 
			flag=-1;
		 else 
			flag=0;
	return(flag);
}
