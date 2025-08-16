#include <stdio.h>
#include <conio.h>

int main(void)
{
    int m1, m2, m3;

    printf("Enter the Marks of physics\n");
    scanf("%d", &m1);
    printf("Enter the Marks of chemistry\n");
    scanf("%d", &m2);
    printf("Enter the Marks of matsh\n");
    scanf("%d", &m3);

    int r = m1 + m2 + m3;

    if (m1 < 33 || m2 < 33 || m3 < 33)
    {
        printf("You are failed because you have less than 33 in individual subjects\n");
    }
    else if ((m1 + m2 + m3) / 3 < 40)
    {
        printf("You are failed\n");
        printf("Your total marks is %d", r);
    }

    else
    {
        printf("You are passed\n");
        printf("Your total is %d", r);
    }

    getch();
    return 0;
}