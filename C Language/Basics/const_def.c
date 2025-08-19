#include <stdio.h>
#define pi_macro 3.14159
int main()
{
    float const pi = 3.14;
    float r;
    float area, ar;

    printf("Enter the radius of the circle");
    scanf("%f", &r);

    area = pi * r * r;
    ar = pi_macro * r * r;

    printf("The area of circle with const pi  is %.2f\n", area);
    printf("The area of circle with define is %.2f\n", ar);
    return 0;
}