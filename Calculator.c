#include <stdio.h>
int main()
{
    float a, b, result;
    char calci;

    printf("Enter the First number\n");
    scanf("%f", &a);

    printf("Choose the Operator\n");
    scanf(" %c", &calci); // Added space to consume any leftover newline

    printf("Enter the Second number\n");
    scanf("%f", &b);

    switch (calci)
    {
    case '+':
        result = a + b;
        printf("The Addition of both numbers is %.2f", result);
        break;

    case '-':
        result = a - b;
        printf("The Subbtraction of both number is %.2f", result);
        break;

    case '*':
        result = a * b;
        printf("The Multiplication of both number is %.2f", result);
        break;

    case '/':
        result = a / b;
        printf("The Division of both number is %.2f", result);
        break;

    default:
        printf("Invalid operator.\n");
        break;
    }
}