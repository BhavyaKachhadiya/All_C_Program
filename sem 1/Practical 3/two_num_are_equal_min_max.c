/* Including the standard input output library. */
#include <stdio.h>
// #include <conio.h>

/* `void main()` is a function that returns nothing. */
void main()
{    
    /* Declaring two variables of type integer. */
    int num1,num2;
    // clrscr();
    /* Asking the user to enter a number and then storing it in the variable `num1`. */
    printf("Enter number 1 :: ");
    scanf("%d",&num1);
    /* Asking the user to enter a number and then storing it in the variable `num2`. */
    printf("Enter number 2 :: ");
    scanf("%d",&num2);

    /* Checking if the two numbers are equal. */
    if (num1==num2)
    {
        /* Printing the string `This number is equal` and then a new line. */
        printf("This number is equal\n");
    }
    /* `else` is a keyword that is used to execute a block of code if the condition is not satisfied. */
    else
    {
        /* Checking if the value of `num1` is greater than the value of `num2`. */
        if (num1>num2)
        {
            /* Printing the string `The number 1 is maximum..` and then a new line. */
            printf("The number 1 is maximum..");
        }
        /* `else` is a keyword that is used to execute a block of code if the condition is not
        satisfied. */
        else
        {
            /* Printing the string `THe number 2 is maximum..` and then a new line. */
            printf("THe number 2 is maximum..");
        }
    }
    /* Printing the value of `num1` and `num2` in the string `The number is :: %d\n`. */
    printf("The number is :: %d\n",num1,num2);

    // getch();
}
