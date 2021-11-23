#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    printf("Value \t Character \t Address\n "); 
    for (int i = 32; i <= 126; i++)
    {
    int *address=i;
        printf("%d \t %c \t %p\n", i, i, address);
    }

    return 0;
}