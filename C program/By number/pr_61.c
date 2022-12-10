#include <stdio.h>

void main()
{
    int y;

    printf("Enter the year::\t");
    scanf("%d", &y);

    if(y%4==0)
    {
        printf("%d is Year is a Leap year",y);
    }
    else
    {
        printf("%d is Year is not a Leap year",y);
    }
}