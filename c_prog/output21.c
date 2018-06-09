#include<stdio.h>
int i;
float j;
int main(){
    int k;
    float l;
    // being global variable the values stored in i=0 and j=0.0
    printf("Global i=%d j=%d\n", i,j);
    // being local variable values are k & l both contains garbage value
    printf("Local k=%d l=%d\n", k, l);
    return 0;
}

