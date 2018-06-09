#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cel, fare;

    printf("Enter temprature in celcius :");
    scanf("%f",&cel);
    fare = cel * 1.8 + 32;
    printf("Celcius to Farenheit = %.2f",fare);
    return 0;
}
