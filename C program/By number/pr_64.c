#include <stdio.h> 

void main()
{
    char a;

    printf("Enter the Any Things::\t");
    scanf("%c",&a);

    if((a>='a'&& a<='z')|| (a>='A' && a<='Z'))
    {
        printf("%c is a Alphabet",a);
    }
    else if (a>='0' && a<='9')
    {
        printf("%c is a Digit",a);
    }
    else{
        printf("%c is a special Character",a);
    }

}