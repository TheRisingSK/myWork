#include<stdio.h>
//declaration

extern int a, b;
extern int c;
extern float f;

int main(){

    //definition
    int a, b;
    int c;
    float f;

    //initialization
    a = 10;
    b = 20;

    c = a + b;
    printf("Addition : %d\n", c);

    f = 70.0 / 3.0;
    printf("Division : %.2f\n", f);
    return 0;
}

/*
Addition : 30
Division : 23.33
*/
