#include <stdio.h>

//* just for experimentation.  

int main() 
   char c, c1;
   while (1) {
      if ((c = getchar()) == '/' &&
         (c1 = getchar()) == '*') {
         putchar(c);
         putchar(c1);
      }
   }
   return 0;
}
