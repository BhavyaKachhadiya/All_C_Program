/* Including the standard input/output library. */
#include <stdio.h>
// #include <conio.h>
#define PIE 3.14

/* `void main()` is a function that returns nothing. */
void main()
{
    /* Declaring the variables. */
    float r,d,cf,area;

    // clrscr();

    /* Asking the user to enter the radius and then it is storing the value in the variable radius. */
    printf("Enter the radius of given circle in cm  :: ");
    scanf("%f",&r);

    /* Calculating the diameter, circumference and area of the circle. */
    d = 2*r;
    cf = 2*PIE*r;
    area = PIE*r*r;

    /* Printing the values of the variables diameter, cf and area. */
    printf("\nRadius of the given circle is           :: %.2f cm\n", r);
    printf("Diameter of the given circle is         :: %.2f cm\n",d);
    printf("Circlecumference of the given circle is :: %.2f cm\n",cf);
    printf("Area of the given circle is             :: %.2f cm\n",area);

    // getch();
}
