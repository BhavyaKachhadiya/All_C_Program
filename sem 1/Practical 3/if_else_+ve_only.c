/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program before compiling. */
#include <stdio.h>
// #include <conio.h> for Turbo C++

/* `void main()` is the main function of the program. It is the starting point of the program. */
void main()
{
    //Input Part
    int num; //declaring number
    // clrscr(); for Turbo C++
    printf("Enter the number :: "); // Printing 
    scanf("%d",&num); //taking user value

    //Processing part

    if (num>=0) //conditional applying
    {
        printf("This number is Positive.."); // printing this if the value of user is Positive or >0
    }

    //Output Part
    printf("\n Number is     :: %d",num); //printing number that user have entered
    
    // getch(); for Turbo C++
}