/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program before compiling. */
#include <stdio.h>
// #include <conio.h>

/* `void main()` is the main function of the program. It is the function that is called when the
program is run. */
void main()
{       
    /* Declaring the variables. */
    float len,breath,per;

    // clrscr();

    /* Asking the user to enter the length and then storing it in the variable `len`. */
    printf("Enter the length of rectangle :: ");
    scanf("%f",&len);
    /* Asking the user to enter the width and then storing it in the variable `breath`. */
    printf("Enter the breath of rectangle :: ");
    scanf("%f",&breath);

    /* Calculating the area and perimeter of the rectangle. */
   
    per = 2*(len + breath);

    /* Printing the area and perimeter of the rectangle. */
    
    printf("Your perimeter  is :: %.2f",per);


    // getch();

}



   
    

