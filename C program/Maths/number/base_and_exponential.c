/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program. */
#include <stdio.h>
/* A header file that contains functions to take input from the user and display output to the user. */
// #include <conio.h>
#include <math.h>

/* `void main()` is the main function of the program. It is the function that is called when the
program is run. */
void main()
{
    int p,b,ans;

    // clrscr(); for Turbo C++

    printf("Enter the base :: ");
    scanf("%d",&b);
    printf("Enter the power :: ");
    scanf("%d",&p);

    ans = pow(p,b);
    
    printf("The answer is %d",ans);  
    // getch(); for Turbo C++
}