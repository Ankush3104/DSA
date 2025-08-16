#include<stdio.h>
int main(){
    int a = 3;
    float b = 3.44;

    // Demonstrating type casting from float to int
    a = (int) b;    // b's value 3.44 will be truncated to 3
    printf("Value of a after type casting: %d\n", a);

    // Demonstrating type casting from int to float
    float c = (float) a;    // Converting int to float
    printf("Value of c after type casting: %.2f\n", c);

    // Showing original float value
    printf("Original value of b: %.2f\n", b);


}