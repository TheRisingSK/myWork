#include<stdio.h>
int main(){

    int n = 5;
    int *p;
    p = &n;
    printf("n=%d\n", n);
    printf("*p=%d\n", *p);
    printf("&n=%d\n", &n);
    printf("p=%d", p);
}
