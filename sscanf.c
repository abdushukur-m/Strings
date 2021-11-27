#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[50], nation[50], info[100];
    int age, cellphone;
    strcpy(info, "Alex Uzbek 23 973959398");
    sscanf(info, "%s %s %d %d", name, nation, &age, &cellphone);

    printf("Name \t Nation \t Age \t Cellphone\n ");
    printf("%s \t %s \t\t %d \t %d \n", name, nation, age, cellphone);

    return 0;
}