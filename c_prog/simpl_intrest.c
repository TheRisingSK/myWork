#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, n;
    float r, si=0;

    printf("Enter principle, no. of years and rate of interest :");
    scanf("%d %d %f", &p, &n, &r);
    si = (p*n*r) / (100);
    printf("Simple Interest =%.2f",si);
    return 0;
}
