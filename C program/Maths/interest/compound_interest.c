/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program. */
#include <stdio.h>
/* A header file that contains functions to take input from the user and display output to the user. */
// #include <conio.h>
#include <math.h>

/* `void main()` is the main function of the program. It is the function that is called when the
program is run. */
void main()
{
    float p,r,t,ci;

    // clrscr(); for Turbo C++

    printf("Enter principal:: ");
    scanf("%f",&p);
    printf("Enter rate:: ");
    scanf("%f",&r);
    printf("Enter time:: ");
    scanf("%f",&t);

    ci=p*pow((1+r/100),t)-p;

    printf("THe compound interest is :: %.2f", ci);
    // getch(); for Turbo C++
}