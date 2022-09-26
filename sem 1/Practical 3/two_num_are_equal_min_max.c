#include <stdio.h>
// #include <conio.h>

void main()
{    
    int num1,num2;
    // clrscr();
    printf("Enter number 1 :: ");
    scanf("%d",&num1);
    printf("Enter number 2 :: ");
    scanf("%d",&num2);

    if (num1==num2)
    {
        printf("This number is equal\n");
    }
    else
    {
        if (num1>num2)
        {
            printf("THe number 1 is maximum..");
        }
        else
        {
            printf("THe number 2 is maximum..");
        }
    }
    printf("The number is :: %d\n",num1,num2);

    // getch();
}
