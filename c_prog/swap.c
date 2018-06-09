#include<stdio.h>
void main(){

    int a, b, temp;
    printf("Enter two number :");
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("a=%d, b=%d\n", a, b);
}
