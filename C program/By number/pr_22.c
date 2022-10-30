#include <stdio.h>
#define PIE 3.14

void main()
{
    float r,a;
    // clrscr();
    printf("Enter the radius of the circle :: ");
    scanf("%f",&r);

    a = PIE*r*r;

    printf("area of the circle :: %f",a);
    // getch();
}