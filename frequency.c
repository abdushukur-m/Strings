#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char str[50];
    int occ[strlen(str)], j = 0, count;
    fgets(str, 50, stdin);
    for (int i = 0; i < strlen(str); i++) {occ[i] = -1;}

    for (int i = 0; i < strlen(str); i++){if (isalpha(str[i])){++j;}}
    
    int size=j, str_int[size]; j=0;
    
    for (int i = 0; i < strlen(str); i++){
        if (isalpha(str[i])){str_int[j] = (int)str[i], ++j;}}

    for (int i = 0; i < size; i++){
        count=1;
        for (int j = i+1; j < size; j++){
            if (str_int[i]==str_int[j]){
                count++;

                occ[j]=0;
            }
        }
        if (occ[i]!=0) {occ[i]=count;}
    }
    printf("%s\n", str);
    for (int i = 0; i < size; i++){if (occ[i]!=0){printf("%c (%d)\n",str_int[i], occ[i]);}}
    
    

    return 0;
}