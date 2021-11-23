#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("Value \t Character \n");
    printf("%d \t %c \n", c-1, c-1);
    printf("%d \t %c \n", c, c);
    printf("%d \t %c \n", c+1, c+1);

    
    return 0;
}
