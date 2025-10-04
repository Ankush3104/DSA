#include <stdio.h>
int main()
{
    int a, b, c;
    char ch;
    printf("Enter the First Number:\n");
    scanf("%d",&a);

    printf("Choose operator +,-,*,/\n");
    scanf(" %c",&ch);

    printf("Enter Second Number:\n");
    scanf("%d",&b);

    switch (ch)
    {
    case '+':
        c = a + b;
        printf("The sum of %d and %d is %d", a, b, c);
        break;

    case '-':
        c = a - b;
        printf("The Subtraction of %d and %d is %d", a, b, c);
        break;

    case '*':
        c = a * b;
        printf("The multiplication of %d and %d is %d", a, b, c);
        break;

    case '/':
        c = a / b;
        printf("The division of %d and %d is %d", a, b, c);
        break;

    default:
        printf("Invalid\n");
        break;
    }
}