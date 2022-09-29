/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program. */
#include <stdio.h>
/* A header file that contains functions to take input from the user and display output to the user. */
// #include <conio.h>

/* `void main()` is the main function of the program. It is the function that is called when the
program is run. */
void main()
{
    int angleA , angleB , angleC;
    // clrscr(); for Turbo C++

    printf("Enter the Angle A : ");
    scanf("%d", &angleA);
    printf("Enter the Angle B : ");
    scanf("%d", &angleB);

    printf("value of the angle a is :: %d\n", angleA);
    printf("value of the angle b is :: %d\n", angleB);

    angleC =180 - angleA - angleB;
    printf ("value of the angle c is :: %d\n", angleC);

    // getch(); for Turbo C++
}