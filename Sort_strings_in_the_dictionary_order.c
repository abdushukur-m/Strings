#include <stdio.h>
#include <string.h>

int main() {
   char str[5][50], temp[50];
   printf("Enter 5 words: ");

   // Getting strings input
   for (int i = 0; i < 5; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }

   // storing strings in the lexicographical order
   for (int i = 1; i < 5; ++i) {
      for (int j = 0; j < 4; ++j) {
         // swapping strings if they are not in the lexicographical order
         if (strcmp(str[j], str[j+1]) > 0) {
            strcpy(temp, str[j]);
            strcpy(str[j], str[j+1]);
            strcpy(str[j+1], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 5; ++i) {
      fputs(str[i], stdout);
   }
   return 0;
}