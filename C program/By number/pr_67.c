// input Month
#include <stdio.h>

void main ()
{
    int a;

    printf("Enter Month Number::\t");
    scanf("%d",&a);

    if (a==1)
    {
        printf("Jan");
    }
    else if(a==2)
    {
        printf("Feb");
    }
    
    else if(a==3)
    {
        printf("Mar");
    }
    else if(a==4)
    {
        printf("Apirl");
    }
    else if(a==5)
    {
        printf("May");
    }
    else if(a==6)
    {
        printf("June");
    }
    else if(a==7)
    {
        printf("July");
    }
    else if(a==8)
    {
        printf("Aug");
    }
    else if(a==9)
    {
        printf("Sep");
    }
    else if(a==10)
    {
        printf("Oct");
    }
    else if(a==11)
    {
        printf("Nov");
    }
    else if(a==12)
    {
        printf("Dec");
    }
    else
    {
        printf("Not Valid");
    }

}