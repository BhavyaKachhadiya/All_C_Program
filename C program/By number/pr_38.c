#include <stdio.h>

void main()
{
    int num,rev=0,rem,a;

    printf("Enter the number:\t");
    scanf("%d",&num);
    a = num;

    for (;num>0;)
    {
        rem= num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    printf("Reverse of %d = %d\n\n",a,rev);

    if (a==rev)
    {
        printf("%d number is palindrome",rev);
    }
    else
    {
        printf("%d number is not palindrome",rev);
    }
}