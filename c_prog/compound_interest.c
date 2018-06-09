#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float p, n, r, ci;
    printf("Enter principle, years and interest rate :");
    scanf("%f %f %f",&p, &n, &r);
    ci = p * (pow(1+r/100,n));
    printf("Coumpound Interest=%.2f",ci);
    return 0;
}
