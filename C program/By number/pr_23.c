#include <stdio.h>

void main()
{
    int A,B;

    printf("Ente the A :: ");
    scanf("%d",&A);
    printf("Ente the B :: ");
    scanf("%d",&B);

    A = A+B;
    B= A-B;
    A= A-B;
    printf("Value of A :: %d\n",A);
    printf("Value of B :: %d\n",B);
}