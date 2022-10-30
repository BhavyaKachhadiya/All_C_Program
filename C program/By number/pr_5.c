#include <stdio.h>
#include <conio.h>

void main()
{
    int roll_no;
    float per;
    char name[20];

    // clrscr();

    printf("Roll no is    :: ");
    scanf("%d", &roll_no);

    printf("percentage is :: ");
    scanf("%f", &per);

    printf("Name is       :: ");
    scanf("%s", name);

    printf("Roll no is    :: %d\n",roll_no);
    printf("percentage is :: %.2f%%\n",per);
    printf("name is       :: %s\n",name);

    // getch();
}
