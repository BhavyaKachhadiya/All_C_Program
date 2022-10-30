#include <stdio.h>

void main ()
{
    float c,f;

    printf("Enter the temperture of cesius :: ");
    scanf("%f",&c);
    
    f = (c * 9/5) + 32;

    printf("Your cesius is %.2f\n",c);
    printf("Your fahrenheit is %.2f",f);
}