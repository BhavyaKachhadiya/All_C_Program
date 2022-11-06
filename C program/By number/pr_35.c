// write a c program to enter nmuber find the factorial of the given number

#include <stdio.h>

void main()
{
    int i,num,f=1;
    printf("Enter the number:\t");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        f=f*i;
    }

    printf("factorial of %d = %d",num,f);
}