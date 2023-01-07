#include <stdio.h>

int main()
{
    int i=1, n, sum=0;

    /* Input range to find sum of odd numbers */
    printf("Enter upper limit: ");
    scanf("%d", &n);

    /* Find the sum of all odd number */
    while(i<=n)
    {
        sum += i;
        i+=2;
    }

    printf("Sum of all odd number between 1 to %d = %d", n, sum);

}