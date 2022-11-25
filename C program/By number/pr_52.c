// 0    1   1   2   3   5   8   13  ... .

#include <stdio.h>
void main() {

  int i, n1;

  // initialize first and second terms
  int n2 = 0, n3 = 1;

  // initialize the next term (3rd term)
  int nextTerm = n2 + n3;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n1);

  // print the first two terms n2 and n3
  printf("Fibonacci Series: %d, %d, ", n2, n3);

  // print 3rd to nth terms
  for (i = 3; i <= n1; ++i) {
    printf("%d ", nextTerm);
    n2 = n3;
    n3 = nextTerm;
    nextTerm = n2 + n3;
  }
}

// Coming Soon