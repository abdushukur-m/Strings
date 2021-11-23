#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int oSize, nSize;
    char oStr[100], nStr[100];
    char* ptr=nStr;

    printf("Enter length of a string: ");
    scanf("%d", &oSize);
    printf("\nEnter string: ");
    scanf("%s", &oStr);

    nSize=strlen(oStr);
    printf("\nNew size of the string: %d", nSize);

    for (int i = 0; i < oSize; i++)
    {   
        nStr[i]=oStr[nSize-oSize+i];
    }
    printf("\n%s", nStr);



    return 0;
}