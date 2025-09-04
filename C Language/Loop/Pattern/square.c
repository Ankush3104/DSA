#include <stdio.h>
int main()
{

    int s;

    printf("Enter the lenght of the square \n");
    scanf("%d", &s);

    for (int i = 1; i <= s; i++)
    {
        printf("\n");
        for (int j = 1; j <= s; j++)
        {
            printf("*");
        }
    }

    return 0;
}