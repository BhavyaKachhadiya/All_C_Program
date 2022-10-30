#include <stdio.h>

void main ()
{
    float c,f;

    printf("Enter the temperture of fahrenheit :: ");
    scanf("%f",&f);
    
    c = ((f - 32 )*5/9);

    printf("Your cesius is %.2f\n",c);
    printf("Your fahrenheit is %.2f",f);
}