#include <stdio.h>

#define LINE_WIDTH 20
#define MAX_WORD_LEN 28   /* less then line width */

/* Author: Scopych
   Date:   21.05.2018
   Purpose: the program folds long input lines 
      into two or more shorter lines after the last
      non-blank character that occurs befor the
      n-th column of input.K&R2 ex.1-22.
*/

int getWord (int head); /* extract word from input */

char word[MAX_WORD_LEN];
int ch;
 
int main(void) {
   extern int ch;
   int lindex = 0;/* line index (position) */
   int lenWord = 0;/* lenght of a word */
   extern char word[];/* holds current word*/

   while ((ch = getchar()) != EOF) {
      if (ch == ' ' || ch == '\t' || ch == '\n') {
         putchar(ch);
         lindex++;
      } else {
         lenWord = getWord(ch);
         lindex += lenWord;
         if (lindex < LINE_WIDTH - 2) {
            printf("%s", word);
            putchar(ch);
            lindex++;
         } else {
            putchar('\n');
            putchar('\0');
            lindex = lenWord;
            lenWord = 0;
            printf("%s", word);
            putchar(ch);
         }
      }
   }
   return 0;
}

int getWord (int head) {
   extern char word[];
   extern int ch;
   int i, indx;
   
   for (indx = 0; indx <= 100; ++indx) {  /* before use a word, assign all array to 0-s.*/
      word[indx] = '\0';
   }
   word[0] = head;
   for (i = 1; i < MAX_WORD_LEN - 1
      && (ch = getchar()) != ' ' && ch != '\t'
      && ch != '\n'; ++i) {
      word[i] = ch;
   }
   return i;
}


