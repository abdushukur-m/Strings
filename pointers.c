#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int A[5]={2, 4, 6, 8, 10};
    int* p;
    p = A;

    printf("%d\n", A);
    printf("%d\n", *A);
    printf("%d\n", &A);
    printf("%d\n", p);
    printf("%d\n", *p); 
    printf("%d\n", A[0]);

    return 0;
}