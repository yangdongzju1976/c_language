#include<stdio.h>
#define N 19
int main(void) {
    int arr[N];
    int i;
    for (i = 0; i < N; i++)
    {
        arr[i] = i + 1;
        printf("arr[%d]=%d\t", i, arr[i]);
        if (0 == (i+1)%3)
        {
            printf("\n");
        }
    }  
	printf("\n\n");
    return 0;
}