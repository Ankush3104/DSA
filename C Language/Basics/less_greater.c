#include<stdio.h>
int main(){
  

    int a,b;

    printf("Enter the First number :\n");
    scanf("%d",&a);

    printf("Enter the Second number :\n");
    scanf("%d",&b);

    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }

    return 0;
}