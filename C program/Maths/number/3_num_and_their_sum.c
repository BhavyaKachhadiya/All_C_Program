/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program. */
#include <stdio.h>
/* A header file that contains functions to take input from the user and display output to the user. */
// #include <conio.h>

/* `void main()` is the main function of the program. It is the function that is called when the
program is run. */
void main()
{
    /* Declaring four variables of type `int` (integer). */
    int a,b,c,sum;
    

    /* A function that clears the screen. */
    // clrscr(); for Turbo C++

    /* Taking input from the user. */
    printf("Enter the value a :: ");
    scanf("%d", &a);
    printf("Enter the value b :: ");
    scanf("%d", &b);
    printf("Enter the value c :: ");
    scanf("%d", &c);

    printf("\nThe value of a is :: %d\n", a);
    printf("The value of b is :: %d\n", b);
    printf("The value of c is :: %d\n\n", c);

    /* Adding the values of `a`, `b` and `c` and storing the result in the variable `sum`. */
    sum = a+b+c;
    printf("The sum of a,b,c ::  %d",sum);

    // getch(); for Turbo C++
}