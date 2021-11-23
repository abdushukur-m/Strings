#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int tuna;
    printf("Enter a character: ");
    scanf("%c", &tuna);

    if (isalpha(tuna)){

        if (islower(tuna)){
            printf("%c is an Lowercase letter", tuna);
        }else
        {
            printf("%c is an Uppercase letter", tuna);
        }
        

    } else
    {
        if (isdigit(tuna)){
            printf("%c is a number", tuna);
        }else
        {
            printf("%c is a symbol", tuna);
        }
        
    }
    
    return 0;
}