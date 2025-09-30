#include <stdio.h>

int main(void)
{
    int x = 42;                    // x is a box holding 42
    int *p = &x;                   // p is a pointer that holds x's address
    printf("x = %d\n", x);         // print the value in x
    printf("p = %p\n", (void *)p); // print the address stored in p
    printf("*p = %d\n", *p);       // print the value found at that address
    *p = 100;                      // store 100 into the address p points to (changes x)
    printf("x now = %d\n", x);     // x is now 100
    return 0;
}
