#include <stdio.h>

void main ()
{
    char a ;

    printf("Enter Character::\t");
    scanf ("%c",&a);

    if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'|| a=='U')
    {
        printf("%c is vowel",a);
    }
    else{
        printf("%c is a Consonant",a);
    }

}