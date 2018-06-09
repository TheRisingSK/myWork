#include<stdio.h>
int main(){
    int x = 40;
    {
        int x = 20;
        //x=20 i.e local
        printf("x=%d\n", x);
    }
    // x=40 i.e global
    printf("x=%d\n",x);
    return 0;
}
