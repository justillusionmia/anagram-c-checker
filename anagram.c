#include <stdio.h>
#include <stdlib.h>

int main() {
   char word[30];
   char next[30];
   int i = 0;
   int k = 0;
   int lengtha;
   int lengthb;
   int a = 0; 
   int b = 0;
   int ana = 1;
   int found = 0;

   printf("Enter a word: ");
   scanf("%s", word);
   getchar();

   printf("Enter another word: ");
   scanf("%s", next);
   getchar();

   while (word[i] != '\0') {
       i++;
   }
   while (next[k] != '\0') {
       k++;
   }

   lengtha = i;
   lengthb = k;

   printf("The length of the first string is %d", lengtha);
   printf("\nThe length of the second string is %d", lengthb);

   if(lengtha == lengthb) {
       for(a = 0; a < lengtha; a++) {
           found = 0;
           for(b = 0; b < lengthb; b++) {
               if(word[a] == next[b]) {
                   next[b] = '\0';
                   found = 1;
                   break;
               }
           }
           if(found == 0) {
           ana = 0;
           break;
       }
       }
   }
   else {
       printf("\nThe strings entered are not anagrams");
       return 0;
   }

   if(ana == 1) {
       printf("\nThe strings entered are anagrams"); 
   }
   else {
       printf("\nThe strings entered are NOT anagrams");
   }

   return 0;
}
