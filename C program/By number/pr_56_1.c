#include <stdio.h>
void main()
{
    int i;
    char a = 'a';
    char z = 'z';
    char A = 'A';
    char Z = 'Z';
    printf("\n\na To z using ASCII Value :: 97 to 122\n\n");
    for (i=97;i<=122;i++)
    {
        printf("%c\t",i);
    }
    printf("\n\nA To Z using ASCII Value :: 65 to 90 \n\n");
    for (i=65;i<=90;i++)
    {
        printf("%c\t",i);
    }
    printf("\n\na To z using Char :: a to z\n\n");
    for (i=a;i<=z;i++)
    {
        printf("%c\t",i);
    }
    printf("\n\nA To Z using Char :: A to Z\n");
    for (i=A;i<=Z;i++)
    {
        printf("%c\t",i);
    }
}