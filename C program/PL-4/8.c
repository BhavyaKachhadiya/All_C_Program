#include <stdio.h>

void main()
{
    int i, end;

    printf("Print all natural numbers from 1 to n : ");
    scanf("%d", &end);

    i=1;
    while(i<=end)
    {
        printf("%d\n", i);
        i++;
    }

}