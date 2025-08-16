#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i = 0;

    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("%d\n", i);
        }
        i++;
    }

    getch();
    return 0;
}