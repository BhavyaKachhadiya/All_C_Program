// input Month
#include <stdio.h>

void main ()
{
    int a;

    printf("Enter Month Number::\t");
    scanf("%d",&a);

    if (a==1)
    {
        printf("31 Days");
    }
    else if(a==2)
    {
        printf("28/29 Days");
    }
    
    else if(a==3)
    {
        printf("31 Days");
    }
    else if(a==4)
    {
        printf("30 Days");
    }
    else if(a==5)
    {
        printf("31 Days");
    }
    else if(a==6)
    {
        printf("30 Days");
    }
    else if(a==7)
    {
        printf("31 Days");
    }
    else if(a==8)
    {
        printf("31 Days");
    }
    else if(a==9)
    {
        printf("30 Days");
    }
    else if(a==10)
    {
        printf("31 Days");
    }
    else if(a==11)
    {
        printf("30 Days");
    }
    else if(a==12)
    {
        printf("31 Days");
    }
    else
    {
        printf("Not Valid");
    }

}