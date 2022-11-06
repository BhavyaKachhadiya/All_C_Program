// write a c program to enter number and findf table of that number

#include <stdio.h>

void main()
{
    int a, i;
    printf("Enter a number:: \t");
    scanf("%d", &a);

    for(i=1;i<=10;i++)
    {
        printf("The number is %d X %d = %d\n", a,i,a*i);
    }
}