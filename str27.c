#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n1=8, n2=3, j=0;
    char str1[100]="Hello World", str2[100]="My name's Tom", str3[100];

    printf("%d\n", strlen(str2));

    for (int i = 0; i <= n1+n2; i++)
    {
        if (i<n1){
            str3[i]=str1[i];
        }
        else 
        {
            str3[i]=str2[strlen(str2)-n2+j];
            j++;
        }
        
    }
    printf("%s\n", str3);
    
    
    return 0;
}