#include<stdio.h>
#define PI 3.14
void main(){
    float area, r;

    printf("Enter radius :");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of circle=%.2f\n", area);
}
