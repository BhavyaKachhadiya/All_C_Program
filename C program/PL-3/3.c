#include <stdio.h>

void main ()
{
    char a;

    printf("Enter Character::\t");
    scanf("%c",&a);

    if((a>='a'&& a<='z')|| (a>='A' && a<='Z'))
    {
        printf("%c is a Character",a);
    }
    else{
        printf("%c is not a Character",a);
    }
}