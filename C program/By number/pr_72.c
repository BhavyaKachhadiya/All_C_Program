#include <stdio.h>

void main()
{
    int salary;

    printf("Enter you Salary::\t");
    scanf("%d",&salary);

    if(salary<=10000)
    {
        printf("HRA=20%% ");
        printf("DA=80%%");
    }
    else if(salary<=20000)
    {
        printf("HRA=25%% ");
        printf("DA=90%%");
    }
    else if (salary>=20001)
    {
        printf("HRA=30%% ");
        printf("DA=95%%");
    }
}