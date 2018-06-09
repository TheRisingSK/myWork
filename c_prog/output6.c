#include<stdio.h>
int main(){
    extern int a;
    printf("a=%d\n",a);
    return 0;
}
//a=20
int a = 20;
