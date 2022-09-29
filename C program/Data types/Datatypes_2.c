/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program before compilation. */
#include <stdio.h>
/* A header file that contains functions to take input from the user and display output to the user. */
// #include <conio.h>

/* `void main()` is the entry point of the program. */
void main()
{
    /* Declaring variables. */
    int roll_no;
    float per;
    char name[20];

    /* A function that clears the screen. */
    // clrscr(); for Turbo C++

    /* Taking input from the user. */
    printf("Enter your roll_no :: ");
    scanf("%d", &roll_no);
    printf("Enter your prercentage :: ");
    scanf("%f", &per);
    printf("Enter your name :: ");
    scanf("%s", &name);

    printf("your roll no is  :: %d\n", roll_no);
    printf("your prercentage is :: %.2f%%\n", per);
    printf("your name is  :: %s", name);

    // getch(); for Turbo C++
}