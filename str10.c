#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char random[20];
    gets(random);
    puts(random);
    int len=strlen(random);

    for (int i = len; i >= 0; i--)
    {
        printf("%c ", random[i]);
    }
        
    return 0;
}