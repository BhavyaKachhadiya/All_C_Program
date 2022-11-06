// Write a c program to enter number and find  the sum 1 to n 

#include <stdio.h>

void main()
{
    int i,n,sum=0;

    printf("Enter the number:\t");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum+=i;
    }

    printf("The sum 1 to %d is: %d",n,sum);
}