// Write a c program to enter number and reverse nmuber using While loop

#include <stdio.h>

void main()
{
    int num,rev=0,rem,a;

    printf("Enter the number:\t");
    scanf("%d",&num);
    a = num;

    while (num>0)
    {
        rem= num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse of %d = %d",a,rev);

}