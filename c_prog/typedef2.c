#include<stdio.h>
#define PTR char*
typedef char* ptr;
void main(){
    ptr p1, p2, p3;
    PTR a1, a2, a3;
    printf("\np1=%d", sizeof(p1));
    printf("\np2=%d", sizeof(p2));
    printf("\np3=%d", sizeof(p3));
    printf("\na1=%d", sizeof(a1));
    printf("\na2=%d", sizeof(a2));
    printf("\na3=%d", sizeof(a3));
}
