#include <stdio.h>

void main ()
{
    int a,i,sum=0,b;
    
    printf("Enter the first number::\t");
    scanf("%d",&a);

    printf("Enter the second number::\t");
    scanf("%d",&b);

    for (i=a; i<=b;i++)
    {
        sum+=i;
    }
    printf("Sum of %d to %d = %d\n",a,b,sum); 
}