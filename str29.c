#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100] = "c1c2c3c4c5c6c7c8c9c0", str2[100]="c00";
    char pstr[100] = "";
    int len = strlen(str);

    for (int i = 0, j = 0; i < len; i++)
    {
        if (str[i] == 'c')
        {
            strncat(pstr, str2, 3);
        }
        else if (str[i] == 'C')
        {
            strncat(pstr, str2, 3);
        }
        else
        {
            strncat(pstr, &str[i], 1);
        }
    }
    printf("\n%s\n", pstr);

    return 0;
}