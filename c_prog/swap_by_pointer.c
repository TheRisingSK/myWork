#include<stdio.h>
void main(){
    int a = 10, b = 20, *p1 = &a, *p2 = &b;

    printf("\nBefore swap values are a:%d, b:%d\n", *p1, *p2);

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    printf("\nAfter swap values are a:%d, b:%d\n", *p1, *p2);
}
