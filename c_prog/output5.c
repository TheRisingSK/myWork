#include<stdio.h>
int main(){
    extern int a;
    //declared
    printf("a=%d\n",a);
    return 0;
}
//defined
int a=20;
