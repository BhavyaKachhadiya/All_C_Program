// prime first 10 number

#include <stdio.h>

void main()
{
    int i, j,end=30, isPrime; // isPrime is used as flag variable


    printf("First prime numbers from 1 to 10 are\n");

    /* Find all Prime numbers between 1 to end */
    for(i=2; i<=end; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1; 

        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            printf("%d ", i);
        }
    }
}
// Coming Soon