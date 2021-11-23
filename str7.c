#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char random[] = "Hello!";
    printf("Length of 'random[] = Hello!': %d", strlen(random));
    printf("\nValue\t Character\n");
    printf("%d\t %c\n", random[0], random[0]);
    printf("%d\t %c\n", random[strlen(random)-1], random[strlen(random)-1]);    
    return 0;
}