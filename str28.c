#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100]="How are you?", result[100];
    char c;
    int len=strlen(str);


    //printf("Enter a string: ");
    //fgets(str, 100, stdin);
    printf("Enter a character to add after that character: ");
    scanf(" %c", &c);
    printf("Entered character : %c", c);
    /*
    for (int i=0, j=0; i<len; i++){
        if (str[i]!='o'){
            result[j]=str[i];
            j++;
        } else if (str[i]=='o'){
            strcat(result, c);
            j+=2, len++;
        }
    }
    */
    return 0;
}