#include<stdio.h>
#include<math.h>

int main(){
    int a ;

    printf("Enter the number to print the square root\n");
    scanf("%d",&a);

    int root = sqrt(a);

    printf("The square of root of %d is %d",a,root);

    return 0 ;
}