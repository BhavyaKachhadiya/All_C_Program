/* A preprocessor command that includes the contents of the file `stdio.h` in the program. */
#include <stdio.h>
 /* `int main()` is a function. */
int main()
{
    /* Declaring two variables. */
    int x, y;

    /* Asking the user to enter a value for x. */
    printf("Enter Value of x :: ");
    scanf("%d", &x);
    
    /* Asking the user to enter a value for y. */
    printf("Enter Value of y :: ");
    scanf("%d", &y);
    
    printf("Before swap x= %d y= %d\n",x,y);  
    /* Declaring a new variable called `temp` and assigning it the value of `x`. */
    int temp = x;
    /* Assigning the value of `y` to `x`. */
    x = y;
    /* Assigning the value of `temp` to `y`. */
    y = temp;
 
    /* Printing the values of `x` and `y` to the screen. */
    printf("After Swap: x = %d y = %d\n", x, y);
}