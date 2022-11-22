#include <stdio.h>

void main()
{
    int i,num;
    printf("Enter the Number to print 1 to n even number::\t");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    {
        if (i%2==0)
        {
            printf("%d\t",i);
        }
    }
}