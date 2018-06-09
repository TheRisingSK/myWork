#include<stdio.h>
void main(){

    int n = 10;
    int *p1, **p2;

    p1=&n;
    p2=&p1;

    printf("n=%d\n", n);
    printf("*p1=%d\n", *p1);
    printf("**p2=%u\n", **p2);
    printf("&n=%u\n", &n);
    printf("p1=%d\n", p1);
    printf("p2=%d\n", p1);
}
