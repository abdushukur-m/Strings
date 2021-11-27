#include <stdio.h>
#include <conio.h>

int main()
{
    char *str;
    int ind, pos, nw = 0;
    printf("\nEnter string: ");
    gets(str);
    printf("Enter position of character you want to delete(start with 0): ");
    scanf("%d", &pos);
    for (ind = 0; str[ind] != '\0'; ind++)
    {
        if (ind != pos)
        {
            str[nw] = str[ind];
            nw++;
        }
    }
    str[nw - 1] = '\0';
    printf("%s", str);
    getch();
    return 0;
}
