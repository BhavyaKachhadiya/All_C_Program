#include <stdio.h>
// #include <conio.h>

void main()
{    
    float len,height,area;

    // clrscr();

    printf("Enter the length :: ");
    scanf("%f",&len);
    printf("Enter the height :: ");
    scanf("%f",&height);

    area = (len*height) / 2;
    printf("Your Area is :: %.2f\n",area);

    // getch();

}