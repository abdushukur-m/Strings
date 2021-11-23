#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char names[5][20], temp[20];

    printf("Enter 5 names: \n");
    
    for (int i = 0; i < 5; i++)
    {
        fgets(names[i], 20, stdin);
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        fputs(names[i], stdout);
    }

    return 0;
}