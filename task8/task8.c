#include <stdio.h>
#include <stdlib.h>


int main() {
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 123;
    free(ptr);
    *ptr = 456;

    return 0;
}