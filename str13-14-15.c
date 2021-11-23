#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{   
    char str[]="_ab123$#*GiK+45";
    int length=strlen(str), lowercaseNum=0, uppercaseNum=0, digitNum=0, symbolNum=0;

    for (int i=0; i<length; i++){
        if (isalnum(str[i])){
            if (isdigit(str[i])){
                digitNum++;
            }else if(islower(str[i])){
                lowercaseNum++;
            }else{
                uppercaseNum++;
            }
        }else{
            symbolNum++;
        }
    }
    printf("%s\n", str);
    printf("# of lower case letters: %d\n", lowercaseNum);
    printf("# of upper case letters: %d\n", uppercaseNum);
    printf("# of digits: %d\n", digitNum);
    printf("# of symbols: %d", symbolNum);
    
    
    return 0;
}