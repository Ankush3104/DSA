#include <stdio.h>
int main()
{
    float a, b, c, average;

    printf("Enter the first number:\n");
    scanf("%f", &a);

    printf("Enter the Second number:\n");
    scanf("%f",&b);

    printf("Enter the Third number:\n");
    scanf("%f", &c);

    average = (a + b + c) / 3;

    printf("The average of three number is %.2f", average);

    return 0;
}