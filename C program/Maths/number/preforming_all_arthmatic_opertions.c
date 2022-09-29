/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program. */
#include <stdio.h>
/* A header file that contains functions to take input from the user and display output to the user. */
// #include <conio.h>

/* `void main()` is the main function of the program. It is the function that is called when the
program is run. */
void main()
{
    float a,b,div,mul,sum,sub;

    /* Take the input from the user and display it to the user. */

    printf("Enter the value of a :: ");
    scanf("%f",&a);
    printf("Enter the value of b :: ");
    scanf("%f",&b);

    printf("The value of a :: %.2f ",a);
    printf("The value of b :: %.2f\n",b);

    div = a/b;
    mul = a*b;
    sum = a+b;
    sub = a-b;

    printf("The value of div :: %.2f\n",div);
    printf("The value of mul :: %.2f\n",mul);
    printf("The value of sum :: %.2f\n",sum);
    printf("The value of sub :: %.2f",sub);
    
    // getch(); for Turbo C++
}