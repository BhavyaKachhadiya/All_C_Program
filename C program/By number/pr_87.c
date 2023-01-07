#include <stdio.h>

int main()
{
    int i=2, n, sum=0;

    /* Input upper limit from user */
    printf("Enter upper limit: ");
    scanf("%d", &n);

    while( i<=n)
    {
        /* Add current even number to sum */
        sum += i;
        i+=2;
    }-

    printf("Sum of all even number between 1 to %d = %d", n, sum);

}