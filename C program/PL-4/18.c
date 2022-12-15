#include <stdio.h>

void main()
{
    int n, lastDigit,first;

    printf("Enter any number: ");
    scanf("%d", &n);

    lastDigit = n % 10;
    first = n;


    while(first >= 10)
    {
        first = first / 10;
    }

    printf("First digit = %d\n", first);
    printf("Last digit = %d", lastDigit);

}