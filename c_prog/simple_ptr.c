#include<stdio.h>
void main(){
    int n, *ptr;

    printf("Enter a number :");
    scanf("%d", &n);

    ptr = &n;

    printf("n=%d\n", n);
    printf("&n=%u\n", &n);
    printf("*ptr=%d\n", *ptr);
    printf("&ptr=%u\n", ptr);
}
