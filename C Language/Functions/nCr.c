#include <stdio.h>

long long factorial(int n) { // Function to calculate factorial
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate nCr
long long nCr(int n, int r) {
    if (r > n) {
        return 0; // not possible to choose more than n
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int a, b;

    printf("Enter the n: ");
    scanf("%d", &a);

    printf("Enter the r: ");
    scanf("%d", &b);

    printf("nCr = %lld\n", nCr(a, b)); 
    return 0;
}
