#include <stdio.h>
void main()
{
    char upper;
    int ascii;

    printf("Enter The Letter in UPPERCASE::\t");
    scanf("%c", &upper);

    printf("You Have Enter::%c",upper);

    if(upper >= 'A' && upper <= 'Z')
    {
        ascii=upper+32;
        printf("\nThe lower case letter::%c",ascii);
    }
    else
    {
        printf("\nThe lower case letter::%c",upper);
    }
}