#include<stdio.h>
#define MAX(a,b) ((a)>(b) ? (a):(b))
void main(){
    int x= 10, y = 200;
    int gra;
    gra = MAX(x,y);
    printf("MAx=%d\n", gra);
}
