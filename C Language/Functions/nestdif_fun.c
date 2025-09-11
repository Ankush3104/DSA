#include <stdio.h>

void godakash(){
    printf("Now you are in swarg lok bow down infront of Great akash\n");
    return;
}

void england()
{
    printf("You are in England\n");
    godakash();
    return;
}

void australia()
{
    printf("You are in australia\n");
    england();
    return;
}

void india()
{
    printf("You are in india\n");
    australia();
    return;
}

int main()
{
    india();
    return 0;
}