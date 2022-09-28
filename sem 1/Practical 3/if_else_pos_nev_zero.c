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
    /* Checking whether the number is zero or not. */
    if(num==0)
    {
        /* Printing the message "This number is Zero" on the screen. */
        printf("This number is Zero");
    }

    else
    {
         if (num>=0) //conditional applying
        {
            /* Printing the message "This number is Positive.." on the screen. */
            printf("This number is Positive..");
        }
        
        else
        {
            /* Printing the message "This number is Negative.." on the screen. */
            printf("This number is Negative..");
        }
    }
    
    //Output Part
    /* Printing the value of the variable `num` on the screen. */
    printf("\n Number is     :: %d",num); 
    
    // getch(); for Turbo C++
}