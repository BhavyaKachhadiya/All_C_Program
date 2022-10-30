#include <stdio.h>
#define PIE 3.14

void main()
{
    float r,c,d,cf,a;
    // clrscr();
    printf("Enter the radius of the circle :: ");
    scanf("%f",&r);

    d = 2*r;
    cf = 2*PIE*r;
    a = PIE*r*r;
    printf("\nRadius of the circle : %f\n",r);
    printf("Diameter of the circle : %f\n",d);
    printf("circumference of the circle : %f\n",cf);
    printf("area of the circle : %f",a);
    // getch();
}