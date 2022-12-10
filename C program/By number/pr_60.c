#include <stdio.h>

void main ()
{
    int a;

    printf("Enter the Number::\t");
    scanf("%d",&a);

    if(a%5==0)
    {
        printf("%d number can be divisible by 5",a);
    }

    else if(a%11==0)
    {
        printf("%d number can be divisible by 11",a);
    }
    else 
    {
        printf("%d number can not be divisible by 11 or 5",a);
    }
    
}