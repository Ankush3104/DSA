#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

long long ncr(int n, int r)
{
    if (r > n || r < 0)
    {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n;

    printf("Enter the number of rows for Pascal's Triangle:\n");
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        // print leading spaces for pyramid shape
        for (int k = 0; k < n - i - 1; k++)
        {
            printf("   ");  // 3 spaces for alignment
        }

        // print values of the row
        for (int j = 0; j <= i; j++)
        {
            long long icj = ncr(i, j);
            printf("%6lld", icj); // fixed width for neat alignment
        }
        printf("\n");
    }

    return 0;
}
