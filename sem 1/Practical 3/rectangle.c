#include <stdio.h>
// #include <conio.h>

void main()
{       
    float len,width,area,per;

    // clrscr();

    printf("Enter the length :: ");
    scanf("%f",&len);
    printf("Enter the width :: ");
    scanf("%f",&width);

    area = len*width;
    per = 2*(len + width);

    printf("Your Area is :: %.2f\n",area);
    printf("Your perimeter  is :: %.2f",per);


    // getch();

}



   
    

