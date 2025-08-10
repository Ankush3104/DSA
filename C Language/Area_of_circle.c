#include<stdio.h>
#include<math.h>


int main(){
 double r,area;

    printf("Enter the radius of the circle \n");
    scanf("%lf", &r);

    area = M_PI * r * r;

    printf("The Area of the circle is %lf ",area);

    return 0;
}