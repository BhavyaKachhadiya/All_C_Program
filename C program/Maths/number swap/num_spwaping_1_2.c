/* A preprocessor command that includes the contents of the file `stdio.h` in the program. */
#include <stdio.h>  
/* The function takes two integers as input and swaps them using arithmetic operators */
int main()    
{    
    /* Declaring two variables, `a` and `b`, of type `int`. */
    int a, b;
    
    
    /* Asking the user to enter a value for a. */
    printf("Enter Value of a :: ");
    scanf("%d", &a);

    /* Asking the user to enter a value for b. */
    printf("Enter Value of b :: ");
    scanf("%d", &b);
 printf("Before swap a= %d b= %d\n",a,b);  
    /* Printing the string `Before swap a=` followed by the value of `a` followed by the string ` b=` followed by the value of `b`. */
         
    a=a*b;//a=200 (10*20)    
    b=a/b;//b=10 (200/20)    
    a=a/b;//a=20 (200/10)    
 
    /* Printing the string `After swap a=` followed by the value of `a` followed by the string ` b=`
    followed by the value of `b`. */
    printf("After swap a = %d b = %d",a,b);       

}   