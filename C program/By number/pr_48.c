#include <stdio.h>

void main ()
{
    int i;

    for (i=100;i<200;i++)
    {
        if (i%7==0)
        {
            printf("%d\t",i);
        }
    }
}