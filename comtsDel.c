#include <stdio.h>

/* Author: Scopych
   Date:   11.06.2018
   Purpose: remove all comments from a C 
      program.
*/

int isComment (void);
int isEndComment (void);
void toQuot (void);

int c;

int main(void) {
   extern int c;

   while ((c = getchar()) != EOF) {
       if (c == '"' || c == '\''){
	   toQuot();
       } else if (isComment()) {
             while ( !(isEndComment())) {
             putchar(' ');
       } 
             printf("    ");
      } else {
        putchar(c);
      }
   }
   return 0;
}

int isComment (void) {
   extern int c;

   if (c == '/') {
      c = getchar();
      if (c == '*') {
         return 1;
      } else {
         putchar('/');
      }
   }
   return 0;
}

int isEndComment (void) {
   extern int c;

   c = getchar();
   if (c == '*') {
      c = getchar();
      if (c == '/') {
         return 1;
      }
   }
   return 0;
}

void toQuot (void){
    extern int c;
    do {
        putchar(c);
	c = getchar();
    } while (c == '"');
    putchar(c);
}
