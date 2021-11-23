#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int year1;
    int year2;
    int age;

    printf("Enter a year\n");
    scanf("%d", &year1);

    printf("Enter another year\n");
    scanf("%d", &year2);

    age=year2-year1;
    printf("%d \n", age);
    age=abs(age);
    printf("%d \n", age);

    return 0;
}