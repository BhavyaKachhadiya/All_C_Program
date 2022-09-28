/* A preprocessor command that includes the contents of the file `stdio.h` in the program. */
#include<stdio.h>  
 /* `int main()` is the main function of the program. */
 int main()    
{    
    /* Declaring the variables a and b. */
    int a, b;     

    /* Asking the user to enter the number 1 and then it is storing the value in the variable a. */
    printf("Enter the Number 1 ::  ");
    scanf("%d",&a);

    /* Asking the user to enter the number 2 and then it is storing the value in the variable b. */
    printf("Enter the Number 2 ::  ");
    scanf("%d",&b);

    /* Printing the value of a and b before swapping. */
    printf("Before swap a= %d b= %d\n",a,b); 
    a=a+b;//a=30 (10+20)    
    b=a-b;//b=10 (30-20)    
    a=a-b;//a=20 (30-10)    
    /* Printing the value of a and b after swapping. */
    printf("After swap a = %d b = %d",a,b);     
}   