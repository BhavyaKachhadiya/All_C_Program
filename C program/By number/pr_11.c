#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float no,sq;
    // clrscr();

    printf("Enter the no is ::");
    scanf("%f",&no);

    no = sqrt(no);

    printf("sq no is ::%.2f",no);
}