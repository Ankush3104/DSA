#include<stdio.h>

int add(int x, int y){
    return x+y;
}

int main(){

    int a,b;

    printf("Ente the first number\n");
    scanf("%d",&a);

    printf("Ente the second number\n");
    scanf("%d",&b);

    int sum = add(a,b);
    printf("The sum of  %d %d is %d",a,b,sum);
    return 0;

}