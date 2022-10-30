// write a program to the positive and negative

#include <stdio.h>
// #include <conio.h>

void main ()
{
    int num;
    // clrscr();
    printf("Enter the number ::");
    scanf("%d", &num);

    if(num>0)
    {
        printf("This number is Positive");
    }
    else 
    {
        printf("This number is Negative");
    }

    printf("\nNumber is %d", num);
    // getch();
}