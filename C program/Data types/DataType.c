//write a c program to define use of primary datatypes

/* A preprocessor directive. It tells the compiler to include the contents of the file `stdio.h` in the
program before compiling. */
#include<stdio.h>
// #include<conio.h> for Turbo C++

/* `void main()` is the main function of the program. It is the entry point of the program. */
void main()
{
    /* Declaring and initializing variables. */
    int a = 5; 
    float b = 36.2; 
    char c = 'd'; 
    double d = 325678; 

    printf("integer type a = %d \n",a); 
    printf("float tpye b = %f \n",b); 
    printf("char tpye c = %c \n",c);
    printf("double tpye d = %lf \n",d); 

    // getch(); for Turbo C++
}

