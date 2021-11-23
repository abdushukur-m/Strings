#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{   
    char str[]="LOWER";
    char STR[]="upper";

    for (int i=0; i<strlen(str); i++){
        printf("%c", tolower(str[i]));
    }        
    printf("\n\n");
    for (int i=0; i<strlen(STR); i++){
        printf("%c", toupper(STR[i]));
    }        
    return 0;
}