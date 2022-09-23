#include <stdio.h>
// #include <conio.h> for Turbo C++

void main()
{
    //Input Part
    int num; //declaring number
    // clrscr(); for Turbo C++
    printf("Enter the number :: "); // Printing 
    scanf("%d",&num); //taking user value

    //Processing part
    if(num==0)
    {
        printf("This number is Zero");
    }

    else
    {
         if (num>=0) //conditional applying
        {
            printf("This number is Positive.."); // printing this if the value of user is Positive or >0
        }
        
        else
        {
            printf("This number is Negative..");
        }
    }
    
    //Output Part
    printf("\n Number is     :: %d",num); //printing number that user have entered
    
    // getch(); for Turbo C++
}