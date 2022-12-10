#include <stdio.h>

void main()
{
    char ch;

    printf("Enter the character::\t");
    scanf("%c",&ch);

    if(ch>='a'&&ch<='z')
    {
        printf("%c is lowercase",ch);
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("%c is UPPERCASE",ch);
    }
    else{
        printf("%c is Not Valid",ch);
    }
}