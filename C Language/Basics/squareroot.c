#include <stdio.h>
#include <math.h>

int main()
{
    float a;

    printf("Enter the number to Print the square root:\n");
    scanf("%f", &a);

    float square = sqrt(a);

    printf("The Square root of the %.2f = %.2f", a, square);

    return 0;
}