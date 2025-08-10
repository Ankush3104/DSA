#include<stdio.h>
int main()
{
    int age;

    printf("Enter the your age to check weather you are eligible for Driving license\n");
    scanf("%d", &age);

    if(age>=60){
        printf("You are seniour citizen , Drive very carefully\n");
    }
    else if(age>=18){
        printf("You are eligbile for Driving\n");
    }
    else{
        printf("You are not eligible for driving\n");
    }
}