#include <stdio.h>
#include <stdlib.h>

int main()
{
    float width, height, area;

    printf("Enter width and height :");
    scanf("%f %f",&width, &height);
    area = width * height;
    printf("Area of Rectangle : %.2f",area);
    return 0;
}
