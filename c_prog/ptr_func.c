#include<stdio.h>
int power(int **);
int main(){
    int a = 10, *aa;
    aa = &a;
    a = power(&aa);
    printf("a=%d\n", a);
    return 0;
}
int power(int **ptr){
    int b;
    b = **ptr * **ptr;
    return b;
}
