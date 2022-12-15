#include <stdio.h>

void main()
{
    char op;
    float num1, num2, result=0.0f;

    printf("Enter + - * /::\t");
    scanf("%c", &op);
    printf("Enter number 1::\t");
    scanf("%f", &num1);
    printf("Enter number 2::\t");
    scanf("%f",&num2);

    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }

    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

}