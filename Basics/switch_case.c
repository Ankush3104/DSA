#include<stdio.h>
int main()
{
    int a;

    printf("Enter the value of a\n");
    scanf("%d", &a);

    switch(a){
        case 1 :
        printf("You are entered in section 1\n");
        break;

        case 2:
        printf("You are entered in section 2\n");
        break;

        case 3:
        printf("You are entered in section 3\n");
        break;

        default:
        printf("Enter valid section\n");
    }
}