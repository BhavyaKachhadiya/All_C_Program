#include <stdio.h>
// #include <conio.h>

void main()
{
    float radius,diameter,cf,area;

    // clrscr();

    printf("Enter the radius :: ");
    scanf("%f",&radius);

    diameter = 2*radius;
    cf = 2*3.14*radius;
    area = 3.14*radius*radius;

    printf("Your diameter is :: %f\n",diameter);
    printf("Your circlecumference  is :: %f\n",cf);
    printf("Your area  is :: %f\n",area);

    // getch();
}
