#include <stdio.h>
void main()
{
    char lower;
    int ascii;

    printf("Enter The Letter in lowercase::\t");
    scanf("%c", &lower);

    printf("You Have Enter::%c",lower);

    if(lower >= 'a' && lower <= 'z')
    {
        ascii=lower-32;
        printf("\nThe UPPERCASE letter:: %c",ascii);
    }
    else
    {
        printf("\nThe UPPERCASE letter:: %c",lower);
    }
}