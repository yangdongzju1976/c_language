#include <stdio.h> 
int print_message(  ) ;
int printstar(  ) 
{	
	print_message(  ) ;
	printf("***********************\n" );
}  

int print_message(  ) 
{	
	
	printf("   How_do_you_do!\n");
	
}                      


int main(  ) 
{
  printstar(  );
  print_message(  );
  printstar(  );
} 

