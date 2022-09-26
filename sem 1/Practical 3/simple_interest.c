#include <stdio.h>
// #include <conio.h>

void main()
{
    float amt,rate,time,si;
    // clrscr();

    printf("Enter the amt :: ");
    scanf("%f",&amt);
    printf("Enter the rate :: ");
    scanf("%f",&rate);
    printf("Enter the time :: ");
    scanf("%f",&time);

    si = amt*rate*time/100;
    printf("The simple interest is :: %.2f",si);
    // getch();
}