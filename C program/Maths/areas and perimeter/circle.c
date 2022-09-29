/* Including the standard input/output library. */
#include <stdio.h>
// #include <conio.h>

/* `void main()` is a function that returns nothing. */
void main()
{
    /* Declaring the variables. */
    float radius,diameter,cf,area;

    // clrscr();

    /* Asking the user to enter the radius and then it is storing the value in the variable radius. */
    printf("Enter the radius :: ");
    scanf("%f",&radius);

    /* Calculating the diameter, circumference and area of the circle. */
    diameter = 2*radius;
    cf = 2*3.14*radius;
    area = 3.14*radius*radius;

    /* Printing the values of the variables diameter, cf and area. */
    printf("Your diameter is :: %f\n",diameter);
    printf("Your circlecumference  is :: %f\n",cf);
    printf("Your area  is :: %f\n",area);

    // getch();
}
