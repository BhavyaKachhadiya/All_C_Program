#include <stdio.h>

void main()
{
    int phy,chem,bio,maths,com,per,sum=0;

    printf("Enter the Marks of Physics ::\t");
    scanf("%d",&phy);
    printf("Enter the Marks of Chemistry ::\t");
    scanf("%d",&chem);
    printf("Enter the Marks of Biology ::\t");
    scanf("%d",&bio);
    printf("Enter the Marks of Mathematics ::\t");
    scanf("%d",&maths);
    printf("Enter the Marks of Computer ::\t");
    scanf("%d",&com);

    sum = phy+chem+bio+maths+com;
    per=sum/5;

    if(per>=90)
    {
        printf("Grade A");
    }

    else if(per>=80)
    {
        printf("Grade B");
    }

    else if(per>=70)
    {
        printf("Grade C");
    }

    else if(per>=60)
    {
        printf("Grade D");
    }

    else if(per>=40)
    {
        printf("Grade E");
    }

    else if (per<=40)
    {
        printf("Grade F");
    }
}