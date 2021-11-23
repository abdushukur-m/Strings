#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int tuna = 19;

    
    int * pTuna = &tuna;

    printf("Address \t\t Name \t Value \n");
    printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);
    printf("%p \t %s \t %p \n", &pTuna, "pTuna", pTuna);

    printf("\n*pTuna: %d \n", *pTuna);
    *pTuna=70;
    printf("\n*pTuna: %d \n", *pTuna);

    return 0;
}