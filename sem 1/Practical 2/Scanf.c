//write a c program to print your name , branch , 10th precentage

#include <stdio.h>
// #include<conio.h> for Turbo C++

void main()
{
    char name[20]; //declaring name
    char branch[100]; //declaring branch
    float tenth_pre; //declaring Tenth Precentage

    // clrscr(); for Turbo C++
 
    printf("Enter the name : "); // printing for input
    scanf("%s",&name); //taking input

    printf("Enter the branch : "); // printing for input
    scanf("%s",&branch); //taking input

    printf("Enter the tenth Percentage : "); // printing for input
    scanf("%f",&tenth_pre); //taking input

    printf("Your name :: %s \n",name); //printing user value
    printf("Your Branch :: %s \n",branch); //printing user value
    printf("Your tenth Percentage :: %0.2f \n",tenth_pre); //printing user value

    // getch(); for Turbo C++
   
}
