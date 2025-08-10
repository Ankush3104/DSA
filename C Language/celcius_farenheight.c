#include<stdio.h>

int main(){
    float f,c;

    printf("Enter the temerature in Celcius \n");
    scanf("%f",&c);

    f = (c * 9.0/5.0) + 32;

    printf("The temperature in Farenheight is %f\n",f);

    return 0;
}