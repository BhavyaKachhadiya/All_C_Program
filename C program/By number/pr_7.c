/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program. */
#include <stdio.h>
/* A header file that contains functions to take input from the user and display output to the user. */
// #include <conio.h>

/* `void main()` is the main function of the program. It is the function that is called when the
program is run. */
void main()
{
    float no1,no2,div,mul,sum,sub;

    /* Take the input from the user and display it to the user. */

    printf("Enter the value of First value  :: ");
    scanf("%f",&no1);
    printf("Enter the value of Second value :: ");
    scanf("%f",&no2);

    printf("\nThe value of a :: %.2f\n",no1);
    printf("The value of b :: %.2f\n\n",no2);

    div = no1/no2;
    mul = no1*no2;
    sum = no1+no2;
    sub = no1-no2;

    printf("The value of div :: %.2f\n",div);
    printf("The value of mul :: %.2f\n",mul);
    printf("The value of sum :: %.2f\n",sum);
    printf("The value of sub :: %.2f",sub);
    
    // getch(); for Turbo C++
}