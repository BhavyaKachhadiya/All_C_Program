// write a c program to enter number and print 1 to n number 

#include <stdio.h>

void main()
{
    int i,n;
    
    printf("Enter the Number::\t");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("The number is %d\n",i);
    }
}