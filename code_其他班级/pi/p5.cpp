#include "stdio.h"  
#include "stdlib.h"  
 
#define SCALE 10000  
#define ARRINIT 2000  
 
void pi_digits(int digits) {  
    int carry = 0;  
    int arr[digits + 1];  
    for (int i = 0; i <= digits; ++i)  
        arr[i] = ARRINIT;  
    for (int i = digits; i > 0; i-= 14) {  
        int sum = 0;  
        for (int j = i; j > 0; --j) {  
        }  
        printf("%04d", carry + sum / SCALE);  
        carry = sum % SCALE;  
    }  
}  
 
    int n = argc == 2 ? atoi(argv[1]) : 100;  
    pi_digits(n);  
 
    return 0;  
} 
int main()
{ 
	int i=1000;
	pi_digits(i);
}