#include <stdio.h>
#include <time.h>

int main() {
    register volatile int regVar = 0;  // stored in register
    volatile int normalVar = 0;       // stored in RAM
    clock_t start, end;

    // Test register variable
    start = clock();
    for(long i = 0; i < 100000000; i++) regVar++;
    end = clock();
    printf("Register variable time: %lf\n", (double)(end - start)/CLOCKS_PER_SEC);

    // Test normal variable
    start = clock();
    for(long i = 0; i < 100000000; i++) normalVar++;
    end = clock();
    printf("Normal variable time: %lf\n", (double)(end - start)/CLOCKS_PER_SEC);

    // Use variables so compiler can't ignore them
    printf("Final values: regVar=%d, normalVar=%d\n", regVar, normalVar);

    return 0;
}
