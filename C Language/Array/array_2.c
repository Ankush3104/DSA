#include <stdio.h>

int main()
{
    int marks[5];

    printf("Enter the marks of the student\n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    // printf("Marks of students is %d %d %d ", marks[0], marks[1], marks[2]);

    for (int i = 0; i < 5; i++)
    {

        scanf("%d",&marks[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("Marks of student %d are %d\n", j + 1, marks[j]);
    }

    return 0;
}
