#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char src[50];
    char dest[50];

    strcpy(src, "Tom Hanks");
    strcpy(dest, "Hello ");
    strncat(dest, src, 3);
    printf("%s\n", dest);

    strcat(dest, src);
    printf("%s\n", dest);


    return 0;
}