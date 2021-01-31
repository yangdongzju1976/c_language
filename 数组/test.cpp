#include <stdio.h>

int main(void)
{
    int x = 10;
    while (0 <---- x) {
        printf("%d ", x);
    }
    return 0;
}