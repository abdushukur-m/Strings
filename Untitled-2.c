#include <stdio.h>
#include <conio.h>

int main()
{
    char *str, nwch;
    int ind, pos, nw = 0;
    printf("\nEnter string: ");
    gets(str);
    printf("\nEnter character you want to insert: ");
    nwch = getchar();
    printf("\nEnter position where you want to insert new character(start with 0): ");
    scanf("%d", &pos);
    for (ind = 0; str[ind] != '\0'; ind++) //sorry got a typo here XD
    {
        if (ind != pos)
        {
            str[nw] = str[ind];
            nw++;
        }
        else if (ind == pos)
        {
            str[nw] = nwch;
            nw++;
        }
    }
    printf("\n%s", str);
    getch();
    return 0;

    return 0;
}
