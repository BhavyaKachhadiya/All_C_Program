/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program before compiling. */
#include <stdio.h>
// #include <conio.h>

/* `void main()` is the entry point of the program. */
void main()
{
    /* Declaring four variables of type `float`. */
    float amt,rate,time,si;
    // clrscr();

    /* Asking the user to enter the amount and storing it in the variable `amt`. */
    printf("Enter the amt :: ");
    scanf("%f",&amt);
    /* Asking the user to enter the rate and storing it in the variable `rate`. */
    printf("Enter the rate :: ");
    scanf("%f",&rate);
    /* Asking the user to enter the time and storing it in the variable `time`. */
    printf("Enter the time :: ");
    scanf("%f",&time);

    /* Calculating the simple interest. */
    si = amt*rate*time/100;
    /* Printing the value of the variable `si` with two decimal places. */
    printf("The simple interest is :: %.2f",si);
    // getch();
}