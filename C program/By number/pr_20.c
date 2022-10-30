// write a program to enter two number and check number is equal or not equal and Number is Maximum number or Minimum number

#include <stdio.h>
// #include <conio.h>

void main()
{
    float no1,no2;
    // clrscr();

    printf("Enter the number 1 ::");
    scanf("%f",&no1);
    printf("Enter the number 2 ::");
    scanf("%f",&no2);
    if (no1==no2)
    {
        printf("Equal Number");
    }
    else
    {
        if (no1>no2)
        {
            printf("No1 is Maximum");
        }
        else 
        {
            printf("No2 is Maximum");
        }
    }
    printf("No 1 is :: %d\n", no1);
    printf("No 2 is :: %d\n", no2);
}