#include<stdio.h>
int main(){
    extern int i;
    i=20;
    // as extern int i is declaration and not definition so it is error
    printf("i=%d\n",sizeof(i));
    return 0;
}
