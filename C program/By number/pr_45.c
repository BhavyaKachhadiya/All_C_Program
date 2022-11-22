#include <stdio.h>

void main()
{
    int i,num,sum=0;
    printf("Enter the Number to print 1 to n odd number::\t");
    scanf("%d",&num);

    for (i=1;i<num;i++)
    {
        if (i%2==1)
        {
            printf("%d\t",i);
            sum = sum+i;
        }
    }
    printf("\nSum of 1 to %d number of odd numbers is %d\n",i,sum);
}