#include <stdio.h>
#include <conio.h>

int main(void)
{
    int grade;
    // write a program to find grade of a student given his marks based on below:
    // 90-100 (A)
    // 80-90  (B)
    // 70-80  (c)
    // 60-70  (D)
    // 50-60  (E)
    //<50    (F)

    printf("Enter your grades\n");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100)
    {
        printf("Your grade is A\n");
    }
    else if (grade >= 80 && grade < 90)
    {
        printf("Your Grade is B\n");
    }
    else if (grade >= 70 && grade < 80)
    {
        printf("You Grade is C\n");
    }
    else if (grade >= 60 && grade > 70)
    {
        printf("Your Grade is D\n");
    }
    else if (grade >= 50 && grade < 60)
    {
        printf("Your Grade is E\n");
    }
    else if (grade >= 0 && grade < 50)
    {
        printf("You are failed\n");
    }
    else
    {
        printf("Enter the valid number\n");
    }

    getch();
    return 0;
}