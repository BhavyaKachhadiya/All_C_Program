// write a program to find odd and even number

#include <stdio.h>
// #include <conio.h>

void main ()
{
    int n;
    // clrscr();

    printf("Enter the number :: ");
    scanf("%d", &n);

    if (0==n%2)
    {
        printf("This number is even.\n");
    }
    else 
    {
        printf("This number is odd.\n");
    }
}