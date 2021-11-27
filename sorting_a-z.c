#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[50]="Welcome to Uzbekistan", temp;
    int occ[strlen(str)];

    for (int i=1; i<strlen(str); i++){
        for (int j=0; j<strlen(str)-i; j++){
            if (str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    
    for (int i = 0; i < strlen(str); i++) {
    printf(" %c", str[i]);}
    

    return 0;
}