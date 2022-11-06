// Write a c program to enter number and reverse nmuber

#include <stdio.h>

void main()
{
    int num,r=0,rem,a;

    printf("Enter the number:\t");
    scanf("%d",&num);
    a = num;

    for (;num>0;)
    {
        rem= num%10;
        r=r*10+rem;
        num=num/10;
    }
    printf("Reverse of %d = %d",a,r);

}