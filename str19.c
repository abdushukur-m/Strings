#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

int main()
{   
    char str1[10];
    bool isfloat=false;

    printf("Enter a number: ");
    fgets(str1, 10, stdin);

    for (int i = 0; i < strlen(str1); i++){
        if (str1[i]=='.'){
            isfloat=true;
        }
    }
    if(isfloat){
        printf("float");
    }else{
        printf("integer");
    } 
    return 0;
}