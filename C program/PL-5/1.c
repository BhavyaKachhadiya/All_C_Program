#include <stdio.h>

int main()
{
    int i, j, n;


    for(i=1; i<=5; i++)
    {
        /* Print i number of stars */
        for(j=1; j<=i; j++)
        {
            printf("1");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}