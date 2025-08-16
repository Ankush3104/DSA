#include<stdio.h>
#include<math.h>


int main(){
 double r,area;
 #define M_PI 3.14159265358979323846

    printf("Enter the radius of the circle \n");
    scanf("%lf", &r);

    area = M_PI * r * r;

    printf("The Area of the circle is %lf ",area);

    return 0;
}