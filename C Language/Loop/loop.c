#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i = 1;

    while (i <= 10)   // loop till 10
    {
        printf("2 x %d = %d\n", i, 2 * i);
        i++;
    }

    getch();
    return 0;
}
