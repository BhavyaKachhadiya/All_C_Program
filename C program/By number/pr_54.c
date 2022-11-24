#include <stdio.h>

void main ()
{
    int i,sum=0,avg;

    printf ("Sum of 1 to 50 are\n");

    for(i=1;i<=50;i++)
    {
        sum+=i;
    }
    printf ("%d\n",sum);

    avg=sum/50;
    printf ("Average of 1 to 50 is %d\n",avg);
}