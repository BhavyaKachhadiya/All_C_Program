// write a program to check number is zero and check number is positive or negative */
#include <stdio.h>
// #include <conio.h>

void main()

{
    int Num;
    // clrscr():

    printf ("Enter the Number :: ");
    scanf("%d", &Num);

    if (Num==0)
    {
        printf ("This number is zero ");
    }
    else
    {
        if (Num>0)
        {
            printf("This number is positive ");
        }
        else
        {
            printf ("This number is negative ");
        }
    }
}
