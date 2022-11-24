#include <stdio.h>

void main ()
{
    int n,r,arm=0,c;

    printf("Enter the Number::\t");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        r = n%10;
        arm = arm +(r*r*r);
        n=n/10;
    }
        if(c==arm)
        {
            printf("Armstrong");
        }
        else
        {
            printf("Not Armstrong");
        }
    
}