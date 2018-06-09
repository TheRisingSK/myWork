#include<stdio.h>
int main(){
    float a, b, c, d;
    a = -5 ;
    b = +10.65;
    c = -a ; // -(-5) becomes +5
    d = -b ;// -(+10.65) becomes -10.65

    printf("c=%f\nd=%f\n", c, d);
    return 0;
}
