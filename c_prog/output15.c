#include<stdio.h>
int fun();
int main(){

    int (*p)()=fun;
    (*p)();
    return 0;
}
/* Loud and clear !
initializing function pointer p to address of fun() */
int fun(){
    printf("Loud and clear !\n");
    return 0;
}
