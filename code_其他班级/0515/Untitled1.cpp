#include <stdio.h>
void main()
{  char str[80];
    int temp,i,j;
    printf("Enter a string:\n");
    scanf("%s",str);
    for(i=0,j=strlen(str)-1;i<j;i++,j--)
    {  temp=str[i];
	   str[i]=str[j];                      /*交换i,j两个元素*/
	   str[j]=temp;					
    }
    printf("\nReversed string:\n%s\n",str);
}
