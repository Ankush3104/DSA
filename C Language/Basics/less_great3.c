#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the First number:\n");
    scanf("%d", &a);

    printf("Enter the Second number:\n");
    scanf("%d", &b);

    printf("Enter the Third number:\n");
    scanf("%d", &c);

    if (a > b || a > b || a > c)
    {
        printf("%d is greater", a);
    }
    else if (b > c)
    {
        printf("%d is greater ", b);
    }

    else
    {
        printf("%d is greater", c);
    }
}
