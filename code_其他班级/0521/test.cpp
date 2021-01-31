#include <stdio.h>
void main(  ) 
{int  a=2,b=3; 
 printf (¡°a=%d, b=%d\ n¡±,a, b); 
 printf(¡°&a=%x,&b=%x\n¡± ,&a,&b); 
 add(a,b); 
 printf(¡°a=%d,b=%d\n¡±, a,b); 
 printf(¡°&a=%x,&b=%x\n¡±, &a,&b); 
} 
add(int x,int y)  
{x=x+8; y=y+12; 
 printf(¡°x=%d,y=%d\ n¡±,x,y); 
 printf(¡°&x=%x,&y=%x\n¡±,&x,&y); 
}  
