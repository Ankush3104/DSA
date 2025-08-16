#include <stdio.h>
#include <conio.h>

int main(void)
{
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("You can drive and you are a seniour citizen\n");
    }
    else if (age > 45)
    {
        printf("You can drive and you are an elder\n");
    }
    else if (age >= 18)
    {
        printf("You can drive and you are very young\n");
    }
    else
    {
        printf("you are not eligible for driving\n");
    }

    getch();
    return 0;
}