/* Including the standard input/output library. */
#include <stdio.h>
// #include <conio.h>

/* `void main()` is a function that returns nothing. */
void main()
{    
    /* Declaring three variables. */
    float len,height,area;

    // clrscr();

    /* Asking the user to enter a value for the variable `len` and then storing that value in the variable `len`. */
    printf("Enter the length :: ");
    scanf("%f",&len);
    /* Asking the user to enter a value for the variable `height` and then storing that value in the variable `height`. */
    printf("Enter the height :: ");
    scanf("%f",&height);

    /* Multiplying the value of `len` by the value of `height` and then dividing the result by 2. */
    area = (len*height) / 2;
    /* Printing the value of the variable `area` to the screen. */
    printf("Your Area is :: %.2f\n",area);

    // getch();

}