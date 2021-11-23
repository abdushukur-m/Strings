#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main() {
    srand(time(0));

    char source[]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$^&*()_+"};
    char myinput[12];
    char mypassword[12];

    for (int i = 0; i < 11; i++)
    {
        mypassword[i]=source[rand()%strlen(source)];
    }
    printf("\nPassword: %s", mypassword);

    printf("\n\nEnter password: ");
    scanf("%12s", myinput);

    if(strcmp(myinput, mypassword) == 0){
        printf("\nsuccess!!!");
    } else {
        printf("\nfail???");
    }
    

    return 0;
}