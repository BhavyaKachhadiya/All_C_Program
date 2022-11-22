#include <stdio.h>

void main ()
{
    const int PIE=3.14;
    int r,area,peri;

    printf("Enter the radius of the circle::\t");
    scanf("%d",&r);

    peri= 2*PIE *r;
    area= PIE*r*r;

    printf("Perimeter is %d\n",peri);
    printf("Area is %d",area);
}