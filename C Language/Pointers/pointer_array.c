#include <stdio.h>
int main()
{
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("arr[0] = %d\n", arr[0]);
    printf("*p = %d\n", arr[1]);

    p++;

    printf("arr[1] = %d\n", arr[1]);
    printf("*p = %d\n", *p);

    return 0;
}