#include <stdio.h>

int main() {
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num > 0; num = num / 10) {
        int digit = num % 10;      
        rev = rev * 10 + digit;   // build reversed number
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
