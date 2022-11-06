// write a c program to print ypur name n times but by decrment in loop

#include <stdio.h>

void main()
{
    int i,n;

    printf("Enter the number of times to print your name::\t");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf("My name is Bhavya\n");
    }
}