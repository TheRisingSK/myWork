#include"fact.h"

void main(){

    int num, facto;

    printf("Enter a number :");
    scanf("%d", &num);
    facto = factorial(num);
    printf("Factorial=%d\n", facto);
}
