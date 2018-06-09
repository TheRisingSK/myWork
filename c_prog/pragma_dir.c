#include<stdio.h>
void func();
#pragma startup func
#pragma exit func
void main(){
    printf("I am in main() !\n");
}
void func(){
    printf("I am in function !\n");
}
