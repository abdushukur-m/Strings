#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[] = "taco";
    char input[15];

    printf("Password: ");
    scanf("%s", input);
    if (strcmp(password, input) == 0)
    {
        puts("Password accepted");
    }
    else
    {
        puts("Password denied");
    }

    return 0;
}