#include<stdio.h>
#include<math.h>

int main(){
    float r,h,volume;

    printf("Enter the Radius of the cylinder \n");
    scanf("%f",&r);

    printf("Enter the height of the cylinder \n");
    scanf("%f",&h);

    volume = M_PI * r * r * h;

    printf("The volume of the Cylinder is %f\n",volume);

    return 0;

}