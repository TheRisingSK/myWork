#include<stdio.h>
#include<float.h>
int main(){

    printf("float : %d\n", sizeof(float) );
    printf("double : %d\n", sizeof(double) );
    printf("long double : %d\n", sizeof(long double) );
    printf("Min Value : %d\n", FLT_MIN);
    printf("Max Value : %d\n", FLT_MAX);
    printf("Float Precision Value : %d\n", FLT_DIG);
    printf("Double Precision Value : %d\n", DBL_DIG);

    return 0;
}
/*
float : 4
double : 8
long double : 12
Min Value : 0
Max Value : -536870912
Float Precision Value : 6
Double Precision Value : 15
*/
