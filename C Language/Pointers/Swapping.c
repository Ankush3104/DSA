#include <stdio.h>

// Swapping using third variable
void swapWithTemp(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Swapping without third variable (using arithmetic)
void swapWithoutTemp(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() {
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    
    swapWithTemp(&a, &b);
    printf("After swapping with temp: a = %d, b = %d\n", a, b);

    swapWithTemp(&a, &b);

    swapWithoutTemp(&a, &b);
    printf("After swapping without temp: a = %d, b = %d\n", a, b);

    return 0;
}
