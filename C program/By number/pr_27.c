// write a c program to enter 3 number and find which number is maximum

#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the number 1 ::\t");
    scanf("%d",&a);
    printf("Enter the number 2 ::\t");
    scanf("%d",&b);
    printf("Enter the number 3 ::\t");
    scanf("%d",&c);

    if (a>b)
    {
        printf("The number %d is Maximum",a);
    }
    else if(b>c)
    {
        printf("The number %d is Maximum",b);
    }
    else
    {
        printf("The number %d is Maximum",c);
    }
}