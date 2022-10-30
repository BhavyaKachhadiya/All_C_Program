/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program before compiling. */
#include <stdio.h>
// #include <conio.h>
#include <math.h>

/* `void main()` is the entry point of the program. */
void main()
{
    /* Declaring four variables of type `float`. */
    float P,R,T,ci;
    // clrscr();

    /* Asking the user to enter the amount and storing it in the variable `P`. */
    printf("Enter the Principle :: ");
    scanf("%f",&P);
    /* Asking the user to enter the rate and storing it in the variable `R`. */
    printf("Enter the rate :: ");
    scanf("%f",&R);
    /* Asking the user to enter the time and storing it in the variable `T`. */
    printf("Enter the time :: ");
    scanf("%f",&T);

    /* Calculating the simple interest. */
    ci = P*pow((1+R/100),T); 
    /* Printing the value of the variable `ci` with two decimal places. */
    printf("The simple interest is :: %.2f",ci);
    // getch();
}