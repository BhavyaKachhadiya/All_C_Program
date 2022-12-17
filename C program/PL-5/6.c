#include <stdio.h>
void main() {
   int i, j;
   char alphabet = 'A';

   for (i = 1; i <= ('E' - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }

}
