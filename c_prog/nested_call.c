#include<stdio.h>
int func(int);
int main(){

    int k = 35;
    k  = ( k = func( k = func(k)));
    printf("k=%d",k);
    return 0 ;
}
int func(int k){
    k++;
    return k;
}
