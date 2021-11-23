#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

int main()
{   
    char str1[]="234589";
    int strint=atoi(str1), sum=0;
    printf("%s\n\n", str1);

    for (int i=0; i<strlen(str1); i++) printf("%c", str1[i]);
    printf("\n");
    for (int i=strlen(str1)-1; i>=0; i--) printf("%c", str1[i]);

    for (int i=0; i<strlen(str1); i++){
        sum+=strint%10;
        strint/=10;
    }
    printf("\nSum: %d\n", sum);

    return 0;
}