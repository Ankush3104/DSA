#include <stdio.h>
int main()
{
    int m;
    printf("Enter the Marks to know your Grade:\n");
    scanf("%d", &m);

    if(m>=90){
        printf("You got a A Grade");
    }
    else if(m<90 && m>=80){
        printf("You got a B Grade");
    }
    else if(m<80 && m>=70){
        printf("You got a C Grade");
    }
    else if(m<70 && m>=60){
        printf("You got a D Grade");
    }
    else{
        printf("You are Failed do not try again");
    }
    
    return 0;
    
}