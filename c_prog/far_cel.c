#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  fare, cel=0;

    printf("Enter temprature in farenheit :");
    scanf("%f",&fare);
    cel = (fare-32) * 1.8;
    printf("Farenheit into celcius : %.2f",cel);
    return 0;
}
