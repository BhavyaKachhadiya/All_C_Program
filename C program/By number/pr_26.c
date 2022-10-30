#include <stdio.h>
// #include <conio.h>  

void main()
{
    int num1,num2,c;
    // clrscr();

    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);

    printf("1 Addition\n");
    printf("2 Subraction\n");
    printf("3 Divsion\n");
    printf("4 Multiplication\n");
    printf("5 Modulus\n");
    printf("Enter your choice :: ");
    scanf("%d",&c);

    if (c == 1)
    {
        printf("Your Addition is :: %d",num1+num2);
    }
    else if (c == 2)
    {
        printf("Your Subraction is :: %d",num1-num2);
    }
    else if (c == 3)
    {
        printf("Your Division is :: %d",num1/num2);
    }
    else if (c == 4)
    {
        printf("Your Multiplication is :: %d",num1*num2);
    }
    else if (c == 5)
    {
        printf("Your Modulus is :: %d",num1%num2);
    }
    else 
    {
        printf("Invalid Input");
    }
    // getch();
}