#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char names[50], word[50], ch;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(names, sizeof(names), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i=0; names[i]!=0; i++){
        if (ch == names[i]){
            count++;
        }
    }
    printf("Enter a word to find its frequency: ");
    fgets(word, sizeof(word), stdin);

    for (int i=0; names[i]!=0; i++){
        if (word == names[i]){
            count++;
        }
    }



    printf("Frequency of %c = %d", ch, count);

    return 0;
}