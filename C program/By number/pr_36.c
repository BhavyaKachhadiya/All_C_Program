// Write a c program to enter number and ckeck number is prime or not prime.

#include <stdio.h>

void main()
{
    int a,b,p=0;

    printf("Enter the any number::\t");
    scanf("%d",&a);

      for (b = 1; b <= a; b++) {
      if (a % b == 0) {
         p++;
      }
  }

    if(p==2)
    {
    printf("%d is prime Number",a);
    }
    else
    {
    printf("%d is composite Number",a);
    }

}