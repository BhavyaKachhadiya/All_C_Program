//write a c program to print your name , branch , 10th precentage

/* A preprocessor command that includes the contents of the file `stdio.h` into the program. */
#include <stdio.h>
// #include<conio.h> for Turbo C++

/* `void main()` is the main function of the program. */
void main()
{
    /* Declaring a variable `name` of type `char` with size `20`. */
    char name[20]; 
    /* Declaring a variable `branch` of type `char` with size `100`. */
    char branch[100]; 
    /* Declaring a variable `tenth_pre` of type `float`. */
    float tenth_pre; 

    // clrscr(); for Turbo C++
 
    /* Asking the user to enter the name and storing it in the variable `name`. */
    printf("Enter the name : "); 
    scanf("%s",&name); 

    /* Asking the user to enter the branch and storing it in the variable `branch`. */
    printf("Enter the branch : "); 
    scanf("%s",&branch); 

    /* Asking the user to enter the tenth percentage and storing it in the variable `tenth_pre`. */
    printf("Enter the tenth Percentage : "); 
    scanf("%f",&tenth_pre); 

    printf("Your name :: %s \n",name);
    printf("Your Branch :: %s \n",branch);
    printf("Your tenth Percentage :: %0.2f \n",tenth_pre);

    // getch(); for Turbo C++
   
}
