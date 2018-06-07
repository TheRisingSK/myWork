#include<stdio.h>
int main(){

    int a = 10, b = 20, c;

    //addition operator
    c = a + b;
    printf("Addition : %d\n", c);

    //substraction operator
    c = a - b;
    printf("Substraction : %d\n", c);

    //multiplication operator
    c = a * b;
    printf("Multiplication : %d\n", c);

    //Division operator
    c = a / b;
    printf("Division : %.2f\n", c);

    //modulus operator
    c = a % b;
    printf("a%b = %d\n", c);

    //increment operator
    ++a;
    printf("++a = %d\n", a);

    //decrement operator
    --a;
    printf("--a = %d\n", a);
    return 0;
}
/*

Addition : 30
Substraction : -10
Multiplication : 200
Division : 0.00
ab = 10
++a = 11
--a = 10

*/
