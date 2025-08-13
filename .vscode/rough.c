#include <stdio.h>
#include <conio.h>

int main()
{

    int a, b, r;
    char o;

    printf("Enter the first number\n");
    scanf("%d", &a);

    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("Choose the operator\n");
    scanf(" %c", &o);

    switch (o)
    {
    case '+':
        r = a + b;
        printf("The Sum of Two number is %d", r);
        break;
    }

    getch();
}